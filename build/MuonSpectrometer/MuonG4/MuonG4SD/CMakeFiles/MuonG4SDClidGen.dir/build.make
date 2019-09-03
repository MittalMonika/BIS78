# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.11

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /cvmfs/atlas.cern.ch/repo/ATLASLocalRootBase/x86_64/Cmake/3.11.0/Linux-x86_64/bin/cmake

# The command to remove a file.
RM = /cvmfs/atlas.cern.ch/repo/ATLASLocalRootBase/x86_64/Cmake/3.11.0/Linux-x86_64/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /afs/cern.ch/work/m/mmittal/private/BIS_monika/athena/Projects/WorkDir

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /afs/cern.ch/work/m/mmittal/private/BIS_monika/build

# Utility rule file for MuonG4SDClidGen.

# Include the progress variables for this target.
include MuonSpectrometer/MuonG4/MuonG4SD/CMakeFiles/MuonG4SDClidGen.dir/progress.make

MuonSpectrometer/MuonG4/MuonG4SD/CMakeFiles/MuonG4SDClidGen: MuonSpectrometer/MuonG4/MuonG4SD/MuonG4SD_clid.db


MuonSpectrometer/MuonG4/MuonG4SD/MuonG4SD_clid.db: /cvmfs/atlas.cern.ch/repo/sw/software/21.3/Athena/21.3.5/InstallArea/x86_64-slc6-gcc62-opt/bin/genCLIDDB
MuonSpectrometer/MuonG4/MuonG4SD/MuonG4SD_clid.db: /cvmfs/atlas.cern.ch/repo/sw/software/21.3/Athena/21.3.5/InstallArea/x86_64-slc6-gcc62-opt/lib/libCLIDComps.so
MuonSpectrometer/MuonG4/MuonG4SD/MuonG4SD_clid.db: x86_64-centos7-gcc62-opt/lib/libMuonG4SD.so
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/afs/cern.ch/work/m/mmittal/private/BIS_monika/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating MuonG4SD_clid.db"
	cd /afs/cern.ch/work/m/mmittal/private/BIS_monika/build/MuonSpectrometer/MuonG4/MuonG4SD && /cvmfs/atlas.cern.ch/repo/ATLASLocalRootBase/x86_64/Cmake/3.11.0/Linux-x86_64/bin/cmake -E make_directory /afs/cern.ch/work/m/mmittal/private/BIS_monika/build/x86_64-centos7-gcc62-opt/share
	cd /afs/cern.ch/work/m/mmittal/private/BIS_monika/build/MuonSpectrometer/MuonG4/MuonG4SD && /cvmfs/atlas.cern.ch/repo/ATLASLocalRootBase/x86_64/Cmake/3.11.0/Linux-x86_64/bin/cmake -E touch /afs/cern.ch/work/m/mmittal/private/BIS_monika/build/MuonSpectrometer/MuonG4/MuonG4SD/dummy_clid.db
	cd /afs/cern.ch/work/m/mmittal/private/BIS_monika/build/MuonSpectrometer/MuonG4/MuonG4SD && ../../../atlas_build_run.sh genCLIDDB -p MuonG4SD -i /afs/cern.ch/work/m/mmittal/private/BIS_monika/build/MuonSpectrometer/MuonG4/MuonG4SD/dummy_clid.db -o /afs/cern.ch/work/m/mmittal/private/BIS_monika/build/MuonSpectrometer/MuonG4/MuonG4SD/MuonG4SD_clid.db

MuonG4SDClidGen: MuonSpectrometer/MuonG4/MuonG4SD/CMakeFiles/MuonG4SDClidGen
MuonG4SDClidGen: MuonSpectrometer/MuonG4/MuonG4SD/MuonG4SD_clid.db
MuonG4SDClidGen: MuonSpectrometer/MuonG4/MuonG4SD/CMakeFiles/MuonG4SDClidGen.dir/build.make

.PHONY : MuonG4SDClidGen

# Rule to build all files generated by this target.
MuonSpectrometer/MuonG4/MuonG4SD/CMakeFiles/MuonG4SDClidGen.dir/build: MuonG4SDClidGen

.PHONY : MuonSpectrometer/MuonG4/MuonG4SD/CMakeFiles/MuonG4SDClidGen.dir/build

MuonSpectrometer/MuonG4/MuonG4SD/CMakeFiles/MuonG4SDClidGen.dir/clean:
	cd /afs/cern.ch/work/m/mmittal/private/BIS_monika/build/MuonSpectrometer/MuonG4/MuonG4SD && $(CMAKE_COMMAND) -P CMakeFiles/MuonG4SDClidGen.dir/cmake_clean.cmake
.PHONY : MuonSpectrometer/MuonG4/MuonG4SD/CMakeFiles/MuonG4SDClidGen.dir/clean

MuonSpectrometer/MuonG4/MuonG4SD/CMakeFiles/MuonG4SDClidGen.dir/depend:
	cd /afs/cern.ch/work/m/mmittal/private/BIS_monika/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /afs/cern.ch/work/m/mmittal/private/BIS_monika/athena/Projects/WorkDir /afs/cern.ch/work/m/mmittal/private/BIS_monika/athena/MuonSpectrometer/MuonG4/MuonG4SD /afs/cern.ch/work/m/mmittal/private/BIS_monika/build /afs/cern.ch/work/m/mmittal/private/BIS_monika/build/MuonSpectrometer/MuonG4/MuonG4SD /afs/cern.ch/work/m/mmittal/private/BIS_monika/build/MuonSpectrometer/MuonG4/MuonG4SD/CMakeFiles/MuonG4SDClidGen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : MuonSpectrometer/MuonG4/MuonG4SD/CMakeFiles/MuonG4SDClidGen.dir/depend

