# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.13

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Users\Mike Wass\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\183.4588.63\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Users\Mike Wass\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\183.4588.63\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\Mike Wass\Desktop\Facultate\ASD\laborator 9 - tema 3"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Mike Wass\Desktop\Facultate\ASD\laborator 9 - tema 3\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles\laborator_9___tema_3.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\laborator_9___tema_3.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\laborator_9___tema_3.dir\flags.make

CMakeFiles\laborator_9___tema_3.dir\main.cpp.obj: CMakeFiles\laborator_9___tema_3.dir\flags.make
CMakeFiles\laborator_9___tema_3.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Mike Wass\Desktop\Facultate\ASD\laborator 9 - tema 3\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/laborator_9___tema_3.dir/main.cpp.obj"
	"C:\PROGRA~2\Microsoft Visual Studio\2017\Enterprise\VC\Tools\MSVC\14.16.27023\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\laborator_9___tema_3.dir\main.cpp.obj /FdCMakeFiles\laborator_9___tema_3.dir\ /FS -c "C:\Users\Mike Wass\Desktop\Facultate\ASD\laborator 9 - tema 3\main.cpp"
<<

CMakeFiles\laborator_9___tema_3.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/laborator_9___tema_3.dir/main.cpp.i"
	"C:\PROGRA~2\Microsoft Visual Studio\2017\Enterprise\VC\Tools\MSVC\14.16.27023\bin\Hostx86\x86\cl.exe" > CMakeFiles\laborator_9___tema_3.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Mike Wass\Desktop\Facultate\ASD\laborator 9 - tema 3\main.cpp"
<<

CMakeFiles\laborator_9___tema_3.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/laborator_9___tema_3.dir/main.cpp.s"
	"C:\PROGRA~2\Microsoft Visual Studio\2017\Enterprise\VC\Tools\MSVC\14.16.27023\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\laborator_9___tema_3.dir\main.cpp.s /c "C:\Users\Mike Wass\Desktop\Facultate\ASD\laborator 9 - tema 3\main.cpp"
<<

# Object files for target laborator_9___tema_3
laborator_9___tema_3_OBJECTS = \
"CMakeFiles\laborator_9___tema_3.dir\main.cpp.obj"

# External object files for target laborator_9___tema_3
laborator_9___tema_3_EXTERNAL_OBJECTS =

laborator_9___tema_3.exe: CMakeFiles\laborator_9___tema_3.dir\main.cpp.obj
laborator_9___tema_3.exe: CMakeFiles\laborator_9___tema_3.dir\build.make
laborator_9___tema_3.exe: CMakeFiles\laborator_9___tema_3.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Mike Wass\Desktop\Facultate\ASD\laborator 9 - tema 3\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable laborator_9___tema_3.exe"
	"C:\Users\Mike Wass\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\183.4588.63\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\laborator_9___tema_3.dir --manifests  -- "C:\PROGRA~2\Microsoft Visual Studio\2017\Enterprise\VC\Tools\MSVC\14.16.27023\bin\Hostx86\x86\link.exe" /nologo @CMakeFiles\laborator_9___tema_3.dir\objects1.rsp @<<
 /out:laborator_9___tema_3.exe /implib:laborator_9___tema_3.lib /pdb:"C:\Users\Mike Wass\Desktop\Facultate\ASD\laborator 9 - tema 3\cmake-build-debug\laborator_9___tema_3.pdb" /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\laborator_9___tema_3.dir\build: laborator_9___tema_3.exe

.PHONY : CMakeFiles\laborator_9___tema_3.dir\build

CMakeFiles\laborator_9___tema_3.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\laborator_9___tema_3.dir\cmake_clean.cmake
.PHONY : CMakeFiles\laborator_9___tema_3.dir\clean

CMakeFiles\laborator_9___tema_3.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" "C:\Users\Mike Wass\Desktop\Facultate\ASD\laborator 9 - tema 3" "C:\Users\Mike Wass\Desktop\Facultate\ASD\laborator 9 - tema 3" "C:\Users\Mike Wass\Desktop\Facultate\ASD\laborator 9 - tema 3\cmake-build-debug" "C:\Users\Mike Wass\Desktop\Facultate\ASD\laborator 9 - tema 3\cmake-build-debug" "C:\Users\Mike Wass\Desktop\Facultate\ASD\laborator 9 - tema 3\cmake-build-debug\CMakeFiles\laborator_9___tema_3.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles\laborator_9___tema_3.dir\depend
