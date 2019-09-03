#! /bin/sh
# DBRelease setup
echo Setting up DBRelease /cvmfs/atlas.cern.ch/repo/sw/database/DBRelease/current environment
export DBRELEASE=current
export CORAL_AUTH_PATH=/cvmfs/atlas.cern.ch/repo/sw/database/DBRelease/current/XMLConfig
export CORAL_DBLOOKUP_PATH=/cvmfs/atlas.cern.ch/repo/sw/database/DBRelease/current/XMLConfig
export TNS_ADMIN=/cvmfs/atlas.cern.ch/repo/sw/database/DBRelease/current/oracle-admin
DATAPATH=/cvmfs/atlas.cern.ch/repo/sw/database/DBRelease/current:$DATAPATH
# Customised environment
athena.py --preloadlib=/cvmfs/atlas.cern.ch/repo/sw/software/21.3/AthenaExternals/21.3.5/InstallArea/x86_64-slc6-gcc62-opt/lib/libintlc.so.5:/cvmfs/atlas.cern.ch/repo/sw/software/21.3/AthenaExternals/21.3.5/InstallArea/x86_64-slc6-gcc62-opt/lib/libimf.so runargs.EVNTtoHITS.py SimuJobTransforms/skeleton.EVGENtoHIT_ISF.py
