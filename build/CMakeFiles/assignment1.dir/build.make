# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = /Applications/CMake.app/Contents/bin/cmake

# The command to remove a file.
RM = /Applications/CMake.app/Contents/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/kayjay/Desktop/data_structures/assignment1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/kayjay/Desktop/data_structures/assignment1/build

# Include any dependencies generated for this target.
include CMakeFiles/assignment1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/assignment1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/assignment1.dir/flags.make

CMakeFiles/assignment1.dir/ds_assignment1.cpp.o: CMakeFiles/assignment1.dir/flags.make
CMakeFiles/assignment1.dir/ds_assignment1.cpp.o: ../ds_assignment1.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kayjay/Desktop/data_structures/assignment1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/assignment1.dir/ds_assignment1.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/assignment1.dir/ds_assignment1.cpp.o -c /Users/kayjay/Desktop/data_structures/assignment1/ds_assignment1.cpp

CMakeFiles/assignment1.dir/ds_assignment1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/assignment1.dir/ds_assignment1.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/kayjay/Desktop/data_structures/assignment1/ds_assignment1.cpp > CMakeFiles/assignment1.dir/ds_assignment1.cpp.i

CMakeFiles/assignment1.dir/ds_assignment1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/assignment1.dir/ds_assignment1.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/kayjay/Desktop/data_structures/assignment1/ds_assignment1.cpp -o CMakeFiles/assignment1.dir/ds_assignment1.cpp.s

# Object files for target assignment1
assignment1_OBJECTS = \
"CMakeFiles/assignment1.dir/ds_assignment1.cpp.o"

# External object files for target assignment1
assignment1_EXTERNAL_OBJECTS =

assignment1: CMakeFiles/assignment1.dir/ds_assignment1.cpp.o
assignment1: CMakeFiles/assignment1.dir/build.make
assignment1: CMakeFiles/assignment1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/kayjay/Desktop/data_structures/assignment1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable assignment1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/assignment1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/assignment1.dir/build: assignment1

.PHONY : CMakeFiles/assignment1.dir/build

CMakeFiles/assignment1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/assignment1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/assignment1.dir/clean

CMakeFiles/assignment1.dir/depend:
	cd /Users/kayjay/Desktop/data_structures/assignment1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/kayjay/Desktop/data_structures/assignment1 /Users/kayjay/Desktop/data_structures/assignment1 /Users/kayjay/Desktop/data_structures/assignment1/build /Users/kayjay/Desktop/data_structures/assignment1/build /Users/kayjay/Desktop/data_structures/assignment1/build/CMakeFiles/assignment1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/assignment1.dir/depend

