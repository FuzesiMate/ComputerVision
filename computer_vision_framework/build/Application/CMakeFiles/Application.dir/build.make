# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/nvidia/Projects/ComputerVision/computer_vision_framework

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/nvidia/Projects/ComputerVision/computer_vision_framework/build

# Include any dependencies generated for this target.
include Application/CMakeFiles/Application.dir/depend.make

# Include the progress variables for this target.
include Application/CMakeFiles/Application.dir/progress.make

# Include the compile flags for this target's objects.
include Application/CMakeFiles/Application.dir/flags.make

Application/CMakeFiles/Application.dir/src/cvApplication.cpp.o: Application/CMakeFiles/Application.dir/flags.make
Application/CMakeFiles/Application.dir/src/cvApplication.cpp.o: ../Application/src/cvApplication.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nvidia/Projects/ComputerVision/computer_vision_framework/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Application/CMakeFiles/Application.dir/src/cvApplication.cpp.o"
	cd /home/nvidia/Projects/ComputerVision/computer_vision_framework/build/Application && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Application.dir/src/cvApplication.cpp.o -c /home/nvidia/Projects/ComputerVision/computer_vision_framework/Application/src/cvApplication.cpp

Application/CMakeFiles/Application.dir/src/cvApplication.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Application.dir/src/cvApplication.cpp.i"
	cd /home/nvidia/Projects/ComputerVision/computer_vision_framework/build/Application && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nvidia/Projects/ComputerVision/computer_vision_framework/Application/src/cvApplication.cpp > CMakeFiles/Application.dir/src/cvApplication.cpp.i

Application/CMakeFiles/Application.dir/src/cvApplication.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Application.dir/src/cvApplication.cpp.s"
	cd /home/nvidia/Projects/ComputerVision/computer_vision_framework/build/Application && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nvidia/Projects/ComputerVision/computer_vision_framework/Application/src/cvApplication.cpp -o CMakeFiles/Application.dir/src/cvApplication.cpp.s

Application/CMakeFiles/Application.dir/src/cvApplication.cpp.o.requires:

.PHONY : Application/CMakeFiles/Application.dir/src/cvApplication.cpp.o.requires

Application/CMakeFiles/Application.dir/src/cvApplication.cpp.o.provides: Application/CMakeFiles/Application.dir/src/cvApplication.cpp.o.requires
	$(MAKE) -f Application/CMakeFiles/Application.dir/build.make Application/CMakeFiles/Application.dir/src/cvApplication.cpp.o.provides.build
.PHONY : Application/CMakeFiles/Application.dir/src/cvApplication.cpp.o.provides

Application/CMakeFiles/Application.dir/src/cvApplication.cpp.o.provides.build: Application/CMakeFiles/Application.dir/src/cvApplication.cpp.o


# Object files for target Application
Application_OBJECTS = \
"CMakeFiles/Application.dir/src/cvApplication.cpp.o"

# External object files for target Application
Application_EXTERNAL_OBJECTS =

Application/Application: Application/CMakeFiles/Application.dir/src/cvApplication.cpp.o
Application/Application: Application/CMakeFiles/Application.dir/build.make
Application/Application: ComputerVision/libComputerVision.a
Application/Application: Application/CMakeFiles/Application.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/nvidia/Projects/ComputerVision/computer_vision_framework/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Application"
	cd /home/nvidia/Projects/ComputerVision/computer_vision_framework/build/Application && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Application.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Application/CMakeFiles/Application.dir/build: Application/Application

.PHONY : Application/CMakeFiles/Application.dir/build

Application/CMakeFiles/Application.dir/requires: Application/CMakeFiles/Application.dir/src/cvApplication.cpp.o.requires

.PHONY : Application/CMakeFiles/Application.dir/requires

Application/CMakeFiles/Application.dir/clean:
	cd /home/nvidia/Projects/ComputerVision/computer_vision_framework/build/Application && $(CMAKE_COMMAND) -P CMakeFiles/Application.dir/cmake_clean.cmake
.PHONY : Application/CMakeFiles/Application.dir/clean

Application/CMakeFiles/Application.dir/depend:
	cd /home/nvidia/Projects/ComputerVision/computer_vision_framework/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/nvidia/Projects/ComputerVision/computer_vision_framework /home/nvidia/Projects/ComputerVision/computer_vision_framework/Application /home/nvidia/Projects/ComputerVision/computer_vision_framework/build /home/nvidia/Projects/ComputerVision/computer_vision_framework/build/Application /home/nvidia/Projects/ComputerVision/computer_vision_framework/build/Application/CMakeFiles/Application.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Application/CMakeFiles/Application.dir/depend
