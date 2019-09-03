# Run arguments file auto-generated on Thu Aug 29 16:30:14 2019 by:
# JobTransform: EVNTtoHITS
# Version: $Id: trfExe.py 792052 2017-01-13 13:36:51Z mavogel $
# Import runArgs class
from PyJobTransforms.trfJobOptions import RunArguments
runArgs = RunArguments()
runArgs.trfSubstepName = 'EVNTtoHITS' 

runArgs.conditionsTag = 'OFLCOND-MC16-SDR-20'
runArgs.physicsList = 'FTFP_BERT_ATL_VALIDATION'
runArgs.truthStrategy = 'MC15aPlus'
runArgs.randomSeed = 1234
runArgs.simulator = 'FullG4'
runArgs.preInclude = ['preInclude.GeantinoGenerator.py', 'SimulationJobOptions/preInclude.BeamPipeKill.py']
runArgs.postInclude = ['postInclude.MuonGeomodel.py']
runArgs.preExec = ['simFlags.SimBarcodeOffset.set_Value_and_Lock(200000)', 'simFlags.TRTRangeCut=30.0;simFlags.TightMuonStepping=True']
runArgs.maxEvents = 1000
runArgs.geometryVersion = 'ATLAS-R2-2016-01-00-01_VALIDATION'
runArgs.postExec = ['from EvgenProdTools.EvgenProdToolsConf import SimTimeEstimate; topSeq+=SimTimeEstimate("SimTimeEstimate")']
runArgs.DataRunNumber = 284500

# Input data

# Output data
runArgs.outputHITSFile = 'OUT.HITS.pool.root'
runArgs.outputHITSFileType = 'HITS'

# Extra runargs

# Extra runtime runargs

# Literal runargs snippets
