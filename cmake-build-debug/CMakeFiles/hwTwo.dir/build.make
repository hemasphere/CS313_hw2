# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/hemamuni/Desktop/hwTwo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/hemamuni/Desktop/hwTwo/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/hwTwo.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/hwTwo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/hwTwo.dir/flags.make

CMakeFiles/hwTwo.dir/Question4/main.cpp.o: CMakeFiles/hwTwo.dir/flags.make
CMakeFiles/hwTwo.dir/Question4/main.cpp.o: ../Question4/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hemamuni/Desktop/hwTwo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/hwTwo.dir/Question4/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hwTwo.dir/Question4/main.cpp.o -c /Users/hemamuni/Desktop/hwTwo/Question4/main.cpp

CMakeFiles/hwTwo.dir/Question4/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hwTwo.dir/Question4/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/hemamuni/Desktop/hwTwo/Question4/main.cpp > CMakeFiles/hwTwo.dir/Question4/main.cpp.i

CMakeFiles/hwTwo.dir/Question4/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hwTwo.dir/Question4/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/hemamuni/Desktop/hwTwo/Question4/main.cpp -o CMakeFiles/hwTwo.dir/Question4/main.cpp.s

# Object files for target hwTwo
hwTwo_OBJECTS = \
"CMakeFiles/hwTwo.dir/Question4/main.cpp.o"

# External object files for target hwTwo
hwTwo_EXTERNAL_OBJECTS =

hwTwo: CMakeFiles/hwTwo.dir/Question4/main.cpp.o
hwTwo: CMakeFiles/hwTwo.dir/build.make
hwTwo: CMakeFiles/hwTwo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/hemamuni/Desktop/hwTwo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable hwTwo"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/hwTwo.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/hwTwo.dir/build: hwTwo

.PHONY : CMakeFiles/hwTwo.dir/build

CMakeFiles/hwTwo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/hwTwo.dir/cmake_clean.cmake
.PHONY : CMakeFiles/hwTwo.dir/clean

CMakeFiles/hwTwo.dir/depend:
	cd /Users/hemamuni/Desktop/hwTwo/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/hemamuni/Desktop/hwTwo /Users/hemamuni/Desktop/hwTwo /Users/hemamuni/Desktop/hwTwo/cmake-build-debug /Users/hemamuni/Desktop/hwTwo/cmake-build-debug /Users/hemamuni/Desktop/hwTwo/cmake-build-debug/CMakeFiles/hwTwo.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/hwTwo.dir/depend
