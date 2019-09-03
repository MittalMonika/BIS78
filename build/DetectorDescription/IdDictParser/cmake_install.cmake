# Install script for directory: /afs/cern.ch/work/m/mmittal/private/BIS_monika/athena/DetectorDescription/IdDictParser

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/InstallArea/x86_64-centos7-gcc62-opt")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "RelWithDebInfo")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "0")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xMainx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/src/DetectorDescription/IdDictParser" TYPE DIRECTORY FILES "/afs/cern.ch/work/m/mmittal/private/BIS_monika/athena/DetectorDescription/IdDictParser/" USE_SOURCE_PERMISSIONS REGEX "/\\.svn$" EXCLUDE REGEX "/\\.git$" EXCLUDE REGEX "/[^/]*\\~$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xMainx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process( COMMAND ${CMAKE_COMMAND}
      -E make_directory
      $ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/include )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xMainx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process( COMMAND ${CMAKE_COMMAND}
         -E create_symlink ../src/DetectorDescription/IdDictParser/IdDictParser
         $ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/include/IdDictParser )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDebugx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE OPTIONAL FILES "/afs/cern.ch/work/m/mmittal/private/BIS_monika/build/x86_64-centos7-gcc62-opt/lib/libIdDictParser.so.dbg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xMainx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY OPTIONAL FILES "/afs/cern.ch/work/m/mmittal/private/BIS_monika/build/x86_64-centos7-gcc62-opt/lib/libIdDictParser.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libIdDictParser.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libIdDictParser.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/cvmfs/sft.cern.ch/lcg/releases/binutils/2.28-19981/x86_64-slc6-gcc62-opt/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libIdDictParser.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDebugx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE FILE OPTIONAL FILES "/afs/cern.ch/work/m/mmittal/private/BIS_monika/build/x86_64-centos7-gcc62-opt/bin/tid.dbg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xMainx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE PROGRAM FILES "/afs/cern.ch/work/m/mmittal/private/BIS_monika/build/x86_64-centos7-gcc62-opt/bin/tid.exe")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xMainx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE OPTIONAL FILES "/afs/cern.ch/work/m/mmittal/private/BIS_monika/build/x86_64-centos7-gcc62-opt/bin/tid")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/tid" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/tid")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/cvmfs/sft.cern.ch/lcg/releases/binutils/2.28-19981/x86_64-slc6-gcc62-opt/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/tid")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDebugx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE FILE OPTIONAL FILES "/afs/cern.ch/work/m/mmittal/private/BIS_monika/build/x86_64-centos7-gcc62-opt/bin/test_det_id.dbg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xMainx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE PROGRAM FILES "/afs/cern.ch/work/m/mmittal/private/BIS_monika/build/x86_64-centos7-gcc62-opt/bin/test_det_id.exe")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xMainx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE OPTIONAL FILES "/afs/cern.ch/work/m/mmittal/private/BIS_monika/build/x86_64-centos7-gcc62-opt/bin/test_det_id")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/test_det_id" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/test_det_id")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/cvmfs/sft.cern.ch/lcg/releases/binutils/2.28-19981/x86_64-slc6-gcc62-opt/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/test_det_id")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xMainx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE OPTIONAL FILES "/afs/cern.ch/work/m/mmittal/private/BIS_monika/build/x86_64-centos7-gcc62-opt/lib/libIdDictParserDict_rdict.pcm")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDebugx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE OPTIONAL FILES "/afs/cern.ch/work/m/mmittal/private/BIS_monika/build/x86_64-centos7-gcc62-opt/lib/libIdDictParserDict.so.dbg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xMainx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY OPTIONAL FILES "/afs/cern.ch/work/m/mmittal/private/BIS_monika/build/x86_64-centos7-gcc62-opt/lib/libIdDictParserDict.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libIdDictParserDict.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libIdDictParserDict.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/cvmfs/sft.cern.ch/lcg/releases/binutils/2.28-19981/x86_64-slc6-gcc62-opt/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libIdDictParserDict.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xMainx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/XML/IdDictParser" TYPE FILE RENAME "IdDict.dtd" FILES "/afs/cern.ch/work/m/mmittal/private/BIS_monika/athena/DetectorDescription/IdDictParser/data/IdDict.dtd")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xMainx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/XML/IdDictParser" TYPE FILE RENAME "ATLAS_IDS.xml" FILES "/afs/cern.ch/work/m/mmittal/private/BIS_monika/athena/DetectorDescription/IdDictParser/data/ATLAS_IDS.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xMainx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/XML/IdDictParser" TYPE FILE RENAME "IdDictATLAS.xml" FILES "/afs/cern.ch/work/m/mmittal/private/BIS_monika/athena/DetectorDescription/IdDictParser/data/IdDictATLAS.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xMainx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/XML/IdDictParser" TYPE FILE RENAME "IdDictCalorimeter.xml" FILES "/afs/cern.ch/work/m/mmittal/private/BIS_monika/athena/DetectorDescription/IdDictParser/data/IdDictCalorimeter.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xMainx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/XML/IdDictParser" TYPE FILE RENAME "IdDictCalorimeter_DC3-05.xml" FILES "/afs/cern.ch/work/m/mmittal/private/BIS_monika/athena/DetectorDescription/IdDictParser/data/IdDictCalorimeter_DC3-05.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xMainx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/XML/IdDictParser" TYPE FILE RENAME "IdDictCalorimeter_H8.xml" FILES "/afs/cern.ch/work/m/mmittal/private/BIS_monika/athena/DetectorDescription/IdDictParser/data/IdDictCalorimeter_H8.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xMainx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/XML/IdDictParser" TYPE FILE RENAME "IdDictCalorimeter_L1Onl.xml" FILES "/afs/cern.ch/work/m/mmittal/private/BIS_monika/athena/DetectorDescription/IdDictParser/data/IdDictCalorimeter_L1Onl.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xMainx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/XML/IdDictParser" TYPE FILE RENAME "IdDictCalorimeter_L1P0.xml" FILES "/afs/cern.ch/work/m/mmittal/private/BIS_monika/athena/DetectorDescription/IdDictParser/data/IdDictCalorimeter_L1P0.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xMainx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/XML/IdDictParser" TYPE FILE RENAME "IdDictCalorimeter_Rel11.5.xml" FILES "/afs/cern.ch/work/m/mmittal/private/BIS_monika/athena/DetectorDescription/IdDictParser/data/IdDictCalorimeter_Rel11.5.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xMainx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/XML/IdDictParser" TYPE FILE RENAME "IdDictForwardDetectors.xml" FILES "/afs/cern.ch/work/m/mmittal/private/BIS_monika/athena/DetectorDescription/IdDictParser/data/IdDictForwardDetectors.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xMainx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/XML/IdDictParser" TYPE FILE RENAME "IdDictForwardDetectors_2010.xml" FILES "/afs/cern.ch/work/m/mmittal/private/BIS_monika/athena/DetectorDescription/IdDictParser/data/IdDictForwardDetectors_2010.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xMainx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/XML/IdDictParser" TYPE FILE RENAME "IdDictInnerDetector.xml" FILES "/afs/cern.ch/work/m/mmittal/private/BIS_monika/athena/DetectorDescription/IdDictParser/data/IdDictInnerDetector.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xMainx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/XML/IdDictParser" TYPE FILE RENAME "IdDictInnerDetector_CTB2004.xml" FILES "/afs/cern.ch/work/m/mmittal/private/BIS_monika/athena/DetectorDescription/IdDictParser/data/IdDictInnerDetector_CTB2004.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xMainx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/XML/IdDictParser" TYPE FILE RENAME "IdDictInnerDetector_Cosmic.xml" FILES "/afs/cern.ch/work/m/mmittal/private/BIS_monika/athena/DetectorDescription/IdDictParser/data/IdDictInnerDetector_Cosmic.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xMainx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/XML/IdDictParser" TYPE FILE RENAME "IdDictInnerDetector_CosmicEndcap.xml" FILES "/afs/cern.ch/work/m/mmittal/private/BIS_monika/athena/DetectorDescription/IdDictParser/data/IdDictInnerDetector_CosmicEndcap.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xMainx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/XML/IdDictParser" TYPE FILE RENAME "IdDictInnerDetector_slhc.xml" FILES "/afs/cern.ch/work/m/mmittal/private/BIS_monika/athena/DetectorDescription/IdDictParser/data/IdDictInnerDetector_slhc.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xMainx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/XML/IdDictParser" TYPE FILE RENAME "IdDictLArCalorimeter.xml" FILES "/afs/cern.ch/work/m/mmittal/private/BIS_monika/athena/DetectorDescription/IdDictParser/data/IdDictLArCalorimeter.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xMainx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/XML/IdDictParser" TYPE FILE RENAME "IdDictLArCalorimeter_DC3-05-Comm-01.xml" FILES "/afs/cern.ch/work/m/mmittal/private/BIS_monika/athena/DetectorDescription/IdDictParser/data/IdDictLArCalorimeter_DC3-05-Comm-01.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xMainx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/XML/IdDictParser" TYPE FILE RENAME "IdDictLArCalorimeter_DC3-05.xml" FILES "/afs/cern.ch/work/m/mmittal/private/BIS_monika/athena/DetectorDescription/IdDictParser/data/IdDictLArCalorimeter_DC3-05.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xMainx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/XML/IdDictParser" TYPE FILE RENAME "IdDictLArCalorimeter_H6_2004.xml" FILES "/afs/cern.ch/work/m/mmittal/private/BIS_monika/athena/DetectorDescription/IdDictParser/data/IdDictLArCalorimeter_H6_2004.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xMainx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/XML/IdDictParser" TYPE FILE RENAME "IdDictLArCalorimeter_H8_2004.xml" FILES "/afs/cern.ch/work/m/mmittal/private/BIS_monika/athena/DetectorDescription/IdDictParser/data/IdDictLArCalorimeter_H8_2004.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xMainx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/XML/IdDictParser" TYPE FILE RENAME "IdDictLArCalorimeter_HGTD_01.xml" FILES "/afs/cern.ch/work/m/mmittal/private/BIS_monika/athena/DetectorDescription/IdDictParser/data/IdDictLArCalorimeter_HGTD_01.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xMainx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/XML/IdDictParser" TYPE FILE RENAME "IdDictLArCalorimeter_sLHC-LArMiniFcal-00.xml" FILES "/afs/cern.ch/work/m/mmittal/private/BIS_monika/athena/DetectorDescription/IdDictParser/data/IdDictLArCalorimeter_sLHC-LArMiniFcal-00.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xMainx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/XML/IdDictParser" TYPE FILE RENAME "IdDictLArCalorimeter_sLHC-MiniFcal-00.xml" FILES "/afs/cern.ch/work/m/mmittal/private/BIS_monika/athena/DetectorDescription/IdDictParser/data/IdDictLArCalorimeter_sLHC-MiniFcal-00.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xMainx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/XML/IdDictParser" TYPE FILE RENAME "IdDictLArCalorimeter_sLHC-sFCal-00.xml" FILES "/afs/cern.ch/work/m/mmittal/private/BIS_monika/athena/DetectorDescription/IdDictParser/data/IdDictLArCalorimeter_sLHC-sFCal-00.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xMainx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/XML/IdDictParser" TYPE FILE RENAME "IdDictLArElectrode.xml" FILES "/afs/cern.ch/work/m/mmittal/private/BIS_monika/athena/DetectorDescription/IdDictParser/data/IdDictLArElectrode.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xMainx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/XML/IdDictParser" TYPE FILE RENAME "IdDictLArHighVoltage.xml" FILES "/afs/cern.ch/work/m/mmittal/private/BIS_monika/athena/DetectorDescription/IdDictParser/data/IdDictLArHighVoltage.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xMainx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/XML/IdDictParser" TYPE FILE RENAME "IdDictLArHighVoltage_v0.xml" FILES "/afs/cern.ch/work/m/mmittal/private/BIS_monika/athena/DetectorDescription/IdDictParser/data/IdDictLArHighVoltage_v0.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xMainx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/XML/IdDictParser" TYPE FILE RENAME "IdDictMuonSpectrometer.xml" FILES "/afs/cern.ch/work/m/mmittal/private/BIS_monika/athena/DetectorDescription/IdDictParser/data/IdDictMuonSpectrometer.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xMainx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/XML/IdDictParser" TYPE FILE RENAME "IdDictMuonSpectrometer_CSC_Cosmic.xml" FILES "/afs/cern.ch/work/m/mmittal/private/BIS_monika/athena/DetectorDescription/IdDictParser/data/IdDictMuonSpectrometer_CSC_Cosmic.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xMainx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/XML/IdDictParser" TYPE FILE RENAME "IdDictMuonSpectrometer_H8_2002.xml" FILES "/afs/cern.ch/work/m/mmittal/private/BIS_monika/athena/DetectorDescription/IdDictParser/data/IdDictMuonSpectrometer_H8_2002.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xMainx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/XML/IdDictParser" TYPE FILE RENAME "IdDictMuonSpectrometer_H8_2003.xml" FILES "/afs/cern.ch/work/m/mmittal/private/BIS_monika/athena/DetectorDescription/IdDictParser/data/IdDictMuonSpectrometer_H8_2003.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xMainx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/XML/IdDictParser" TYPE FILE RENAME "IdDictMuonSpectrometer_H8_2004.xml" FILES "/afs/cern.ch/work/m/mmittal/private/BIS_monika/athena/DetectorDescription/IdDictParser/data/IdDictMuonSpectrometer_H8_2004.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xMainx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/XML/IdDictParser" TYPE FILE RENAME "IdDictMuonSpectrometer_M2.8.xml" FILES "/afs/cern.ch/work/m/mmittal/private/BIS_monika/athena/DetectorDescription/IdDictParser/data/IdDictMuonSpectrometer_M2.8.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xMainx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/XML/IdDictParser" TYPE FILE RENAME "IdDictMuonSpectrometer_P.03.xml" FILES "/afs/cern.ch/work/m/mmittal/private/BIS_monika/athena/DetectorDescription/IdDictParser/data/IdDictMuonSpectrometer_P.03.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xMainx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/XML/IdDictParser" TYPE FILE RENAME "IdDictMuonSpectrometer_Q.02.xml" FILES "/afs/cern.ch/work/m/mmittal/private/BIS_monika/athena/DetectorDescription/IdDictParser/data/IdDictMuonSpectrometer_Q.02.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xMainx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/XML/IdDictParser" TYPE FILE RENAME "IdDictMuonSpectrometer_R.01.xml" FILES "/afs/cern.ch/work/m/mmittal/private/BIS_monika/athena/DetectorDescription/IdDictParser/data/IdDictMuonSpectrometer_R.01.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xMainx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/XML/IdDictParser" TYPE FILE RENAME "IdDictMuonSpectrometer_R.02.xml" FILES "/afs/cern.ch/work/m/mmittal/private/BIS_monika/athena/DetectorDescription/IdDictParser/data/IdDictMuonSpectrometer_R.02.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xMainx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/XML/IdDictParser" TYPE FILE RENAME "IdDictMuonSpectrometer_R.03.xml" FILES "/afs/cern.ch/work/m/mmittal/private/BIS_monika/athena/DetectorDescription/IdDictParser/data/IdDictMuonSpectrometer_R.03.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xMainx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/XML/IdDictParser" TYPE FILE RENAME "IdDictMuonSpectrometer_R.04.xml" FILES "/afs/cern.ch/work/m/mmittal/private/BIS_monika/athena/DetectorDescription/IdDictParser/data/IdDictMuonSpectrometer_R.04.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xMainx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/XML/IdDictParser" TYPE FILE RENAME "IdDictMuonSpectrometer_R.05.xml" FILES "/afs/cern.ch/work/m/mmittal/private/BIS_monika/athena/DetectorDescription/IdDictParser/data/IdDictMuonSpectrometer_R.05.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xMainx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/XML/IdDictParser" TYPE FILE RENAME "IdDictMuonSpectrometer_R.09.AsymNSW.xml" FILES "/afs/cern.ch/work/m/mmittal/private/BIS_monika/athena/DetectorDescription/IdDictParser/data/IdDictMuonSpectrometer_R.09.AsymNSW.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xMainx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/XML/IdDictParser" TYPE FILE RENAME "IdDictMuonSpectrometer_R.09.NSW.xml" FILES "/afs/cern.ch/work/m/mmittal/private/BIS_monika/athena/DetectorDescription/IdDictParser/data/IdDictMuonSpectrometer_R.09.NSW.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xMainx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/XML/IdDictParser" TYPE FILE RENAME "IdDictMuonSpectrometer_S.01.xml" FILES "/afs/cern.ch/work/m/mmittal/private/BIS_monika/athena/DetectorDescription/IdDictParser/data/IdDictMuonSpectrometer_S.01.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xMainx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/XML/IdDictParser" TYPE FILE RENAME "IdDictMuonSpectrometer_S.02.xml" FILES "/afs/cern.ch/work/m/mmittal/private/BIS_monika/athena/DetectorDescription/IdDictParser/data/IdDictMuonSpectrometer_S.02.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xMainx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/XML/IdDictParser" TYPE FILE RENAME "IdDictTileCalorimeter-upgradeA.xml" FILES "/afs/cern.ch/work/m/mmittal/private/BIS_monika/athena/DetectorDescription/IdDictParser/data/IdDictTileCalorimeter-upgradeA.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xMainx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/XML/IdDictParser" TYPE FILE RENAME "IdDictTileCalorimeter-upgradeABC.xml" FILES "/afs/cern.ch/work/m/mmittal/private/BIS_monika/athena/DetectorDescription/IdDictParser/data/IdDictTileCalorimeter-upgradeABC.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xMainx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/XML/IdDictParser" TYPE FILE RENAME "IdDictTileCalorimeter-upgradeBC.xml" FILES "/afs/cern.ch/work/m/mmittal/private/BIS_monika/athena/DetectorDescription/IdDictParser/data/IdDictTileCalorimeter-upgradeBC.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xMainx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/XML/IdDictParser" TYPE FILE RENAME "IdDictTileCalorimeter.xml" FILES "/afs/cern.ch/work/m/mmittal/private/BIS_monika/athena/DetectorDescription/IdDictParser/data/IdDictTileCalorimeter.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xMainx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/XML/IdDictParser" TYPE FILE RENAME "IdDictTileCalorimeter_3B.xml" FILES "/afs/cern.ch/work/m/mmittal/private/BIS_monika/athena/DetectorDescription/IdDictParser/data/IdDictTileCalorimeter_3B.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xMainx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/XML/IdDictParser" TYPE FILE RENAME "IdDictTileCalorimeter_EB2B.xml" FILES "/afs/cern.ch/work/m/mmittal/private/BIS_monika/athena/DetectorDescription/IdDictParser/data/IdDictTileCalorimeter_EB2B.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xMainx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/XML/IdDictParser" TYPE FILE RENAME "IdDictTileCalorimeter_TB04.xml" FILES "/afs/cern.ch/work/m/mmittal/private/BIS_monika/athena/DetectorDescription/IdDictParser/data/IdDictTileCalorimeter_TB04.xml")
endif()

