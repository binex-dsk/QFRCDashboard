# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /hdd/code/QFRCDashboard/tests

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /hdd/code/QFRCDashboard/build-tests-Desktop-Debug

# Utility rule file for SaveLoad_autogen_timestamp_deps.

# Include any custom commands dependencies for this target.
include CMakeFiles/SaveLoad_autogen_timestamp_deps.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/SaveLoad_autogen_timestamp_deps.dir/progress.make

CMakeFiles/SaveLoad_autogen_timestamp_deps: /usr/lib/libntcore.so
CMakeFiles/SaveLoad_autogen_timestamp_deps: /usr/lib/qt6/uic
CMakeFiles/SaveLoad_autogen_timestamp_deps: /usr/lib/libQt6MultimediaWidgets.so.6.6.1
CMakeFiles/SaveLoad_autogen_timestamp_deps: /usr/lib/qt6/moc
CMakeFiles/SaveLoad_autogen_timestamp_deps: /usr/lib/libQt6Charts.so.6.6.1
CMakeFiles/SaveLoad_autogen_timestamp_deps: /usr/lib/libQt6Test.so.6.6.1
CMakeFiles/SaveLoad_autogen_timestamp_deps: /usr/lib/libQt6Widgets.so.6.6.1
CMakeFiles/SaveLoad_autogen_timestamp_deps: lib/libQFRCDashboardLib.a
CMakeFiles/SaveLoad_autogen_timestamp_deps: lib/buildconfig/libBuildConfig.a

SaveLoad_autogen_timestamp_deps: CMakeFiles/SaveLoad_autogen_timestamp_deps
SaveLoad_autogen_timestamp_deps: CMakeFiles/SaveLoad_autogen_timestamp_deps.dir/build.make
.PHONY : SaveLoad_autogen_timestamp_deps

# Rule to build all files generated by this target.
CMakeFiles/SaveLoad_autogen_timestamp_deps.dir/build: SaveLoad_autogen_timestamp_deps
.PHONY : CMakeFiles/SaveLoad_autogen_timestamp_deps.dir/build

CMakeFiles/SaveLoad_autogen_timestamp_deps.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/SaveLoad_autogen_timestamp_deps.dir/cmake_clean.cmake
.PHONY : CMakeFiles/SaveLoad_autogen_timestamp_deps.dir/clean

CMakeFiles/SaveLoad_autogen_timestamp_deps.dir/depend:
	cd /hdd/code/QFRCDashboard/build-tests-Desktop-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /hdd/code/QFRCDashboard/tests /hdd/code/QFRCDashboard/tests /hdd/code/QFRCDashboard/build-tests-Desktop-Debug /hdd/code/QFRCDashboard/build-tests-Desktop-Debug /hdd/code/QFRCDashboard/build-tests-Desktop-Debug/CMakeFiles/SaveLoad_autogen_timestamp_deps.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/SaveLoad_autogen_timestamp_deps.dir/depend
