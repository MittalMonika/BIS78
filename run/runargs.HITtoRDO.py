# Run arguments file auto-generated on Thu Aug 29 16:37:53 2019 by:
# JobTransform: HITtoRDO
# Version: $Id: trfExe.py 792052 2017-01-13 13:36:51Z mavogel $
# Import runArgs class
from PyJobTransforms.trfJobOptions import RunArguments
runArgs = RunArguments()
runArgs.trfSubstepName = 'HITtoRDO' 

runArgs.conditionsTag = 'OFLCOND-MC16-SDR-20'
runArgs.preExec = ['from AthenaCommon.DetFlags import DetFlags;DetFlags.ID_setOff();DetFlags.Calo_setOff();DetFlags.Muon_setOn();DetFlags.MDT_setOff();DetFlags.CSC_setOff();DetFlags.TGC_setOff();DetFlags.RPC_setOn();DetFlags.digitize.MDT_setOff();DetFlags.digitize.TGC_setOff();DetFlags.digitize.RPC_setOn();DetFlags.digitize.CSC_setOff();DetFlags.Truth_setOn()']
runArgs.postInclude = ['NtupleFragmentTestCabOnly.py']
runArgs.maxEvents = -1
runArgs.digiSeedOffset2 = 5678
runArgs.DataRunNumber = 284500
runArgs.digiSeedOffset1 = 1234
runArgs.geometryVersion = 'ATLAS-R2-2016-01-00-01_VALIDATION'

# Input data
runArgs.inputHITSFile = ['OUT.HITS.pool.root']
runArgs.inputHITSFileType = 'HITS'
runArgs.inputHITSFileNentries = 1000L
runArgs.HITSFileIO = 'input'

# Output data
runArgs.outputRDOFile = 'OUT.RDO.pool.root'
runArgs.outputRDOFileType = 'RDO'

# Extra runargs

# Extra runtime runargs
try:
    runArgs.LowPtMinbiasHitsFile = runArgs.inputLowPtMinbiasHitsFile
except AttributeError:
    print "WARNING - AttributeError for LowPtMinbiasHitsFile"
try:
    runArgs.beamGasHitsFile = runArgs.inputBeamGasHitsFile
except AttributeError:
    print "WARNING - AttributeError for beamGasHitsFile"
try:
    runArgs.cavernHitsFile = runArgs.inputCavernHitsFile
except AttributeError:
    print "WARNING - AttributeError for cavernHitsFile"
try:
    runArgs.HighPtMinbiasHitsFile = runArgs.inputHighPtMinbiasHitsFile
except AttributeError:
    print "WARNING - AttributeError for HighPtMinbiasHitsFile"
try:
    runArgs.beamHaloHitsFile = runArgs.inputBeamHaloHitsFile
except AttributeError:
    print "WARNING - AttributeError for beamHaloHitsFile"

# Literal runargs snippets
