# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = "C:\Users\Mike Wass\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\182.4892.24\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Users\Mike Wass\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\182.4892.24\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\Mike Wass\Desktop\Facultate\ASD\laborator 4 - tema 2"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Mike Wass\Desktop\Facultate\ASD\laborator 4 - tema 2\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles\labrator_4___tema_2.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\labrator_4___tema_2.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\labrator_4___tema_2.dir\flags.make

CMakeFiles\labrator_4___tema_2.dir\main.cpp.obj: CMakeFiles\labrator_4___tema_2.dir\flags.make
CMakeFiles\labrator_4___tema_2.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Mike Wass\Desktop\Facultate\ASD\laborator 4 - tema 2\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/labrator_4___tema_2.dir/main.cpp.obj"
	"C:\PROGRA~2\Microsoft Visual Studio\2017\Enterprise\VC\Tools\MSVC\14.15.26726\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\labrator_4___tema_2.dir\main.cpp.obj /FdCMakeFiles\labrator_4___tema_2.dir\ /FS -c "C:\Users\Mike Wass\Desktop\Facultate\ASD\laborator 4 - tema 2\main.cpp"
<<

CMakeFiles\labrator_4___tema_2.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/labrator_4___tema_2.dir/main.cpp.i"
	"C:\PROGRA~2\Microsoft Visual Studio\2017\Enterprise\VC\Tools\MSVC\14.15.26726\bin\Hostx86\x86\cl.exe" > CMakeFiles\labrator_4___tema_2.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Mike Wass\Desktop\Facultate\ASD\laborator 4 - tema 2\main.cpp"
<<

CMakeFiles\labrator_4___tema_2.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/labrator_4___tema_2.dir/main.cpp.s"
	"C:\PROGRA~2\Microsoft Visual Studio\2017\Enterprise\VC\Tools\MSVC\14.15.26726\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\labrator_4___tema_2.dir\main.cpp.s /c "C:\Users\Mike Wass\Desktop\Facultate\ASD\laborator 4 - tema 2\main.cpp"
<<

# Object files for target labrator_4___tema_2
labrator_4___tema_2_OBJECTS = \
"CMakeFiles\labrator_4___tema_2.dir\main.cpp.obj"

# External object files for target labrator_4___tema_2
labrator_4___tema_2_EXTERNAL_OBJECTS =

labrator_4___tema_2.exe: CMakeFiles\labrator_4___tema_2.dir\main.cpp.obj
labrator_4___tema_2.exe: CMakeFiles\labrator_4___tema_2.dir\build.make
labrator_4___tema_2.exe: CMakeFiles\labrator_4___tema_2.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Mike Wass\Desktop\Facultate\ASD\laborator 4 - tema 2\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable labrator_4___tema_2.exe"
	"C:\Users\Mike Wass\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\182.4892.24\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\labrator_4___tema_2.dir --manifests  -- "C:\PROGRA~2\Microsoft Visual Studio\2017\Enterprise\VC\Tools\MSVC\14.15.26726\bin\Hostx86\x86\link.exe" /nologo @CMakeFiles\labrator_4___tema_2.dir\objects1.rsp @<<
 /out:labrator_4___tema_2.exe /implib:labrator_4___tema_2.lib /pdb:"C:\Users\Mike Wass\Desktop\Facultate\ASD\laborator 4 - tema 2\cmake-build-debug\labrator_4___tema_2.pdb" /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\labrator_4___tema_2.dir\build: labrator_4___tema_2.exe

.PHONY : CMakeFiles\labrator_4___tema_2.dir\build

CMakeFiles\labrator_4___tema_2.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\labrator_4___tema_2.dir\cmake_clean.cmake
.PHONY : CMakeFiles\labrator_4___tema_2.dir\clean

CMakeFiles\labrator_4___tema_2.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" "C:\Users\Mike Wass\Desktop\Facultate\ASD\laborator 4 - tema 2" "C:\Users\Mike Wass\Desktop\Facultate\ASD\laborator 4 - tema 2" "C:\Users\Mike Wass\Desktop\Facultate\ASD\laborator 4 - tema 2\cmake-build-debug" "C:\Users\Mike Wass\Desktop\Facultate\ASD\laborator 4 - tema 2\cmake-build-debug" "C:\Users\Mike Wass\Desktop\Facultate\ASD\laborator 4 - tema 2\cmake-build-debug\CMakeFiles\labrator_4___tema_2.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles\labrator_4___tema_2.dir\depend

