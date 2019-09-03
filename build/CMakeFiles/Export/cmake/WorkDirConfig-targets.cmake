# Generated by CMake

if("${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION}" LESS 2.5)
   message(FATAL_ERROR "CMake >= 2.6.0 required")
endif()
cmake_policy(PUSH)
cmake_policy(VERSION 2.6)
#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Protect against multiple inclusion, which would fail when already imported targets are added once more.
set(_targetsDefined)
set(_targetsNotDefined)
set(_expectedTargets)
foreach(_expectedTarget WorkDir::IdDictParserPkg WorkDir::IdDictParserPkgPrivate WorkDir::IdDictParser WorkDir::tid WorkDir::test_det_id WorkDir::MuonReadoutGeometryPkg WorkDir::MuonReadoutGeometryPkgPrivate WorkDir::MuonReadoutGeometry WorkDir::MuonG4SDPkg WorkDir::MuonG4SDPkgPrivate WorkDir::MuonG4SD WorkDir::MuonGeoModelPkg WorkDir::MuonGeoModelPkgPrivate WorkDir::MuonGeoModelLib WorkDir::MuonGeoModel WorkDir::MuonIdHelpersPkg WorkDir::MuonIdHelpersPkgPrivate WorkDir::MuonIdHelpersLib WorkDir::MuonIdHelpers WorkDir::test_muon_id WorkDir::MuonSimEventPkg WorkDir::MuonSimEventPkgPrivate WorkDir::MuonSimEvent)
  list(APPEND _expectedTargets ${_expectedTarget})
  if(NOT TARGET ${_expectedTarget})
    list(APPEND _targetsNotDefined ${_expectedTarget})
  endif()
  if(TARGET ${_expectedTarget})
    list(APPEND _targetsDefined ${_expectedTarget})
  endif()
endforeach()
if("${_targetsDefined}" STREQUAL "${_expectedTargets}")
  unset(_targetsDefined)
  unset(_targetsNotDefined)
  unset(_expectedTargets)
  set(CMAKE_IMPORT_FILE_VERSION)
  cmake_policy(POP)
  return()
endif()
if(NOT "${_targetsDefined}" STREQUAL "")
  message(FATAL_ERROR "Some (but not all) targets in this export set were already defined.\nTargets Defined: ${_targetsDefined}\nTargets not yet defined: ${_targetsNotDefined}\n")
endif()
unset(_targetsDefined)
unset(_targetsNotDefined)
unset(_expectedTargets)


# Compute the installation prefix relative to this file.
get_filename_component(_IMPORT_PREFIX "${CMAKE_CURRENT_LIST_FILE}" PATH)
get_filename_component(_IMPORT_PREFIX "${_IMPORT_PREFIX}" PATH)
if(_IMPORT_PREFIX STREQUAL "/")
  set(_IMPORT_PREFIX "")
endif()

# Create imported target WorkDir::IdDictParserPkg
add_library(WorkDir::IdDictParserPkg INTERFACE IMPORTED)

set_target_properties(WorkDir::IdDictParserPkg PROPERTIES
  INTERFACE_INCLUDE_DIRECTORIES "${_IMPORT_PREFIX}/src/DetectorDescription/IdDictParser"
  INTERFACE_LINK_LIBRARIES "IdDictPkg;XMLCoreParserPkg"
)

# Create imported target WorkDir::IdDictParserPkgPrivate
add_library(WorkDir::IdDictParserPkgPrivate INTERFACE IMPORTED)

set_target_properties(WorkDir::IdDictParserPkgPrivate PROPERTIES
  INTERFACE_LINK_LIBRARIES "IdentifierPkg"
)

# Create imported target WorkDir::IdDictParser
add_library(WorkDir::IdDictParser SHARED IMPORTED)

set_target_properties(WorkDir::IdDictParser PROPERTIES
  INTERFACE_INCLUDE_DIRECTORIES "\$<TARGET_PROPERTY:WorkDir::IdDictParserPkg,INTERFACE_INCLUDE_DIRECTORIES>"
  INTERFACE_LINK_LIBRARIES "IdDict;XMLCoreParser"
)

# Create imported target WorkDir::tid
add_executable(WorkDir::tid IMPORTED)

# Create imported target WorkDir::test_det_id
add_executable(WorkDir::test_det_id IMPORTED)

# Create imported target WorkDir::MuonReadoutGeometryPkg
add_library(WorkDir::MuonReadoutGeometryPkg INTERFACE IMPORTED)

set_target_properties(WorkDir::MuonReadoutGeometryPkg PROPERTIES
  INTERFACE_INCLUDE_DIRECTORIES "${_IMPORT_PREFIX}/src/MuonSpectrometer/MuonDetDescr/MuonReadoutGeometry"
  INTERFACE_LINK_LIBRARIES "AthenaBaseCompsPkg;AthenaKernelPkg;GeoModelKernelPkg;GeoPrimitivesPkg;IdentifierPkg;GaudiKernelPkg;MuonAlignmentDataPkg;WorkDir::MuonIdHelpersPkg;TrkDetElementBasePkg;TrkDistortedSurfacesPkg;TrkSurfacesPkg"
)

# Create imported target WorkDir::MuonReadoutGeometryPkgPrivate
add_library(WorkDir::MuonReadoutGeometryPkgPrivate INTERFACE IMPORTED)

set_target_properties(WorkDir::MuonReadoutGeometryPkgPrivate PROPERTIES
  INTERFACE_LINK_LIBRARIES "StoreGatePkg;AGDDModelPkg;MuonAGDDDescriptionPkg"
)

# Create imported target WorkDir::MuonReadoutGeometry
add_library(WorkDir::MuonReadoutGeometry SHARED IMPORTED)

set_target_properties(WorkDir::MuonReadoutGeometry PROPERTIES
  INTERFACE_INCLUDE_DIRECTORIES "\$<TARGET_PROPERTY:WorkDir::MuonReadoutGeometryPkg,INTERFACE_INCLUDE_DIRECTORIES>;${_IMPORT_PREFIX}/\${LCG_RELEASE_BASE}/LCG_88/eigen/3.2.9/x86_64-slc6-gcc62-opt/include/eigen3"
  INTERFACE_LINK_LIBRARIES "AthenaBaseComps;AthenaKernel;GeoModelKernel;GeoPrimitives;Identifier;GaudiKernel;MuonAlignmentData;TrkDetElementBase;TrkDistortedSurfaces;TrkSurfaces;WorkDir::MuonIdHelpersLib;StoreGateLib;SGtests"
  INTERFACE_SYSTEM_INCLUDE_DIRECTORIES "\${LCG_RELEASE_BASE}/LCG_88/eigen/3.2.9/x86_64-slc6-gcc62-opt/include/eigen3"
)

# Create imported target WorkDir::MuonG4SDPkg
add_library(WorkDir::MuonG4SDPkg INTERFACE IMPORTED)

set_target_properties(WorkDir::MuonG4SDPkg PROPERTIES
  INTERFACE_INCLUDE_DIRECTORIES "${_IMPORT_PREFIX}/src/MuonSpectrometer/MuonG4/MuonG4SD"
)

# Create imported target WorkDir::MuonG4SDPkgPrivate
add_library(WorkDir::MuonG4SDPkgPrivate INTERFACE IMPORTED)

set_target_properties(WorkDir::MuonG4SDPkgPrivate PROPERTIES
  INTERFACE_LINK_LIBRARIES "CxxUtilsPkg;StoreGatePkg;GeoPrimitivesPkg;GaudiKernelPkg;WorkDir::MuonSimEventPkg;G4AtlasToolsPkg;MCTruthPkg"
)

# Create imported target WorkDir::MuonG4SD
add_library(WorkDir::MuonG4SD MODULE IMPORTED)

set_target_properties(WorkDir::MuonG4SD PROPERTIES
  INTERFACE_LINK_LIBRARIES "/cvmfs/atlas.cern.ch/repo/sw/software/21.3/AthenaExternals/21.3.5/InstallArea/x86_64-slc6-gcc62-opt/lib/libG4global.so;/cvmfs/atlas.cern.ch/repo/sw/software/21.3/AthenaExternals/21.3.5/InstallArea/x86_64-slc6-gcc62-opt/lib/libG4event.so;/cvmfs/atlas.cern.ch/repo/sw/software/21.3/AthenaExternals/21.3.5/InstallArea/x86_64-slc6-gcc62-opt/lib/libG4track.so;/cvmfs/atlas.cern.ch/repo/sw/software/21.3/AthenaExternals/21.3.5/InstallArea/x86_64-slc6-gcc62-opt/lib/libG4particles.so;/cvmfs/atlas.cern.ch/repo/sw/software/21.3/AthenaExternals/21.3.5/InstallArea/x86_64-slc6-gcc62-opt/lib/libG4tracking.so;/cvmfs/atlas.cern.ch/repo/sw/software/21.3/AthenaExternals/21.3.5/InstallArea/x86_64-slc6-gcc62-opt/lib/libG4geometry.so;/cvmfs/atlas.cern.ch/repo/sw/software/21.3/AthenaExternals/21.3.5/InstallArea/x86_64-slc6-gcc62-opt/lib/libG4digits_hits.so;/cvmfs/atlas.cern.ch/repo/sw/software/21.3/AthenaExternals/21.3.5/InstallArea/x86_64-slc6-gcc62-opt/lib/libG4graphics_reps.so;/cvmfs/atlas.cern.ch/repo/sw/software/21.3/AthenaExternals/21.3.5/InstallArea/x86_64-slc6-gcc62-opt/lib/libG4intercoms.so;/cvmfs/atlas.cern.ch/repo/sw/software/21.3/AthenaExternals/21.3.5/InstallArea/x86_64-slc6-gcc62-opt/lib/libG4materials.so;/cvmfs/atlas.cern.ch/repo/sw/software/21.3/AthenaExternals/21.3.5/InstallArea/x86_64-slc6-gcc62-opt/lib/libG4run.so;/cvmfs/atlas.cern.ch/repo/sw/software/21.3/AthenaExternals/21.3.5/InstallArea/x86_64-slc6-gcc62-opt/lib/libG4Tree.so;/cvmfs/atlas.cern.ch/repo/sw/software/21.3/AthenaExternals/21.3.5/InstallArea/x86_64-slc6-gcc62-opt/lib/libG4visHepRep.so;/cvmfs/atlas.cern.ch/repo/sw/software/21.3/AthenaExternals/21.3.5/InstallArea/x86_64-slc6-gcc62-opt/lib/libG4readout.so;/cvmfs/atlas.cern.ch/repo/sw/software/21.3/AthenaExternals/21.3.5/InstallArea/x86_64-slc6-gcc62-opt/lib/libG4processes.so;/cvmfs/atlas.cern.ch/repo/sw/software/21.3/AthenaExternals/21.3.5/InstallArea/x86_64-slc6-gcc62-opt/lib/libG4physicslists.so;/cvmfs/atlas.cern.ch/repo/sw/software/21.3/AthenaExternals/21.3.5/InstallArea/x86_64-slc6-gcc62-opt/lib/libG4interfaces.so;/cvmfs/atlas.cern.ch/repo/sw/software/21.3/AthenaExternals/21.3.5/InstallArea/x86_64-slc6-gcc62-opt/lib/libG4vis_management.so;/cvmfs/atlas.cern.ch/repo/sw/software/21.3/AthenaExternals/21.3.5/InstallArea/x86_64-slc6-gcc62-opt/lib/libG4modeling.so;/cvmfs/atlas.cern.ch/repo/sw/software/21.3/AthenaExternals/21.3.5/InstallArea/x86_64-slc6-gcc62-opt/lib/libG4persistency.so;\${LCG_RELEASE_BASE}/LCG_88/XercesC/3.1.3/x86_64-slc6-gcc62-opt/lib/libxerces-c.so;/cvmfs/atlas.cern.ch/repo/sw/software/21.3/AthenaExternals/21.3.5/InstallArea/x86_64-slc6-gcc62-opt/lib/libCLHEP.so;CxxUtils;StoreGateLib;SGtests;GeoPrimitives;GaudiKernel;WorkDir::MuonSimEvent;G4AtlasToolsLib;MCTruth;GaudiPluginService"
)

# Create imported target WorkDir::MuonGeoModelPkg
add_library(WorkDir::MuonGeoModelPkg INTERFACE IMPORTED)

set_target_properties(WorkDir::MuonGeoModelPkg PROPERTIES
  INTERFACE_INCLUDE_DIRECTORIES "${_IMPORT_PREFIX}/src/MuonSpectrometer/MuonGeoModel"
  INTERFACE_LINK_LIBRARIES "AthenaKernelPkg;StoreGatePkg;GeoModelInterfacesPkg;GeoModelKernelPkg;GeoModelUtilitiesPkg;GaudiKernelPkg;MuonCondInterfacePkg;WorkDir::MuonReadoutGeometryPkg;MuonGMdbObjectsPkg"
)

# Create imported target WorkDir::MuonGeoModelPkgPrivate
add_library(WorkDir::MuonGeoModelPkgPrivate INTERFACE IMPORTED)

set_target_properties(WorkDir::MuonGeoModelPkgPrivate PROPERTIES
  INTERFACE_LINK_LIBRARIES "CLIDSvcPkg;SGToolsPkg;AthenaPoolUtilitiesPkg;RDBAccessSvcPkg;AGDDKernelPkg;IdDictDetDescrPkg;MuonAGDDDescriptionPkg;MuonDetDescrUtilsPkg;WorkDir::MuonIdHelpersPkg"
)

# Create imported target WorkDir::MuonGeoModelLib
add_library(WorkDir::MuonGeoModelLib SHARED IMPORTED)

set_target_properties(WorkDir::MuonGeoModelLib PROPERTIES
  INTERFACE_COMPILE_DEFINITIONS "CLHEP_MAX_MIN_DEFINED;CLHEP_ABS_DEFINED;CLHEP_SQR_DEFINED"
  INTERFACE_INCLUDE_DIRECTORIES "\$<TARGET_PROPERTY:WorkDir::MuonGeoModelPkg,INTERFACE_INCLUDE_DIRECTORIES>;/cvmfs/atlas.cern.ch/repo/sw/software/21.3/AthenaExternals/21.3.5/InstallArea/x86_64-slc6-gcc62-opt/include"
  INTERFACE_LINK_LIBRARIES "/cvmfs/atlas.cern.ch/repo/sw/software/21.3/AthenaExternals/21.3.5/InstallArea/x86_64-slc6-gcc62-opt/lib/libCLHEP.so;AthenaKernel;GeoModelKernel;GeoModelUtilities;GaudiKernel;MuonCondInterface;WorkDir::MuonReadoutGeometry;MuonGMdbObjects;StoreGateLib;SGtests;WorkDir::MuonIdHelpersLib"
  INTERFACE_SYSTEM_INCLUDE_DIRECTORIES "/cvmfs/atlas.cern.ch/repo/sw/software/21.3/AthenaExternals/21.3.5/InstallArea/x86_64-slc6-gcc62-opt/include"
)

# Create imported target WorkDir::MuonGeoModel
add_library(WorkDir::MuonGeoModel MODULE IMPORTED)

set_target_properties(WorkDir::MuonGeoModel PROPERTIES
  INTERFACE_LINK_LIBRARIES "\${LCG_RELEASE_BASE}/LCG_88/Boost/1.62.0/x86_64-slc6-gcc62-opt/lib/libboost_filesystem-gcc62-mt-1_62.so;\${LCG_RELEASE_BASE}/LCG_88/Boost/1.62.0/x86_64-slc6-gcc62-opt/lib/libboost_thread-gcc62-mt-1_62.so;\${LCG_RELEASE_BASE}/LCG_88/Boost/1.62.0/x86_64-slc6-gcc62-opt/lib/libboost_system-gcc62-mt-1_62.so;\${LCG_RELEASE_BASE}/LCG_88/Boost/1.62.0/x86_64-slc6-gcc62-opt/lib/libboost_chrono-gcc62-mt-1_62.so;\${LCG_RELEASE_BASE}/LCG_88/Boost/1.62.0/x86_64-slc6-gcc62-opt/lib/libboost_date_time-gcc62-mt-1_62.so;\${LCG_RELEASE_BASE}/LCG_88/Boost/1.62.0/x86_64-slc6-gcc62-opt/lib/libboost_atomic-gcc62-mt-1_62.so;\$<BUILD_INTERFACE:\${LCG_RELEASE_BASE}/LCG_88/Boost/1.62.0/x86_64-slc6-gcc62-opt/lib/libboost_filesystem-gcc62-mt-1_62.so>;\$<INSTALL_INTERFACE:\${LCG_RELEASE_BASE}/LCG_88/Boost/1.62.0/x86_64-slc6-gcc62-opt/lib/libboost_filesystem-gcc62-mt-1_62.so>;\$<BUILD_INTERFACE:\${LCG_RELEASE_BASE}/LCG_88/Boost/1.62.0/x86_64-slc6-gcc62-opt/lib/libboost_thread-gcc62-mt-1_62.so>;\$<INSTALL_INTERFACE:\${LCG_RELEASE_BASE}/LCG_88/Boost/1.62.0/x86_64-slc6-gcc62-opt/lib/libboost_thread-gcc62-mt-1_62.so>;\$<BUILD_INTERFACE:\${LCG_RELEASE_BASE}/LCG_88/Boost/1.62.0/x86_64-slc6-gcc62-opt/lib/libboost_system-gcc62-mt-1_62.so>;\$<INSTALL_INTERFACE:\${LCG_RELEASE_BASE}/LCG_88/Boost/1.62.0/x86_64-slc6-gcc62-opt/lib/libboost_system-gcc62-mt-1_62.so>;\$<BUILD_INTERFACE:\${LCG_RELEASE_BASE}/LCG_88/Boost/1.62.0/x86_64-slc6-gcc62-opt/lib/libboost_regex-gcc62-mt-1_62.so>;\$<INSTALL_INTERFACE:\${LCG_RELEASE_BASE}/LCG_88/Boost/1.62.0/x86_64-slc6-gcc62-opt/lib/libboost_regex-gcc62-mt-1_62.so>;\$<BUILD_INTERFACE:\${LCG_RELEASE_BASE}/LCG_88/Boost/1.62.0/x86_64-slc6-gcc62-opt/lib/libboost_chrono-gcc62-mt-1_62.so>;\$<INSTALL_INTERFACE:\${LCG_RELEASE_BASE}/LCG_88/Boost/1.62.0/x86_64-slc6-gcc62-opt/lib/libboost_chrono-gcc62-mt-1_62.so>;\$<BUILD_INTERFACE:\${LCG_RELEASE_BASE}/LCG_88/Boost/1.62.0/x86_64-slc6-gcc62-opt/lib/libboost_date_time-gcc62-mt-1_62.so>;\$<INSTALL_INTERFACE:\${LCG_RELEASE_BASE}/LCG_88/Boost/1.62.0/x86_64-slc6-gcc62-opt/lib/libboost_date_time-gcc62-mt-1_62.so>;\$<BUILD_INTERFACE:\${LCG_RELEASE_BASE}/LCG_88/Boost/1.62.0/x86_64-slc6-gcc62-opt/lib/libboost_atomic-gcc62-mt-1_62.so>;\$<INSTALL_INTERFACE:\${LCG_RELEASE_BASE}/LCG_88/Boost/1.62.0/x86_64-slc6-gcc62-opt/lib/libboost_atomic-gcc62-mt-1_62.so>;Threads::Threads;-Wl,--copy-dt-needed-entries;\${LCG_RELEASE_BASE}/LCG_88/CORAL/3_1_8/x86_64-slc6-gcc62-opt/lib/liblcg_CoralBase.so;\${LCG_RELEASE_BASE}/LCG_88/CORAL/3_1_8/x86_64-slc6-gcc62-opt/lib/liblcg_CoralKernel.so;\${LCG_RELEASE_BASE}/LCG_88/CORAL/3_1_8/x86_64-slc6-gcc62-opt/lib/liblcg_RelationalAccess.so;/cvmfs/atlas.cern.ch/repo/sw/software/21.3/AthenaExternals/21.3.5/InstallArea/x86_64-slc6-gcc62-opt/lib/libCLHEP.so;AthenaKernel;StoreGateLib;SGtests;GeoModelKernel;GeoModelUtilities;GaudiKernel;MuonCondInterface;WorkDir::MuonReadoutGeometry;MuonGMdbObjects;SGTools;AthenaPoolUtilities;AGDDKernel;IdDictDetDescr;MuonAGDDDescription;MuonDetDescrUtils;WorkDir::MuonIdHelpersLib;WorkDir::MuonGeoModelLib;GaudiPluginService"
)

# Create imported target WorkDir::MuonIdHelpersPkg
add_library(WorkDir::MuonIdHelpersPkg INTERFACE IMPORTED)

set_target_properties(WorkDir::MuonIdHelpersPkg PROPERTIES
  INTERFACE_INCLUDE_DIRECTORIES "${_IMPORT_PREFIX}/src/MuonSpectrometer/MuonIdHelpers"
  INTERFACE_LINK_LIBRARIES "AthenaBaseCompsPkg;CLIDSvcPkg;SGToolsPkg;AtlasDetDescrPkg;IdDictPkg;IdentifierPkg"
)

# Create imported target WorkDir::MuonIdHelpersPkgPrivate
add_library(WorkDir::MuonIdHelpersPkgPrivate INTERFACE IMPORTED)

set_target_properties(WorkDir::MuonIdHelpersPkgPrivate PROPERTIES
  INTERFACE_LINK_LIBRARIES "WorkDir::IdDictParserPkg;GaudiKernelPkg"
)

# Create imported target WorkDir::MuonIdHelpersLib
add_library(WorkDir::MuonIdHelpersLib SHARED IMPORTED)

set_target_properties(WorkDir::MuonIdHelpersLib PROPERTIES
  INTERFACE_INCLUDE_DIRECTORIES "\$<TARGET_PROPERTY:WorkDir::MuonIdHelpersPkg,INTERFACE_INCLUDE_DIRECTORIES>"
  INTERFACE_LINK_LIBRARIES "AthenaBaseComps;SGTools;AtlasDetDescr;IdDict;Identifier"
)

# Create imported target WorkDir::MuonIdHelpers
add_library(WorkDir::MuonIdHelpers MODULE IMPORTED)

set_target_properties(WorkDir::MuonIdHelpers PROPERTIES
  INTERFACE_LINK_LIBRARIES "WorkDir::MuonIdHelpersLib;GaudiPluginService"
)

# Create imported target WorkDir::test_muon_id
add_executable(WorkDir::test_muon_id IMPORTED)

# Create imported target WorkDir::MuonSimEventPkg
add_library(WorkDir::MuonSimEventPkg INTERFACE IMPORTED)

set_target_properties(WorkDir::MuonSimEventPkg PROPERTIES
  INTERFACE_INCLUDE_DIRECTORIES "${_IMPORT_PREFIX}/src/MuonSpectrometer/MuonSimEvent"
  INTERFACE_LINK_LIBRARIES "CLIDSvcPkg;SGToolsPkg;AtlasSealCLHEPPkg;GeoPrimitivesPkg;IdentifierPkg;GeneratorObjectsPkg;WorkDir::MuonIdHelpersPkg;HitManagementPkg"
)

# Create imported target WorkDir::MuonSimEventPkgPrivate
add_library(WorkDir::MuonSimEventPkgPrivate INTERFACE IMPORTED)

# Create imported target WorkDir::MuonSimEvent
add_library(WorkDir::MuonSimEvent SHARED IMPORTED)

set_target_properties(WorkDir::MuonSimEvent PROPERTIES
  INTERFACE_INCLUDE_DIRECTORIES "\$<TARGET_PROPERTY:WorkDir::MuonSimEventPkg,INTERFACE_INCLUDE_DIRECTORIES>;${_IMPORT_PREFIX}/\${LCG_RELEASE_BASE}/LCG_88/eigen/3.2.9/x86_64-slc6-gcc62-opt/include/eigen3"
  INTERFACE_LINK_LIBRARIES "SGTools;GeoPrimitives;Identifier;GeneratorObjects;HitManagement;WorkDir::MuonIdHelpersLib"
  INTERFACE_SYSTEM_INCLUDE_DIRECTORIES "\${LCG_RELEASE_BASE}/LCG_88/eigen/3.2.9/x86_64-slc6-gcc62-opt/include/eigen3"
)

if(CMAKE_VERSION VERSION_LESS 3.0.0)
  message(FATAL_ERROR "This file relies on consumers using CMake 3.0.0 or greater.")
endif()

# Load information for each installed configuration.
get_filename_component(_DIR "${CMAKE_CURRENT_LIST_FILE}" PATH)
file(GLOB CONFIG_FILES "${_DIR}/WorkDirConfig-targets-*.cmake")
foreach(f ${CONFIG_FILES})
  include(${f})
endforeach()

# Cleanup temporary variables.
set(_IMPORT_PREFIX)

# Loop over all imported files and verify that they actually exist
foreach(target ${_IMPORT_CHECK_TARGETS} )
  foreach(file ${_IMPORT_CHECK_FILES_FOR_${target}} )
    if(NOT EXISTS "${file}" )
      message(FATAL_ERROR "The imported target \"${target}\" references the file
   \"${file}\"
but this file does not exist.  Possible reasons include:
* The file was deleted, renamed, or moved to another location.
* An install or uninstall procedure did not complete successfully.
* The installation package was faulty and contained
   \"${CMAKE_CURRENT_LIST_FILE}\"
but not all the files it references.
")
    endif()
  endforeach()
  unset(_IMPORT_CHECK_FILES_FOR_${target})
endforeach()
unset(_IMPORT_CHECK_TARGETS)

# This file does not depend on other imported targets which have
# been exported from the same project but in a separate export set.

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
cmake_policy(POP)
