# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.6

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/swc/Dropbox/UnderGit/cs1440s17-instructor/Homework/HW5/GeoRegions

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/swc/Dropbox/UnderGit/cs1440s17-instructor/Homework/HW5/GeoRegions/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/GeoRegions.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/GeoRegions.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/GeoRegions.dir/flags.make

CMakeFiles/GeoRegions.dir/main.cpp.o: CMakeFiles/GeoRegions.dir/flags.make
CMakeFiles/GeoRegions.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/swc/Dropbox/UnderGit/cs1440s17-instructor/Homework/HW5/GeoRegions/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/GeoRegions.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GeoRegions.dir/main.cpp.o -c /Users/swc/Dropbox/UnderGit/cs1440s17-instructor/Homework/HW5/GeoRegions/main.cpp

CMakeFiles/GeoRegions.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GeoRegions.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/swc/Dropbox/UnderGit/cs1440s17-instructor/Homework/HW5/GeoRegions/main.cpp > CMakeFiles/GeoRegions.dir/main.cpp.i

CMakeFiles/GeoRegions.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GeoRegions.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/swc/Dropbox/UnderGit/cs1440s17-instructor/Homework/HW5/GeoRegions/main.cpp -o CMakeFiles/GeoRegions.dir/main.cpp.s

CMakeFiles/GeoRegions.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/GeoRegions.dir/main.cpp.o.requires

CMakeFiles/GeoRegions.dir/main.cpp.o.provides: CMakeFiles/GeoRegions.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/GeoRegions.dir/build.make CMakeFiles/GeoRegions.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/GeoRegions.dir/main.cpp.o.provides

CMakeFiles/GeoRegions.dir/main.cpp.o.provides.build: CMakeFiles/GeoRegions.dir/main.cpp.o


CMakeFiles/GeoRegions.dir/Utils.cpp.o: CMakeFiles/GeoRegions.dir/flags.make
CMakeFiles/GeoRegions.dir/Utils.cpp.o: ../Utils.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/swc/Dropbox/UnderGit/cs1440s17-instructor/Homework/HW5/GeoRegions/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/GeoRegions.dir/Utils.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GeoRegions.dir/Utils.cpp.o -c /Users/swc/Dropbox/UnderGit/cs1440s17-instructor/Homework/HW5/GeoRegions/Utils.cpp

CMakeFiles/GeoRegions.dir/Utils.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GeoRegions.dir/Utils.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/swc/Dropbox/UnderGit/cs1440s17-instructor/Homework/HW5/GeoRegions/Utils.cpp > CMakeFiles/GeoRegions.dir/Utils.cpp.i

CMakeFiles/GeoRegions.dir/Utils.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GeoRegions.dir/Utils.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/swc/Dropbox/UnderGit/cs1440s17-instructor/Homework/HW5/GeoRegions/Utils.cpp -o CMakeFiles/GeoRegions.dir/Utils.cpp.s

CMakeFiles/GeoRegions.dir/Utils.cpp.o.requires:

.PHONY : CMakeFiles/GeoRegions.dir/Utils.cpp.o.requires

CMakeFiles/GeoRegions.dir/Utils.cpp.o.provides: CMakeFiles/GeoRegions.dir/Utils.cpp.o.requires
	$(MAKE) -f CMakeFiles/GeoRegions.dir/build.make CMakeFiles/GeoRegions.dir/Utils.cpp.o.provides.build
.PHONY : CMakeFiles/GeoRegions.dir/Utils.cpp.o.provides

CMakeFiles/GeoRegions.dir/Utils.cpp.o.provides.build: CMakeFiles/GeoRegions.dir/Utils.cpp.o


CMakeFiles/GeoRegions.dir/MenuOption.cpp.o: CMakeFiles/GeoRegions.dir/flags.make
CMakeFiles/GeoRegions.dir/MenuOption.cpp.o: ../MenuOption.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/swc/Dropbox/UnderGit/cs1440s17-instructor/Homework/HW5/GeoRegions/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/GeoRegions.dir/MenuOption.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GeoRegions.dir/MenuOption.cpp.o -c /Users/swc/Dropbox/UnderGit/cs1440s17-instructor/Homework/HW5/GeoRegions/MenuOption.cpp

CMakeFiles/GeoRegions.dir/MenuOption.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GeoRegions.dir/MenuOption.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/swc/Dropbox/UnderGit/cs1440s17-instructor/Homework/HW5/GeoRegions/MenuOption.cpp > CMakeFiles/GeoRegions.dir/MenuOption.cpp.i

CMakeFiles/GeoRegions.dir/MenuOption.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GeoRegions.dir/MenuOption.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/swc/Dropbox/UnderGit/cs1440s17-instructor/Homework/HW5/GeoRegions/MenuOption.cpp -o CMakeFiles/GeoRegions.dir/MenuOption.cpp.s

CMakeFiles/GeoRegions.dir/MenuOption.cpp.o.requires:

.PHONY : CMakeFiles/GeoRegions.dir/MenuOption.cpp.o.requires

CMakeFiles/GeoRegions.dir/MenuOption.cpp.o.provides: CMakeFiles/GeoRegions.dir/MenuOption.cpp.o.requires
	$(MAKE) -f CMakeFiles/GeoRegions.dir/build.make CMakeFiles/GeoRegions.dir/MenuOption.cpp.o.provides.build
.PHONY : CMakeFiles/GeoRegions.dir/MenuOption.cpp.o.provides

CMakeFiles/GeoRegions.dir/MenuOption.cpp.o.provides.build: CMakeFiles/GeoRegions.dir/MenuOption.cpp.o


CMakeFiles/GeoRegions.dir/Menu.cpp.o: CMakeFiles/GeoRegions.dir/flags.make
CMakeFiles/GeoRegions.dir/Menu.cpp.o: ../Menu.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/swc/Dropbox/UnderGit/cs1440s17-instructor/Homework/HW5/GeoRegions/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/GeoRegions.dir/Menu.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GeoRegions.dir/Menu.cpp.o -c /Users/swc/Dropbox/UnderGit/cs1440s17-instructor/Homework/HW5/GeoRegions/Menu.cpp

CMakeFiles/GeoRegions.dir/Menu.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GeoRegions.dir/Menu.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/swc/Dropbox/UnderGit/cs1440s17-instructor/Homework/HW5/GeoRegions/Menu.cpp > CMakeFiles/GeoRegions.dir/Menu.cpp.i

CMakeFiles/GeoRegions.dir/Menu.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GeoRegions.dir/Menu.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/swc/Dropbox/UnderGit/cs1440s17-instructor/Homework/HW5/GeoRegions/Menu.cpp -o CMakeFiles/GeoRegions.dir/Menu.cpp.s

CMakeFiles/GeoRegions.dir/Menu.cpp.o.requires:

.PHONY : CMakeFiles/GeoRegions.dir/Menu.cpp.o.requires

CMakeFiles/GeoRegions.dir/Menu.cpp.o.provides: CMakeFiles/GeoRegions.dir/Menu.cpp.o.requires
	$(MAKE) -f CMakeFiles/GeoRegions.dir/build.make CMakeFiles/GeoRegions.dir/Menu.cpp.o.provides.build
.PHONY : CMakeFiles/GeoRegions.dir/Menu.cpp.o.provides

CMakeFiles/GeoRegions.dir/Menu.cpp.o.provides.build: CMakeFiles/GeoRegions.dir/Menu.cpp.o


CMakeFiles/GeoRegions.dir/UserInterface.cpp.o: CMakeFiles/GeoRegions.dir/flags.make
CMakeFiles/GeoRegions.dir/UserInterface.cpp.o: ../UserInterface.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/swc/Dropbox/UnderGit/cs1440s17-instructor/Homework/HW5/GeoRegions/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/GeoRegions.dir/UserInterface.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GeoRegions.dir/UserInterface.cpp.o -c /Users/swc/Dropbox/UnderGit/cs1440s17-instructor/Homework/HW5/GeoRegions/UserInterface.cpp

CMakeFiles/GeoRegions.dir/UserInterface.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GeoRegions.dir/UserInterface.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/swc/Dropbox/UnderGit/cs1440s17-instructor/Homework/HW5/GeoRegions/UserInterface.cpp > CMakeFiles/GeoRegions.dir/UserInterface.cpp.i

CMakeFiles/GeoRegions.dir/UserInterface.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GeoRegions.dir/UserInterface.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/swc/Dropbox/UnderGit/cs1440s17-instructor/Homework/HW5/GeoRegions/UserInterface.cpp -o CMakeFiles/GeoRegions.dir/UserInterface.cpp.s

CMakeFiles/GeoRegions.dir/UserInterface.cpp.o.requires:

.PHONY : CMakeFiles/GeoRegions.dir/UserInterface.cpp.o.requires

CMakeFiles/GeoRegions.dir/UserInterface.cpp.o.provides: CMakeFiles/GeoRegions.dir/UserInterface.cpp.o.requires
	$(MAKE) -f CMakeFiles/GeoRegions.dir/build.make CMakeFiles/GeoRegions.dir/UserInterface.cpp.o.provides.build
.PHONY : CMakeFiles/GeoRegions.dir/UserInterface.cpp.o.provides

CMakeFiles/GeoRegions.dir/UserInterface.cpp.o.provides.build: CMakeFiles/GeoRegions.dir/UserInterface.cpp.o


CMakeFiles/GeoRegions.dir/World.cpp.o: CMakeFiles/GeoRegions.dir/flags.make
CMakeFiles/GeoRegions.dir/World.cpp.o: ../World.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/swc/Dropbox/UnderGit/cs1440s17-instructor/Homework/HW5/GeoRegions/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/GeoRegions.dir/World.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GeoRegions.dir/World.cpp.o -c /Users/swc/Dropbox/UnderGit/cs1440s17-instructor/Homework/HW5/GeoRegions/World.cpp

CMakeFiles/GeoRegions.dir/World.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GeoRegions.dir/World.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/swc/Dropbox/UnderGit/cs1440s17-instructor/Homework/HW5/GeoRegions/World.cpp > CMakeFiles/GeoRegions.dir/World.cpp.i

CMakeFiles/GeoRegions.dir/World.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GeoRegions.dir/World.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/swc/Dropbox/UnderGit/cs1440s17-instructor/Homework/HW5/GeoRegions/World.cpp -o CMakeFiles/GeoRegions.dir/World.cpp.s

CMakeFiles/GeoRegions.dir/World.cpp.o.requires:

.PHONY : CMakeFiles/GeoRegions.dir/World.cpp.o.requires

CMakeFiles/GeoRegions.dir/World.cpp.o.provides: CMakeFiles/GeoRegions.dir/World.cpp.o.requires
	$(MAKE) -f CMakeFiles/GeoRegions.dir/build.make CMakeFiles/GeoRegions.dir/World.cpp.o.provides.build
.PHONY : CMakeFiles/GeoRegions.dir/World.cpp.o.provides

CMakeFiles/GeoRegions.dir/World.cpp.o.provides.build: CMakeFiles/GeoRegions.dir/World.cpp.o


CMakeFiles/GeoRegions.dir/Nation.cpp.o: CMakeFiles/GeoRegions.dir/flags.make
CMakeFiles/GeoRegions.dir/Nation.cpp.o: ../Nation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/swc/Dropbox/UnderGit/cs1440s17-instructor/Homework/HW5/GeoRegions/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/GeoRegions.dir/Nation.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GeoRegions.dir/Nation.cpp.o -c /Users/swc/Dropbox/UnderGit/cs1440s17-instructor/Homework/HW5/GeoRegions/Nation.cpp

CMakeFiles/GeoRegions.dir/Nation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GeoRegions.dir/Nation.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/swc/Dropbox/UnderGit/cs1440s17-instructor/Homework/HW5/GeoRegions/Nation.cpp > CMakeFiles/GeoRegions.dir/Nation.cpp.i

CMakeFiles/GeoRegions.dir/Nation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GeoRegions.dir/Nation.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/swc/Dropbox/UnderGit/cs1440s17-instructor/Homework/HW5/GeoRegions/Nation.cpp -o CMakeFiles/GeoRegions.dir/Nation.cpp.s

CMakeFiles/GeoRegions.dir/Nation.cpp.o.requires:

.PHONY : CMakeFiles/GeoRegions.dir/Nation.cpp.o.requires

CMakeFiles/GeoRegions.dir/Nation.cpp.o.provides: CMakeFiles/GeoRegions.dir/Nation.cpp.o.requires
	$(MAKE) -f CMakeFiles/GeoRegions.dir/build.make CMakeFiles/GeoRegions.dir/Nation.cpp.o.provides.build
.PHONY : CMakeFiles/GeoRegions.dir/Nation.cpp.o.provides

CMakeFiles/GeoRegions.dir/Nation.cpp.o.provides.build: CMakeFiles/GeoRegions.dir/Nation.cpp.o


CMakeFiles/GeoRegions.dir/State.cpp.o: CMakeFiles/GeoRegions.dir/flags.make
CMakeFiles/GeoRegions.dir/State.cpp.o: ../State.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/swc/Dropbox/UnderGit/cs1440s17-instructor/Homework/HW5/GeoRegions/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/GeoRegions.dir/State.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GeoRegions.dir/State.cpp.o -c /Users/swc/Dropbox/UnderGit/cs1440s17-instructor/Homework/HW5/GeoRegions/State.cpp

CMakeFiles/GeoRegions.dir/State.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GeoRegions.dir/State.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/swc/Dropbox/UnderGit/cs1440s17-instructor/Homework/HW5/GeoRegions/State.cpp > CMakeFiles/GeoRegions.dir/State.cpp.i

CMakeFiles/GeoRegions.dir/State.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GeoRegions.dir/State.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/swc/Dropbox/UnderGit/cs1440s17-instructor/Homework/HW5/GeoRegions/State.cpp -o CMakeFiles/GeoRegions.dir/State.cpp.s

CMakeFiles/GeoRegions.dir/State.cpp.o.requires:

.PHONY : CMakeFiles/GeoRegions.dir/State.cpp.o.requires

CMakeFiles/GeoRegions.dir/State.cpp.o.provides: CMakeFiles/GeoRegions.dir/State.cpp.o.requires
	$(MAKE) -f CMakeFiles/GeoRegions.dir/build.make CMakeFiles/GeoRegions.dir/State.cpp.o.provides.build
.PHONY : CMakeFiles/GeoRegions.dir/State.cpp.o.provides

CMakeFiles/GeoRegions.dir/State.cpp.o.provides.build: CMakeFiles/GeoRegions.dir/State.cpp.o


CMakeFiles/GeoRegions.dir/County.cpp.o: CMakeFiles/GeoRegions.dir/flags.make
CMakeFiles/GeoRegions.dir/County.cpp.o: ../County.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/swc/Dropbox/UnderGit/cs1440s17-instructor/Homework/HW5/GeoRegions/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/GeoRegions.dir/County.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GeoRegions.dir/County.cpp.o -c /Users/swc/Dropbox/UnderGit/cs1440s17-instructor/Homework/HW5/GeoRegions/County.cpp

CMakeFiles/GeoRegions.dir/County.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GeoRegions.dir/County.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/swc/Dropbox/UnderGit/cs1440s17-instructor/Homework/HW5/GeoRegions/County.cpp > CMakeFiles/GeoRegions.dir/County.cpp.i

CMakeFiles/GeoRegions.dir/County.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GeoRegions.dir/County.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/swc/Dropbox/UnderGit/cs1440s17-instructor/Homework/HW5/GeoRegions/County.cpp -o CMakeFiles/GeoRegions.dir/County.cpp.s

CMakeFiles/GeoRegions.dir/County.cpp.o.requires:

.PHONY : CMakeFiles/GeoRegions.dir/County.cpp.o.requires

CMakeFiles/GeoRegions.dir/County.cpp.o.provides: CMakeFiles/GeoRegions.dir/County.cpp.o.requires
	$(MAKE) -f CMakeFiles/GeoRegions.dir/build.make CMakeFiles/GeoRegions.dir/County.cpp.o.provides.build
.PHONY : CMakeFiles/GeoRegions.dir/County.cpp.o.provides

CMakeFiles/GeoRegions.dir/County.cpp.o.provides.build: CMakeFiles/GeoRegions.dir/County.cpp.o


CMakeFiles/GeoRegions.dir/City.cpp.o: CMakeFiles/GeoRegions.dir/flags.make
CMakeFiles/GeoRegions.dir/City.cpp.o: ../City.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/swc/Dropbox/UnderGit/cs1440s17-instructor/Homework/HW5/GeoRegions/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/GeoRegions.dir/City.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GeoRegions.dir/City.cpp.o -c /Users/swc/Dropbox/UnderGit/cs1440s17-instructor/Homework/HW5/GeoRegions/City.cpp

CMakeFiles/GeoRegions.dir/City.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GeoRegions.dir/City.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/swc/Dropbox/UnderGit/cs1440s17-instructor/Homework/HW5/GeoRegions/City.cpp > CMakeFiles/GeoRegions.dir/City.cpp.i

CMakeFiles/GeoRegions.dir/City.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GeoRegions.dir/City.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/swc/Dropbox/UnderGit/cs1440s17-instructor/Homework/HW5/GeoRegions/City.cpp -o CMakeFiles/GeoRegions.dir/City.cpp.s

CMakeFiles/GeoRegions.dir/City.cpp.o.requires:

.PHONY : CMakeFiles/GeoRegions.dir/City.cpp.o.requires

CMakeFiles/GeoRegions.dir/City.cpp.o.provides: CMakeFiles/GeoRegions.dir/City.cpp.o.requires
	$(MAKE) -f CMakeFiles/GeoRegions.dir/build.make CMakeFiles/GeoRegions.dir/City.cpp.o.provides.build
.PHONY : CMakeFiles/GeoRegions.dir/City.cpp.o.provides

CMakeFiles/GeoRegions.dir/City.cpp.o.provides.build: CMakeFiles/GeoRegions.dir/City.cpp.o


CMakeFiles/GeoRegions.dir/Region.cpp.o: CMakeFiles/GeoRegions.dir/flags.make
CMakeFiles/GeoRegions.dir/Region.cpp.o: ../Region.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/swc/Dropbox/UnderGit/cs1440s17-instructor/Homework/HW5/GeoRegions/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/GeoRegions.dir/Region.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GeoRegions.dir/Region.cpp.o -c /Users/swc/Dropbox/UnderGit/cs1440s17-instructor/Homework/HW5/GeoRegions/Region.cpp

CMakeFiles/GeoRegions.dir/Region.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GeoRegions.dir/Region.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/swc/Dropbox/UnderGit/cs1440s17-instructor/Homework/HW5/GeoRegions/Region.cpp > CMakeFiles/GeoRegions.dir/Region.cpp.i

CMakeFiles/GeoRegions.dir/Region.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GeoRegions.dir/Region.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/swc/Dropbox/UnderGit/cs1440s17-instructor/Homework/HW5/GeoRegions/Region.cpp -o CMakeFiles/GeoRegions.dir/Region.cpp.s

CMakeFiles/GeoRegions.dir/Region.cpp.o.requires:

.PHONY : CMakeFiles/GeoRegions.dir/Region.cpp.o.requires

CMakeFiles/GeoRegions.dir/Region.cpp.o.provides: CMakeFiles/GeoRegions.dir/Region.cpp.o.requires
	$(MAKE) -f CMakeFiles/GeoRegions.dir/build.make CMakeFiles/GeoRegions.dir/Region.cpp.o.provides.build
.PHONY : CMakeFiles/GeoRegions.dir/Region.cpp.o.provides

CMakeFiles/GeoRegions.dir/Region.cpp.o.provides.build: CMakeFiles/GeoRegions.dir/Region.cpp.o


CMakeFiles/GeoRegions.dir/WorldUserInterface.cpp.o: CMakeFiles/GeoRegions.dir/flags.make
CMakeFiles/GeoRegions.dir/WorldUserInterface.cpp.o: ../WorldUserInterface.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/swc/Dropbox/UnderGit/cs1440s17-instructor/Homework/HW5/GeoRegions/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/GeoRegions.dir/WorldUserInterface.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GeoRegions.dir/WorldUserInterface.cpp.o -c /Users/swc/Dropbox/UnderGit/cs1440s17-instructor/Homework/HW5/GeoRegions/WorldUserInterface.cpp

CMakeFiles/GeoRegions.dir/WorldUserInterface.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GeoRegions.dir/WorldUserInterface.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/swc/Dropbox/UnderGit/cs1440s17-instructor/Homework/HW5/GeoRegions/WorldUserInterface.cpp > CMakeFiles/GeoRegions.dir/WorldUserInterface.cpp.i

CMakeFiles/GeoRegions.dir/WorldUserInterface.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GeoRegions.dir/WorldUserInterface.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/swc/Dropbox/UnderGit/cs1440s17-instructor/Homework/HW5/GeoRegions/WorldUserInterface.cpp -o CMakeFiles/GeoRegions.dir/WorldUserInterface.cpp.s

CMakeFiles/GeoRegions.dir/WorldUserInterface.cpp.o.requires:

.PHONY : CMakeFiles/GeoRegions.dir/WorldUserInterface.cpp.o.requires

CMakeFiles/GeoRegions.dir/WorldUserInterface.cpp.o.provides: CMakeFiles/GeoRegions.dir/WorldUserInterface.cpp.o.requires
	$(MAKE) -f CMakeFiles/GeoRegions.dir/build.make CMakeFiles/GeoRegions.dir/WorldUserInterface.cpp.o.provides.build
.PHONY : CMakeFiles/GeoRegions.dir/WorldUserInterface.cpp.o.provides

CMakeFiles/GeoRegions.dir/WorldUserInterface.cpp.o.provides.build: CMakeFiles/GeoRegions.dir/WorldUserInterface.cpp.o


CMakeFiles/GeoRegions.dir/NationUserInterface.cpp.o: CMakeFiles/GeoRegions.dir/flags.make
CMakeFiles/GeoRegions.dir/NationUserInterface.cpp.o: ../NationUserInterface.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/swc/Dropbox/UnderGit/cs1440s17-instructor/Homework/HW5/GeoRegions/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/GeoRegions.dir/NationUserInterface.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GeoRegions.dir/NationUserInterface.cpp.o -c /Users/swc/Dropbox/UnderGit/cs1440s17-instructor/Homework/HW5/GeoRegions/NationUserInterface.cpp

CMakeFiles/GeoRegions.dir/NationUserInterface.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GeoRegions.dir/NationUserInterface.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/swc/Dropbox/UnderGit/cs1440s17-instructor/Homework/HW5/GeoRegions/NationUserInterface.cpp > CMakeFiles/GeoRegions.dir/NationUserInterface.cpp.i

CMakeFiles/GeoRegions.dir/NationUserInterface.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GeoRegions.dir/NationUserInterface.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/swc/Dropbox/UnderGit/cs1440s17-instructor/Homework/HW5/GeoRegions/NationUserInterface.cpp -o CMakeFiles/GeoRegions.dir/NationUserInterface.cpp.s

CMakeFiles/GeoRegions.dir/NationUserInterface.cpp.o.requires:

.PHONY : CMakeFiles/GeoRegions.dir/NationUserInterface.cpp.o.requires

CMakeFiles/GeoRegions.dir/NationUserInterface.cpp.o.provides: CMakeFiles/GeoRegions.dir/NationUserInterface.cpp.o.requires
	$(MAKE) -f CMakeFiles/GeoRegions.dir/build.make CMakeFiles/GeoRegions.dir/NationUserInterface.cpp.o.provides.build
.PHONY : CMakeFiles/GeoRegions.dir/NationUserInterface.cpp.o.provides

CMakeFiles/GeoRegions.dir/NationUserInterface.cpp.o.provides.build: CMakeFiles/GeoRegions.dir/NationUserInterface.cpp.o


CMakeFiles/GeoRegions.dir/StateUserInterface.cpp.o: CMakeFiles/GeoRegions.dir/flags.make
CMakeFiles/GeoRegions.dir/StateUserInterface.cpp.o: ../StateUserInterface.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/swc/Dropbox/UnderGit/cs1440s17-instructor/Homework/HW5/GeoRegions/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/GeoRegions.dir/StateUserInterface.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GeoRegions.dir/StateUserInterface.cpp.o -c /Users/swc/Dropbox/UnderGit/cs1440s17-instructor/Homework/HW5/GeoRegions/StateUserInterface.cpp

CMakeFiles/GeoRegions.dir/StateUserInterface.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GeoRegions.dir/StateUserInterface.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/swc/Dropbox/UnderGit/cs1440s17-instructor/Homework/HW5/GeoRegions/StateUserInterface.cpp > CMakeFiles/GeoRegions.dir/StateUserInterface.cpp.i

CMakeFiles/GeoRegions.dir/StateUserInterface.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GeoRegions.dir/StateUserInterface.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/swc/Dropbox/UnderGit/cs1440s17-instructor/Homework/HW5/GeoRegions/StateUserInterface.cpp -o CMakeFiles/GeoRegions.dir/StateUserInterface.cpp.s

CMakeFiles/GeoRegions.dir/StateUserInterface.cpp.o.requires:

.PHONY : CMakeFiles/GeoRegions.dir/StateUserInterface.cpp.o.requires

CMakeFiles/GeoRegions.dir/StateUserInterface.cpp.o.provides: CMakeFiles/GeoRegions.dir/StateUserInterface.cpp.o.requires
	$(MAKE) -f CMakeFiles/GeoRegions.dir/build.make CMakeFiles/GeoRegions.dir/StateUserInterface.cpp.o.provides.build
.PHONY : CMakeFiles/GeoRegions.dir/StateUserInterface.cpp.o.provides

CMakeFiles/GeoRegions.dir/StateUserInterface.cpp.o.provides.build: CMakeFiles/GeoRegions.dir/StateUserInterface.cpp.o


CMakeFiles/GeoRegions.dir/CountyUserInterface.cpp.o: CMakeFiles/GeoRegions.dir/flags.make
CMakeFiles/GeoRegions.dir/CountyUserInterface.cpp.o: ../CountyUserInterface.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/swc/Dropbox/UnderGit/cs1440s17-instructor/Homework/HW5/GeoRegions/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object CMakeFiles/GeoRegions.dir/CountyUserInterface.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GeoRegions.dir/CountyUserInterface.cpp.o -c /Users/swc/Dropbox/UnderGit/cs1440s17-instructor/Homework/HW5/GeoRegions/CountyUserInterface.cpp

CMakeFiles/GeoRegions.dir/CountyUserInterface.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GeoRegions.dir/CountyUserInterface.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/swc/Dropbox/UnderGit/cs1440s17-instructor/Homework/HW5/GeoRegions/CountyUserInterface.cpp > CMakeFiles/GeoRegions.dir/CountyUserInterface.cpp.i

CMakeFiles/GeoRegions.dir/CountyUserInterface.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GeoRegions.dir/CountyUserInterface.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/swc/Dropbox/UnderGit/cs1440s17-instructor/Homework/HW5/GeoRegions/CountyUserInterface.cpp -o CMakeFiles/GeoRegions.dir/CountyUserInterface.cpp.s

CMakeFiles/GeoRegions.dir/CountyUserInterface.cpp.o.requires:

.PHONY : CMakeFiles/GeoRegions.dir/CountyUserInterface.cpp.o.requires

CMakeFiles/GeoRegions.dir/CountyUserInterface.cpp.o.provides: CMakeFiles/GeoRegions.dir/CountyUserInterface.cpp.o.requires
	$(MAKE) -f CMakeFiles/GeoRegions.dir/build.make CMakeFiles/GeoRegions.dir/CountyUserInterface.cpp.o.provides.build
.PHONY : CMakeFiles/GeoRegions.dir/CountyUserInterface.cpp.o.provides

CMakeFiles/GeoRegions.dir/CountyUserInterface.cpp.o.provides.build: CMakeFiles/GeoRegions.dir/CountyUserInterface.cpp.o


# Object files for target GeoRegions
GeoRegions_OBJECTS = \
"CMakeFiles/GeoRegions.dir/main.cpp.o" \
"CMakeFiles/GeoRegions.dir/Utils.cpp.o" \
"CMakeFiles/GeoRegions.dir/MenuOption.cpp.o" \
"CMakeFiles/GeoRegions.dir/Menu.cpp.o" \
"CMakeFiles/GeoRegions.dir/UserInterface.cpp.o" \
"CMakeFiles/GeoRegions.dir/World.cpp.o" \
"CMakeFiles/GeoRegions.dir/Nation.cpp.o" \
"CMakeFiles/GeoRegions.dir/State.cpp.o" \
"CMakeFiles/GeoRegions.dir/County.cpp.o" \
"CMakeFiles/GeoRegions.dir/City.cpp.o" \
"CMakeFiles/GeoRegions.dir/Region.cpp.o" \
"CMakeFiles/GeoRegions.dir/WorldUserInterface.cpp.o" \
"CMakeFiles/GeoRegions.dir/NationUserInterface.cpp.o" \
"CMakeFiles/GeoRegions.dir/StateUserInterface.cpp.o" \
"CMakeFiles/GeoRegions.dir/CountyUserInterface.cpp.o"

# External object files for target GeoRegions
GeoRegions_EXTERNAL_OBJECTS =

GeoRegions: CMakeFiles/GeoRegions.dir/main.cpp.o
GeoRegions: CMakeFiles/GeoRegions.dir/Utils.cpp.o
GeoRegions: CMakeFiles/GeoRegions.dir/MenuOption.cpp.o
GeoRegions: CMakeFiles/GeoRegions.dir/Menu.cpp.o
GeoRegions: CMakeFiles/GeoRegions.dir/UserInterface.cpp.o
GeoRegions: CMakeFiles/GeoRegions.dir/World.cpp.o
GeoRegions: CMakeFiles/GeoRegions.dir/Nation.cpp.o
GeoRegions: CMakeFiles/GeoRegions.dir/State.cpp.o
GeoRegions: CMakeFiles/GeoRegions.dir/County.cpp.o
GeoRegions: CMakeFiles/GeoRegions.dir/City.cpp.o
GeoRegions: CMakeFiles/GeoRegions.dir/Region.cpp.o
GeoRegions: CMakeFiles/GeoRegions.dir/WorldUserInterface.cpp.o
GeoRegions: CMakeFiles/GeoRegions.dir/NationUserInterface.cpp.o
GeoRegions: CMakeFiles/GeoRegions.dir/StateUserInterface.cpp.o
GeoRegions: CMakeFiles/GeoRegions.dir/CountyUserInterface.cpp.o
GeoRegions: CMakeFiles/GeoRegions.dir/build.make
GeoRegions: CMakeFiles/GeoRegions.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/swc/Dropbox/UnderGit/cs1440s17-instructor/Homework/HW5/GeoRegions/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Linking CXX executable GeoRegions"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/GeoRegions.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/GeoRegions.dir/build: GeoRegions

.PHONY : CMakeFiles/GeoRegions.dir/build

CMakeFiles/GeoRegions.dir/requires: CMakeFiles/GeoRegions.dir/main.cpp.o.requires
CMakeFiles/GeoRegions.dir/requires: CMakeFiles/GeoRegions.dir/Utils.cpp.o.requires
CMakeFiles/GeoRegions.dir/requires: CMakeFiles/GeoRegions.dir/MenuOption.cpp.o.requires
CMakeFiles/GeoRegions.dir/requires: CMakeFiles/GeoRegions.dir/Menu.cpp.o.requires
CMakeFiles/GeoRegions.dir/requires: CMakeFiles/GeoRegions.dir/UserInterface.cpp.o.requires
CMakeFiles/GeoRegions.dir/requires: CMakeFiles/GeoRegions.dir/World.cpp.o.requires
CMakeFiles/GeoRegions.dir/requires: CMakeFiles/GeoRegions.dir/Nation.cpp.o.requires
CMakeFiles/GeoRegions.dir/requires: CMakeFiles/GeoRegions.dir/State.cpp.o.requires
CMakeFiles/GeoRegions.dir/requires: CMakeFiles/GeoRegions.dir/County.cpp.o.requires
CMakeFiles/GeoRegions.dir/requires: CMakeFiles/GeoRegions.dir/City.cpp.o.requires
CMakeFiles/GeoRegions.dir/requires: CMakeFiles/GeoRegions.dir/Region.cpp.o.requires
CMakeFiles/GeoRegions.dir/requires: CMakeFiles/GeoRegions.dir/WorldUserInterface.cpp.o.requires
CMakeFiles/GeoRegions.dir/requires: CMakeFiles/GeoRegions.dir/NationUserInterface.cpp.o.requires
CMakeFiles/GeoRegions.dir/requires: CMakeFiles/GeoRegions.dir/StateUserInterface.cpp.o.requires
CMakeFiles/GeoRegions.dir/requires: CMakeFiles/GeoRegions.dir/CountyUserInterface.cpp.o.requires

.PHONY : CMakeFiles/GeoRegions.dir/requires

CMakeFiles/GeoRegions.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/GeoRegions.dir/cmake_clean.cmake
.PHONY : CMakeFiles/GeoRegions.dir/clean

CMakeFiles/GeoRegions.dir/depend:
	cd /Users/swc/Dropbox/UnderGit/cs1440s17-instructor/Homework/HW5/GeoRegions/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/swc/Dropbox/UnderGit/cs1440s17-instructor/Homework/HW5/GeoRegions /Users/swc/Dropbox/UnderGit/cs1440s17-instructor/Homework/HW5/GeoRegions /Users/swc/Dropbox/UnderGit/cs1440s17-instructor/Homework/HW5/GeoRegions/cmake-build-debug /Users/swc/Dropbox/UnderGit/cs1440s17-instructor/Homework/HW5/GeoRegions/cmake-build-debug /Users/swc/Dropbox/UnderGit/cs1440s17-instructor/Homework/HW5/GeoRegions/cmake-build-debug/CMakeFiles/GeoRegions.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/GeoRegions.dir/depend

