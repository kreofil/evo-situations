# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.29

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
CMAKE_SOURCE_DIR = /home/al/Projects/git-books/ppp/programs/ppp-libraries/container-tag

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/al/Projects/git-books/ppp/programs/ppp-libraries/container-tag/build

# Include any dependencies generated for this target.
include CMakeFiles/container.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/container.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/container.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/container.dir/flags.make

CMakeFiles/container.dir/main.c.o: CMakeFiles/container.dir/flags.make
CMakeFiles/container.dir/main.c.o: /home/al/Projects/git-books/ppp/programs/ppp-libraries/container-tag/main.c
CMakeFiles/container.dir/main.c.o: CMakeFiles/container.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/al/Projects/git-books/ppp/programs/ppp-libraries/container-tag/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/container.dir/main.c.o"
	ppclang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/container.dir/main.c.o -MF CMakeFiles/container.dir/main.c.o.d -o CMakeFiles/container.dir/main.c.o -c /home/al/Projects/git-books/ppp/programs/ppp-libraries/container-tag/main.c

CMakeFiles/container.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/container.dir/main.c.i"
	ppclang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/al/Projects/git-books/ppp/programs/ppp-libraries/container-tag/main.c > CMakeFiles/container.dir/main.c.i

CMakeFiles/container.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/container.dir/main.c.s"
	ppclang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/al/Projects/git-books/ppp/programs/ppp-libraries/container-tag/main.c -o CMakeFiles/container.dir/main.c.s

CMakeFiles/container.dir/value.c.o: CMakeFiles/container.dir/flags.make
CMakeFiles/container.dir/value.c.o: /home/al/Projects/git-books/ppp/programs/ppp-libraries/container-tag/value.c
CMakeFiles/container.dir/value.c.o: CMakeFiles/container.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/al/Projects/git-books/ppp/programs/ppp-libraries/container-tag/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/container.dir/value.c.o"
	ppclang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/container.dir/value.c.o -MF CMakeFiles/container.dir/value.c.o.d -o CMakeFiles/container.dir/value.c.o -c /home/al/Projects/git-books/ppp/programs/ppp-libraries/container-tag/value.c

CMakeFiles/container.dir/value.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/container.dir/value.c.i"
	ppclang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/al/Projects/git-books/ppp/programs/ppp-libraries/container-tag/value.c > CMakeFiles/container.dir/value.c.i

CMakeFiles/container.dir/value.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/container.dir/value.c.s"
	ppclang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/al/Projects/git-books/ppp/programs/ppp-libraries/container-tag/value.c -o CMakeFiles/container.dir/value.c.s

CMakeFiles/container.dir/array.c.o: CMakeFiles/container.dir/flags.make
CMakeFiles/container.dir/array.c.o: /home/al/Projects/git-books/ppp/programs/ppp-libraries/container-tag/array.c
CMakeFiles/container.dir/array.c.o: CMakeFiles/container.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/al/Projects/git-books/ppp/programs/ppp-libraries/container-tag/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/container.dir/array.c.o"
	ppclang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/container.dir/array.c.o -MF CMakeFiles/container.dir/array.c.o.d -o CMakeFiles/container.dir/array.c.o -c /home/al/Projects/git-books/ppp/programs/ppp-libraries/container-tag/array.c

CMakeFiles/container.dir/array.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/container.dir/array.c.i"
	ppclang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/al/Projects/git-books/ppp/programs/ppp-libraries/container-tag/array.c > CMakeFiles/container.dir/array.c.i

CMakeFiles/container.dir/array.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/container.dir/array.c.s"
	ppclang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/al/Projects/git-books/ppp/programs/ppp-libraries/container-tag/array.c -o CMakeFiles/container.dir/array.c.s

CMakeFiles/container.dir/ring-list.c.o: CMakeFiles/container.dir/flags.make
CMakeFiles/container.dir/ring-list.c.o: /home/al/Projects/git-books/ppp/programs/ppp-libraries/container-tag/ring-list.c
CMakeFiles/container.dir/ring-list.c.o: CMakeFiles/container.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/al/Projects/git-books/ppp/programs/ppp-libraries/container-tag/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/container.dir/ring-list.c.o"
	ppclang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/container.dir/ring-list.c.o -MF CMakeFiles/container.dir/ring-list.c.o.d -o CMakeFiles/container.dir/ring-list.c.o -c /home/al/Projects/git-books/ppp/programs/ppp-libraries/container-tag/ring-list.c

CMakeFiles/container.dir/ring-list.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/container.dir/ring-list.c.i"
	ppclang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/al/Projects/git-books/ppp/programs/ppp-libraries/container-tag/ring-list.c > CMakeFiles/container.dir/ring-list.c.i

CMakeFiles/container.dir/ring-list.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/container.dir/ring-list.c.s"
	ppclang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/al/Projects/git-books/ppp/programs/ppp-libraries/container-tag/ring-list.c -o CMakeFiles/container.dir/ring-list.c.s

CMakeFiles/container.dir/container.c.o: CMakeFiles/container.dir/flags.make
CMakeFiles/container.dir/container.c.o: /home/al/Projects/git-books/ppp/programs/ppp-libraries/container-tag/container.c
CMakeFiles/container.dir/container.c.o: CMakeFiles/container.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/al/Projects/git-books/ppp/programs/ppp-libraries/container-tag/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/container.dir/container.c.o"
	ppclang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/container.dir/container.c.o -MF CMakeFiles/container.dir/container.c.o.d -o CMakeFiles/container.dir/container.c.o -c /home/al/Projects/git-books/ppp/programs/ppp-libraries/container-tag/container.c

CMakeFiles/container.dir/container.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/container.dir/container.c.i"
	ppclang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/al/Projects/git-books/ppp/programs/ppp-libraries/container-tag/container.c > CMakeFiles/container.dir/container.c.i

CMakeFiles/container.dir/container.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/container.dir/container.c.s"
	ppclang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/al/Projects/git-books/ppp/programs/ppp-libraries/container-tag/container.c -o CMakeFiles/container.dir/container.c.s

CMakeFiles/container.dir/container-array.c.o: CMakeFiles/container.dir/flags.make
CMakeFiles/container.dir/container-array.c.o: /home/al/Projects/git-books/ppp/programs/ppp-libraries/container-tag/container-array.c
CMakeFiles/container.dir/container-array.c.o: CMakeFiles/container.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/al/Projects/git-books/ppp/programs/ppp-libraries/container-tag/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/container.dir/container-array.c.o"
	ppclang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/container.dir/container-array.c.o -MF CMakeFiles/container.dir/container-array.c.o.d -o CMakeFiles/container.dir/container-array.c.o -c /home/al/Projects/git-books/ppp/programs/ppp-libraries/container-tag/container-array.c

CMakeFiles/container.dir/container-array.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/container.dir/container-array.c.i"
	ppclang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/al/Projects/git-books/ppp/programs/ppp-libraries/container-tag/container-array.c > CMakeFiles/container.dir/container-array.c.i

CMakeFiles/container.dir/container-array.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/container.dir/container-array.c.s"
	ppclang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/al/Projects/git-books/ppp/programs/ppp-libraries/container-tag/container-array.c -o CMakeFiles/container.dir/container-array.c.s

CMakeFiles/container.dir/container-ring-list.c.o: CMakeFiles/container.dir/flags.make
CMakeFiles/container.dir/container-ring-list.c.o: /home/al/Projects/git-books/ppp/programs/ppp-libraries/container-tag/container-ring-list.c
CMakeFiles/container.dir/container-ring-list.c.o: CMakeFiles/container.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/al/Projects/git-books/ppp/programs/ppp-libraries/container-tag/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/container.dir/container-ring-list.c.o"
	ppclang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/container.dir/container-ring-list.c.o -MF CMakeFiles/container.dir/container-ring-list.c.o.d -o CMakeFiles/container.dir/container-ring-list.c.o -c /home/al/Projects/git-books/ppp/programs/ppp-libraries/container-tag/container-ring-list.c

CMakeFiles/container.dir/container-ring-list.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/container.dir/container-ring-list.c.i"
	ppclang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/al/Projects/git-books/ppp/programs/ppp-libraries/container-tag/container-ring-list.c > CMakeFiles/container.dir/container-ring-list.c.i

CMakeFiles/container.dir/container-ring-list.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/container.dir/container-ring-list.c.s"
	ppclang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/al/Projects/git-books/ppp/programs/ppp-libraries/container-tag/container-ring-list.c -o CMakeFiles/container.dir/container-ring-list.c.s

# Object files for target container
container_OBJECTS = \
"CMakeFiles/container.dir/main.c.o" \
"CMakeFiles/container.dir/value.c.o" \
"CMakeFiles/container.dir/array.c.o" \
"CMakeFiles/container.dir/ring-list.c.o" \
"CMakeFiles/container.dir/container.c.o" \
"CMakeFiles/container.dir/container-array.c.o" \
"CMakeFiles/container.dir/container-ring-list.c.o"

# External object files for target container
container_EXTERNAL_OBJECTS =

/home/al/Projects/git-books/ppp/programs/ppp-libraries/container-tag/bin/container: CMakeFiles/container.dir/main.c.o
/home/al/Projects/git-books/ppp/programs/ppp-libraries/container-tag/bin/container: CMakeFiles/container.dir/value.c.o
/home/al/Projects/git-books/ppp/programs/ppp-libraries/container-tag/bin/container: CMakeFiles/container.dir/array.c.o
/home/al/Projects/git-books/ppp/programs/ppp-libraries/container-tag/bin/container: CMakeFiles/container.dir/ring-list.c.o
/home/al/Projects/git-books/ppp/programs/ppp-libraries/container-tag/bin/container: CMakeFiles/container.dir/container.c.o
/home/al/Projects/git-books/ppp/programs/ppp-libraries/container-tag/bin/container: CMakeFiles/container.dir/container-array.c.o
/home/al/Projects/git-books/ppp/programs/ppp-libraries/container-tag/bin/container: CMakeFiles/container.dir/container-ring-list.c.o
/home/al/Projects/git-books/ppp/programs/ppp-libraries/container-tag/bin/container: CMakeFiles/container.dir/build.make
/home/al/Projects/git-books/ppp/programs/ppp-libraries/container-tag/bin/container: CMakeFiles/container.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/al/Projects/git-books/ppp/programs/ppp-libraries/container-tag/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking C executable /home/al/Projects/git-books/ppp/programs/ppp-libraries/container-tag/bin/container"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/container.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/container.dir/build: /home/al/Projects/git-books/ppp/programs/ppp-libraries/container-tag/bin/container
.PHONY : CMakeFiles/container.dir/build

CMakeFiles/container.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/container.dir/cmake_clean.cmake
.PHONY : CMakeFiles/container.dir/clean

CMakeFiles/container.dir/depend:
	cd /home/al/Projects/git-books/ppp/programs/ppp-libraries/container-tag/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/al/Projects/git-books/ppp/programs/ppp-libraries/container-tag /home/al/Projects/git-books/ppp/programs/ppp-libraries/container-tag /home/al/Projects/git-books/ppp/programs/ppp-libraries/container-tag/build /home/al/Projects/git-books/ppp/programs/ppp-libraries/container-tag/build /home/al/Projects/git-books/ppp/programs/ppp-libraries/container-tag/build/CMakeFiles/container.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/container.dir/depend

