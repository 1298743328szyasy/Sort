# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.14

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\Clion\CLion 2019.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Clion\CLion 2019.2.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\songai\CLionProjects\Sort

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\songai\CLionProjects\Sort\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Sort.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Sort.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Sort.dir/flags.make

CMakeFiles/Sort.dir/main/shellSort.cpp.obj: CMakeFiles/Sort.dir/flags.make
CMakeFiles/Sort.dir/main/shellSort.cpp.obj: ../main/shellSort.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\songai\CLionProjects\Sort\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Sort.dir/main/shellSort.cpp.obj"
	D:\Clion\MInGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Sort.dir\main\shellSort.cpp.obj -c C:\Users\songai\CLionProjects\Sort\main\shellSort.cpp

CMakeFiles/Sort.dir/main/shellSort.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Sort.dir/main/shellSort.cpp.i"
	D:\Clion\MInGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\songai\CLionProjects\Sort\main\shellSort.cpp > CMakeFiles\Sort.dir\main\shellSort.cpp.i

CMakeFiles/Sort.dir/main/shellSort.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Sort.dir/main/shellSort.cpp.s"
	D:\Clion\MInGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\songai\CLionProjects\Sort\main\shellSort.cpp -o CMakeFiles\Sort.dir\main\shellSort.cpp.s

# Object files for target Sort
Sort_OBJECTS = \
"CMakeFiles/Sort.dir/main/shellSort.cpp.obj"

# External object files for target Sort
Sort_EXTERNAL_OBJECTS =

Sort.exe: CMakeFiles/Sort.dir/main/shellSort.cpp.obj
Sort.exe: CMakeFiles/Sort.dir/build.make
Sort.exe: CMakeFiles/Sort.dir/linklibs.rsp
Sort.exe: CMakeFiles/Sort.dir/objects1.rsp
Sort.exe: CMakeFiles/Sort.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\songai\CLionProjects\Sort\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Sort.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Sort.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Sort.dir/build: Sort.exe

.PHONY : CMakeFiles/Sort.dir/build

CMakeFiles/Sort.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Sort.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Sort.dir/clean

CMakeFiles/Sort.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\songai\CLionProjects\Sort C:\Users\songai\CLionProjects\Sort C:\Users\songai\CLionProjects\Sort\cmake-build-debug C:\Users\songai\CLionProjects\Sort\cmake-build-debug C:\Users\songai\CLionProjects\Sort\cmake-build-debug\CMakeFiles\Sort.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Sort.dir/depend

