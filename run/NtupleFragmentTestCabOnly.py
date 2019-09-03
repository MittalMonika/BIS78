print "in NtupleFragment"


from GeoModelSvc.GeoModelSvcConf import GeoModelSvc
GeoModelSvc = GeoModelSvc()
#GeoModelSvc.MuonVersionOverride = "MuonSpectrometer-R.08.01"
GeoModelSvc.MuonVersionOverride = "MuonSpectrometer-R.08.01-BIS78v2"


from AthenaCommon.AlgSequence import AlgSequence

from AthenaCommon import CfgGetter
from AthenaCommon.CfgGetter import getPublicTool, getPrivateTool, getService, getAlgorithm
RPC_DigitizationTool=getPublicTool("RpcDigitizationTool")
#RPC_DigitizationTool.OutputLevel = DEBUG                                         
RPC_DigitizationTool.Force_BOG_BOF_DoubletR2_OFF    = False
RPC_DigitizationTool.ValidationSetup = 1                           
RPC_DigitizationTool.turnON_efficiency = False # gaps and panels always efficient  
RPC_DigitizationTool.Efficiency_fromCOOL = False # irrelevant since the above      
RPC_DigitizationTool.turnON_clustersize = True # defauls CS 
RPC_DigitizationTool.ClusterSize_fromCOOL = False # irrelevant since the above     
RPC_DigitizationTool.KillDeadStrips = False
RPC_DigitizationTool.IgnoreRunDependentConfig = True



from AthenaCommon.AppMgr import ServiceMgr
import MuonRPC_Cabling.MuonRPC_CablingConfig


#######################
#  CHOICE OF CABLING  #
#######################
## CABLING FROM FILES
#ServiceMgr.MuonRPC_CablingSvc.RPCMapfromCool=False
#ServiceMgr.MuonRPC_CablingSvc.ConfFileName="LVL1confAtlasRUN2_ver104.data" # default is "ConfFileName.txt"
#ServiceMgr.MuonRPC_CablingSvc.CorrFileName="LVL1confAtlasRUN2_ver104.corr" # default is "ConfFileName.txt"
######################
# CABLING FROM LOCAL TEST db
#ServiceMgr.MuonRPC_CablingSvc.RPCMapfromCool=True
#from IOVDbSvc.CondDB import conddb
#conddb.addFolder("RPC","/RPC/CABLING/MAP_SCHEMA<tag>RPCCablingMapSchema_MC16</tag><dbConnection>sqlite://;schema=RPC_CABLING_TOT.db;dbname=OFLP200</dbConnection>",force=True)
#conddb.addFolder("RPC","/RPC/CABLING/MAP_SCHEMA_CORR<tag>RPCCablingMapSchemaCorr_MC16</tag><dbConnection>sqlite://;schema=RPC_CABLING_TOT.db;dbname=OFLP200</dbConnection>",force=True)
#conddb.addFolder("RPC","/RPC/CABLING/MAP_SCHEMA<tag>RPCCablingMapSchema_2017_01</tag><dbConnection>sqlite://;schema=Cabling_2016-2017.db;dbname=CONDBR2</dbConnection>",force=True)
#conddb.addFolder("RPC","/RPC/CABLING/MAP_SCHEMA<tag>RPCCablingMapSchemaCorr_2017_01</tag><dbConnection>sqlite://;schema=Cabling_2016-2017.db;dbname=CONDBR2</dbConnection>",force=True)
#conddb.blockFolder("/RPC/CABLING/MAP_SCHEMA")
#conddb.blockFolder("/RPC/CABLING/MAP_SCHEMA_CORR")
###########################
# CHOICE OF TRIGGER ROADS #
###########################
# ROADS ALL OPEN 
# ServiceMgr.MuonRPC_CablingSvc.RPCTriggerRoadsfromCool=False
# ServiceMgr.MuonRPC_CablingSvc.DatabaseRepository="DUMMY";
#######################
# ROADS FROM ASCII FILES
# ServiceMgr.MuonRPC_CablingSvc.RPCTriggerRoadsfromCool=False
# ServiceMgr.MuonRPC_CablingSvc.DatabaseRepository="ATLAS.data";
#######################
# ROADS FROM LOCAL db
#ServiceMgr.MuonRPC_CablingSvc.RPCTriggerRoadsfromCool=True
#from IOVDbSvc.CondDB import conddb
#conddb.addFolder("RPC","/RPC/TRIGGER/CM_THR_ETA<tag>RPCTriggerCMThrEta_RUN12_MC16_01</tag><dbConnection>sqlite://;schema=RPC_TRIGGER_CM_THR_ETA_ALL.db;dbname=OFLP200</dbConnection>",force=True)
#conddb.addFolder("RPC","/RPC/TRIGGER/CM_THR_PHI<tag>RPCTriggerCMThrPhi_RUN12_MC16_01</tag><dbConnection>sqlite://;schema=RPC_TRIGGER_CM_THR_PHI_ALL.db;dbname=OFLP200</dbConnection>",force=True)
#conddb.blockFolder("/RPC/TRIGGER/CM_THR_ETA")
#conddb.blockFolder("/RPC/TRIGGER/CM_THR_PHI")
###conddb.addFolderSplitMC("RPC","/RPC/TRIGGER/CM_THR_ETA", "/RPC/TRIGGER/CM_THR_ETA")
###conddb.addFolderSplitMC("RPC","/RPC/TRIGGER/CM_THR_PHI", "/RPC/TRIGGER/CM_THR_PHI")
#########################

from AthenaCommon.AlgSequence import AlgSequence
topSequence = AlgSequence()

from MuonRPC_Cabling.MuonRPC_CablingConf import MuonRpcCablingTest
testAlgo = MuonRpcCablingTest()
#testAlgo.selectedSide = "A"
#testAlgo.selectedSide = "" ##### 21, 22 (25,26) for sector 12(14) side C ### 53,54 e 57,58 on side A 
#testAlgo.selectedSectors  = [ 21, 22, 25, 26, 53, 54, 57, 58 ]
#testAlgo.selectedSectors  = [ 21 ]
#testAlgo.selectedRois  = [ 0, 1 ]
#testAlgo.OutputLevel = INFO
#testAlgo.testOnlyFirstLastCMChannel = True
topSequence += testAlgo


######################## RPC rdo to prd 

from MuonRPC_CnvTools.MuonRPC_CnvToolsConf import Muon__RpcRdoToPrepDataTool
RpcRdoToPrepDataTool = Muon__RpcRdoToPrepDataTool("RpcPrepDataProviderTool")
# property had to be removed for technical reasons
# RpcRdoToPrepDataTool.dumpOffToOnlineMapToFile = False
ToolSvc += RpcRdoToPrepDataTool
#
from MuonRdoToPrepData.MuonRdoToPrepDataConf import RpcRdoToRpcPrepData
RpcRdoToRpcPrepData = RpcRdoToRpcPrepData()
RpcRdoToRpcPrepData.PrintPrepData = False
#
topSequence += RpcRdoToRpcPrepData
######################## end of RPC rdo to prd 


from MuonSimHitToPrdTest.MuonSimHitToPrdTestConf import  RPC_SimHitToPrdCBNTAlgo
RPC_SimHitToPrdCBNTAlgo = RPC_SimHitToPrdCBNTAlgo()
topSequence += RPC_SimHitToPrdCBNTAlgo
RPC_SimHitToPrdCBNTAlgo.OutputLevel=INFO
RPC_SimHitToPrdCBNTAlgo.doRPCRDO=True
RPC_SimHitToPrdCBNTAlgo.doRPCPrep=True

theApp.HistogramPersistency = "ROOT"
from AthenaCommon.AppMgr import ServiceMgr
ServiceMgr.NTupleSvc.Output = [ "FILE DATAFILE='RPCntuple.root' OPT='NEW'" ]


#topSequence.RpcDigitToRpcRDO.OutputLevel = DEBUG
#topSequence.RpcDigitToRpcRDO.CMAdebug = 8191


ServiceMgr.MessageSvc.defaultLimit=99999999
MessageSvc.Format = "% F%50W%S%7W%R%T %0W%M"

print "out NtupleFragment"




















