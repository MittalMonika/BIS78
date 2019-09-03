# Generated by lcg_generate_env...
if [ -z "${LCG_RELEASE_BASE}" ]; then
   export LCG_RELEASE_BASE=/cvmfs/atlas.cern.ch/repo/sw/software/21.3/sw/lcg/releases
fi
if [ -z "${LCG_PLATFORM}" ]; then
   export LCG_PLATFORM=x86_64-slc6-gcc62-opt
fi
if [ -z "${G4VERS}" ]; then
   export G4VERS=geant4.10.1.patch03.atlas02
fi
if [ -z "${G4PATH}" ]; then
   export G4PATH=/afs/cern.ch/atlas/offline/external/geant4/releases
fi
if [ -z "${GEANT4}" ]; then
   export GEANT4=/cvmfs/atlas.cern.ch/repo/sw/software/21.3/AthenaExternals/21.3.5/InstallArea/x86_64-slc6-gcc62-opt
fi
if [ -z "${Geant4_data}" ]; then
   export Geant4_data=${G4PATH}/share/${G4VERS}/data
fi
if [ -z "${G4INSTALL}" ]; then
   export G4INSTALL=${GEANT4}
fi
if [ -z "${G4INCLUDE}" ]; then
   export G4INCLUDE=${G4INSTALL}/include/Geant4
fi
if [ -z "${G4LIB}" ]; then
   export G4LIB=${G4INSTALL}/lib
fi
if [ -z "${G4SYSTEM}" ]; then
   export G4SYSTEM=Linux-g++
fi
if [ -z "${G4LEVELGAMMADATA}" ]; then
   export G4LEVELGAMMADATA=${G4PATH}/share/${G4VERS}/data/PhotonEvaporation
fi
if [ -z "${G4NEUTRONHPDATA}" ]; then
   export G4NEUTRONHPDATA=${G4PATH}/share/${G4VERS}/data/G4NDL
fi
if [ -z "${G4LEDATA}" ]; then
   export G4LEDATA=${G4PATH}/share/${G4VERS}/data/G4EMLOW
fi
if [ -z "${G4NEUTRONXSDATA}" ]; then
   export G4NEUTRONXSDATA=${G4PATH}/share/${G4VERS}/data/G4NEUTRONXS
fi
if [ -z "${G4SAIDXSDATA}" ]; then
   export G4SAIDXSDATA=${G4PATH}/share/${G4VERS}/data/G4SAIDDATA
fi
export PYTHONHOME=${LCG_RELEASE_BASE}/LCG_88/Python/2.7.13/x86_64-slc6-gcc62-opt
export ROOTSYS=${LCG_RELEASE_BASE}/LCG_88/ROOT/6.08.06/x86_64-slc6-gcc62-opt
if [ -z "${GAUDI_ROOT}" ]; then
   export GAUDI_ROOT=/cvmfs/atlas.cern.ch/repo/sw/software/21.3/GAUDI/21.3.5/InstallArea/x86_64-slc6-gcc62-opt
fi
if [ -z "${JOBOPTSEARCHPATH}" ]; then
   export JOBOPTSEARCHPATH=${GAUDI_ROOT}/jobOptions
else
   export JOBOPTSEARCHPATH=${GAUDI_ROOT}/jobOptions:${JOBOPTSEARCHPATH}
fi
if [ -z "${DATAPATH}" ]; then
   export DATAPATH=${GAUDI_ROOT}/share
else
   export DATAPATH=${GAUDI_ROOT}/share:${DATAPATH}
fi
if [ -z "${PYTHONPATH}" ]; then
   export PYTHONPATH=${LCG_RELEASE_BASE}/LCG_88/CORAL/3_1_8/x86_64-slc6-gcc62-opt/python:${LCG_RELEASE_BASE}/LCG_88/CORAL/3_1_8/x86_64-slc6-gcc62-opt/lib:${ROOTSYS}/lib:${G4INSTALL}/python:${GAUDI_ROOT}/python:/cvmfs/atlas.cern.ch/repo/sw/software/21.3/Athena/21.3.5/InstallArea/x86_64-slc6-gcc62-opt/python
else
   export PYTHONPATH=${LCG_RELEASE_BASE}/LCG_88/CORAL/3_1_8/x86_64-slc6-gcc62-opt/python:${LCG_RELEASE_BASE}/LCG_88/CORAL/3_1_8/x86_64-slc6-gcc62-opt/lib:${ROOTSYS}/lib:${G4INSTALL}/python:${GAUDI_ROOT}/python:/cvmfs/atlas.cern.ch/repo/sw/software/21.3/Athena/21.3.5/InstallArea/x86_64-slc6-gcc62-opt/python:${PYTHONPATH}
fi
if [ -z "${PATH}" ]; then
   export PATH=${PYTHONHOME}/bin:${LCG_RELEASE_BASE}/LCG_88/CORAL/3_1_8/x86_64-slc6-gcc62-opt/bin:${ROOTSYS}/bin:${G4INSTALL}/bin:/cvmfs/atlas.cern.ch/repo/sw/software/21.3/Athena/21.3.5/InstallArea/x86_64-slc6-gcc62-opt/bin
else
   export PATH=${PYTHONHOME}/bin:${LCG_RELEASE_BASE}/LCG_88/CORAL/3_1_8/x86_64-slc6-gcc62-opt/bin:${ROOTSYS}/bin:${G4INSTALL}/bin:/cvmfs/atlas.cern.ch/repo/sw/software/21.3/Athena/21.3.5/InstallArea/x86_64-slc6-gcc62-opt/bin:${PATH}
fi
if [ -z "${LD_LIBRARY_PATH}" ]; then
   export LD_LIBRARY_PATH=${LCG_RELEASE_BASE}/LCG_88/tbb/44_20160413/x86_64-slc6-gcc62-opt/lib:${PYTHONHOME}/lib:${G4LIB}:${LCG_RELEASE_BASE}/LCG_88/XercesC/3.1.3/x86_64-slc6-gcc62-opt/lib:${LCG_RELEASE_BASE}/LCG_88/Boost/1.62.0/x86_64-slc6-gcc62-opt/lib::${LCG_RELEASE_BASE}/LCG_88/Boost/1.62.0/x86_64-slc6-gcc62-opt/lib::::${LCG_RELEASE_BASE}/LCG_88/CORAL/3_1_8/x86_64-slc6-gcc62-opt/lib:${ROOTSYS}/lib:${GAUDI_ROOT}/lib:/cvmfs/atlas.cern.ch/repo/sw/software/21.3/Athena/21.3.5/InstallArea/x86_64-slc6-gcc62-opt/lib
else
   export LD_LIBRARY_PATH=${LCG_RELEASE_BASE}/LCG_88/tbb/44_20160413/x86_64-slc6-gcc62-opt/lib:${PYTHONHOME}/lib:${G4LIB}:${LCG_RELEASE_BASE}/LCG_88/XercesC/3.1.3/x86_64-slc6-gcc62-opt/lib:${LCG_RELEASE_BASE}/LCG_88/Boost/1.62.0/x86_64-slc6-gcc62-opt/lib::${LCG_RELEASE_BASE}/LCG_88/Boost/1.62.0/x86_64-slc6-gcc62-opt/lib::::${LCG_RELEASE_BASE}/LCG_88/CORAL/3_1_8/x86_64-slc6-gcc62-opt/lib:${ROOTSYS}/lib:${GAUDI_ROOT}/lib:/cvmfs/atlas.cern.ch/repo/sw/software/21.3/Athena/21.3.5/InstallArea/x86_64-slc6-gcc62-opt/lib:${LD_LIBRARY_PATH}
fi
if [ -z "${ROOT_INCLUDE_PATH}" ]; then
   export ROOT_INCLUDE_PATH=${LCG_RELEASE_BASE}/LCG_88/tbb/44_20160413/x86_64-slc6-gcc62-opt/include::${PYTHONHOME}/include/python2.7::${G4INCLUDE}:${LCG_RELEASE_BASE}/LCG_88/XercesC/3.1.3/x86_64-slc6-gcc62-opt/include::${LCG_RELEASE_BASE}/LCG_88/Boost/1.62.0/x86_64-slc6-gcc62-opt/include/boost-1_62::${LCG_RELEASE_BASE}/LCG_88/Boost/1.62.0/x86_64-slc6-gcc62-opt/include/boost-1_62::::${G4INSTALL}/include::${LCG_RELEASE_BASE}/LCG_88/CORAL/3_1_8/x86_64-slc6-gcc62-opt/include::${LCG_RELEASE_BASE}/LCG_88/eigen/3.2.9/x86_64-slc6-gcc62-opt/include/eigen3::${ROOTSYS}/include::${G4INSTALL}/include:${GAUDI_ROOT}/include:/cvmfs/atlas.cern.ch/repo/sw/software/21.3/Athena/21.3.5/InstallArea/x86_64-slc6-gcc62-opt/include
else
   export ROOT_INCLUDE_PATH=${LCG_RELEASE_BASE}/LCG_88/tbb/44_20160413/x86_64-slc6-gcc62-opt/include::${PYTHONHOME}/include/python2.7::${G4INCLUDE}:${LCG_RELEASE_BASE}/LCG_88/XercesC/3.1.3/x86_64-slc6-gcc62-opt/include::${LCG_RELEASE_BASE}/LCG_88/Boost/1.62.0/x86_64-slc6-gcc62-opt/include/boost-1_62::${LCG_RELEASE_BASE}/LCG_88/Boost/1.62.0/x86_64-slc6-gcc62-opt/include/boost-1_62::::${G4INSTALL}/include::${LCG_RELEASE_BASE}/LCG_88/CORAL/3_1_8/x86_64-slc6-gcc62-opt/include::${LCG_RELEASE_BASE}/LCG_88/eigen/3.2.9/x86_64-slc6-gcc62-opt/include/eigen3::${ROOTSYS}/include::${G4INSTALL}/include:${GAUDI_ROOT}/include:/cvmfs/atlas.cern.ch/repo/sw/software/21.3/Athena/21.3.5/InstallArea/x86_64-slc6-gcc62-opt/include:${ROOT_INCLUDE_PATH}
fi
