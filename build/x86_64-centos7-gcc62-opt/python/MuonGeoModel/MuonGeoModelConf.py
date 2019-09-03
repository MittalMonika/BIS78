#Thu Aug 29 16:25:44 2019"""Automatically generated. DO NOT EDIT please"""
from GaudiKernel.GaudiHandles import *
from AthenaCommon.Configurable import *

class MuonDetectorTool( ConfigurableAlgTool ) :
  __slots__ = { 
    'MonitorService' : 'MonitorSvc', # str
    'OutputLevel' : 7, # int
    'AuditTools' : False, # bool
    'AuditInitialize' : False, # bool
    'AuditStart' : False, # bool
    'AuditStop' : False, # bool
    'AuditFinalize' : False, # bool
    'ExtraInputs' : [], # list
    'ExtraOutputs' : [], # list
    'EvtStore' : ServiceHandle('StoreGateSvc'), # GaudiHandle
    'DetStore' : ServiceHandle('StoreGateSvc/DetectorStore'), # GaudiHandle
    'UserStore' : ServiceHandle('UserDataSvc/UserDataSvc'), # GaudiHandle
    'LayoutName' : 'R.08', # str
    'UseConditionDb' : 1, # int
    'UseAsciiConditionData' : 0, # int
    'BuildFromNova' : 0, # int
    'IncludeCutouts' : 0, # int
    'IncludeCutoutsBog' : 0, # int
    'IncludeCtbBis' : 0, # int
    'FillCacheInitTime' : 0, # int
    'DumpMemoryBreakDown' : False, # bool
    'EnableFineClashFixing' : 0, # int
    'StationSelection' : 0, # int
    'SelectedStations' : [  ], # list
    'SelectedStJzz' : [  ], # list
    'SelectedStJff' : [  ], # list
    'ControlAlines' : 111111, # int
    'DumpAlines' : False, # bool
    'AlternateASZTFile' : '', # str
    'MinimalGeoFlag' : 0, # int
    'EnableCscInternalAlignment' : False, # bool
    'ControlCscInternalAlines' : 111111, # int
    'DumpCscInternalAlines' : False, # bool
    'UseIlinesFromGM' : True, # bool
    'AlternateCscIntAlignFile' : '', # str
    'EnableMdtDeformations' : 0, # int
    'EnableMdtAsBuiltParameters' : 0, # int
    'AlternateAsBuiltParamAlignFile' : '', # str
    'TheMuonAlignmentTool' : PublicToolHandle('IMuonAlignmentDbTool'), # GaudiHandle
    'ForceSwitchOnOff_BUILDINERTMATERIALS' : 0, # int
    'ForceSwitchOnOff_MINIMALGEO' : 0, # int
    'ForceSwitchOnOff_BUILDENDCAP' : 0, # int
    'ForceSwitchOnOff_BUILDCALOSADDLE' : 0, # int
    'ForceSwitchOnOff_BUILDBARRELTOROID' : 0, # int
    'ForceSwitchOnOff_BUILDENDCAPTOROID' : 0, # int
    'ForceSwitchOnOff_BUILDFEET' : 0, # int
    'ForceSwitchOnOff_BUILDDISKSHIELD' : 0, # int
    'ForceSwitchOnOff_BUILDTOROIDSHIELD' : 0, # int
    'ForceSwitchOnOff_BUILDFORWARDSHIELD' : 0, # int
  }
  _propertyDocDct = { 
    'TheMuonAlignmentTool' : """ a Tool to read from the condDB and save in StoreGate """,
    'UserStore' : """ Handle to a UserDataSvc/UserDataSvc instance: it will be used to retrieve user data during the course of the job """,
    'DetStore' : """ Handle to a StoreGateSvc/DetectorStore instance: it will be used to retrieve data during the course of the job """,
    'EvtStore' : """ Handle to a StoreGateSvc instance: it will be used to retrieve data during the course of the job """,
  }
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(MuonDetectorTool, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'MuonGeoModel'
  def getType( self ):
      return 'MuonDetectorTool'
  pass # class MuonDetectorTool
