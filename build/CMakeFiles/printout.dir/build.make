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

# Utility rule file for printout.

# Include the progress variables for this target.
include CMakeFiles/printout.dir/progress.make

CMakeFiles/printout:
	cd /Users/kayjay/Desktop/data_structures/assignment1 && a2ps -Afill -o- array.h array.cpp ds_assignment1.cpp | ps2pdf - /Users/kayjay/Desktop/data_structures/assignment1/build/printout.pdf

printout: CMakeFiles/printout
printout: CMakeFiles/printout.dir/build.make

.PHONY : printout

# Rule to build all files generated by this target.
CMakeFiles/printout.dir/build: printout

.PHONY : CMakeFiles/printout.dir/build

CMakeFiles/printout.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/printout.dir/cmake_clean.cmake
.PHONY : CMakeFiles/printout.dir/clean

CMakeFiles/printout.dir/depend:
	cd /Users/kayjay/Desktop/data_structures/assignment1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/kayjay/Desktop/data_structures/assignment1 /Users/kayjay/Desktop/data_structures/assignment1 /Users/kayjay/Desktop/data_structures/assignment1/build /Users/kayjay/Desktop/data_structures/assignment1/build /Users/kayjay/Desktop/data_structures/assignment1/build/CMakeFiles/printout.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/printout.dir/depend

