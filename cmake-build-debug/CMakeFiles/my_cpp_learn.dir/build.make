# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /home/tianbot/CLion/CLion-2020.3.1/clion-2020.3.1/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/tianbot/CLion/CLion-2020.3.1/clion-2020.3.1/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/tianbot/my_cpp_learn

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tianbot/my_cpp_learn/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/my_cpp_learn.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/my_cpp_learn.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/my_cpp_learn.dir/flags.make

CMakeFiles/my_cpp_learn.dir/src/mycpp.cpp.o: CMakeFiles/my_cpp_learn.dir/flags.make
CMakeFiles/my_cpp_learn.dir/src/mycpp.cpp.o: ../src/mycpp.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tianbot/my_cpp_learn/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/my_cpp_learn.dir/src/mycpp.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/my_cpp_learn.dir/src/mycpp.cpp.o -c /home/tianbot/my_cpp_learn/src/mycpp.cpp

CMakeFiles/my_cpp_learn.dir/src/mycpp.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/my_cpp_learn.dir/src/mycpp.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tianbot/my_cpp_learn/src/mycpp.cpp > CMakeFiles/my_cpp_learn.dir/src/mycpp.cpp.i

CMakeFiles/my_cpp_learn.dir/src/mycpp.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/my_cpp_learn.dir/src/mycpp.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tianbot/my_cpp_learn/src/mycpp.cpp -o CMakeFiles/my_cpp_learn.dir/src/mycpp.cpp.s

CMakeFiles/my_cpp_learn.dir/src/mycppmain.cpp.o: CMakeFiles/my_cpp_learn.dir/flags.make
CMakeFiles/my_cpp_learn.dir/src/mycppmain.cpp.o: ../src/mycppmain.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tianbot/my_cpp_learn/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/my_cpp_learn.dir/src/mycppmain.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/my_cpp_learn.dir/src/mycppmain.cpp.o -c /home/tianbot/my_cpp_learn/src/mycppmain.cpp

CMakeFiles/my_cpp_learn.dir/src/mycppmain.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/my_cpp_learn.dir/src/mycppmain.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tianbot/my_cpp_learn/src/mycppmain.cpp > CMakeFiles/my_cpp_learn.dir/src/mycppmain.cpp.i

CMakeFiles/my_cpp_learn.dir/src/mycppmain.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/my_cpp_learn.dir/src/mycppmain.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tianbot/my_cpp_learn/src/mycppmain.cpp -o CMakeFiles/my_cpp_learn.dir/src/mycppmain.cpp.s

# Object files for target my_cpp_learn
my_cpp_learn_OBJECTS = \
"CMakeFiles/my_cpp_learn.dir/src/mycpp.cpp.o" \
"CMakeFiles/my_cpp_learn.dir/src/mycppmain.cpp.o"

# External object files for target my_cpp_learn
my_cpp_learn_EXTERNAL_OBJECTS =

my_cpp_learn: CMakeFiles/my_cpp_learn.dir/src/mycpp.cpp.o
my_cpp_learn: CMakeFiles/my_cpp_learn.dir/src/mycppmain.cpp.o
my_cpp_learn: CMakeFiles/my_cpp_learn.dir/build.make
my_cpp_learn: CMakeFiles/my_cpp_learn.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/tianbot/my_cpp_learn/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable my_cpp_learn"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/my_cpp_learn.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/my_cpp_learn.dir/build: my_cpp_learn

.PHONY : CMakeFiles/my_cpp_learn.dir/build

CMakeFiles/my_cpp_learn.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/my_cpp_learn.dir/cmake_clean.cmake
.PHONY : CMakeFiles/my_cpp_learn.dir/clean

CMakeFiles/my_cpp_learn.dir/depend:
	cd /home/tianbot/my_cpp_learn/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tianbot/my_cpp_learn /home/tianbot/my_cpp_learn /home/tianbot/my_cpp_learn/cmake-build-debug /home/tianbot/my_cpp_learn/cmake-build-debug /home/tianbot/my_cpp_learn/cmake-build-debug/CMakeFiles/my_cpp_learn.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/my_cpp_learn.dir/depend
