# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


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

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.2.4\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\Study\SkillBox\16 les\speedometer"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\Study\SkillBox\16 les\speedometer\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles\speedometer.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\speedometer.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\speedometer.dir\flags.make

CMakeFiles\speedometer.dir\main.cpp.obj: CMakeFiles\speedometer.dir\flags.make
CMakeFiles\speedometer.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\Study\SkillBox\16 les\speedometer\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/speedometer.dir/main.cpp.obj"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\speedometer.dir\main.cpp.obj /FdCMakeFiles\speedometer.dir\ /FS -c "D:\Study\SkillBox\16 les\speedometer\main.cpp"
<<

CMakeFiles\speedometer.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/speedometer.dir/main.cpp.i"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\cl.exe > CMakeFiles\speedometer.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\Study\SkillBox\16 les\speedometer\main.cpp"
<<

CMakeFiles\speedometer.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/speedometer.dir/main.cpp.s"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\speedometer.dir\main.cpp.s /c "D:\Study\SkillBox\16 les\speedometer\main.cpp"
<<

# Object files for target speedometer
speedometer_OBJECTS = \
"CMakeFiles\speedometer.dir\main.cpp.obj"

# External object files for target speedometer
speedometer_EXTERNAL_OBJECTS =

speedometer.exe: CMakeFiles\speedometer.dir\main.cpp.obj
speedometer.exe: CMakeFiles\speedometer.dir\build.make
speedometer.exe: CMakeFiles\speedometer.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\Study\SkillBox\16 les\speedometer\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable speedometer.exe"
	"C:\Program Files\JetBrains\CLion 2020.2.4\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\speedometer.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\mt.exe --manifests  -- C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\speedometer.dir\objects1.rsp @<<
 /out:speedometer.exe /implib:speedometer.lib /pdb:"D:\Study\SkillBox\16 les\speedometer\cmake-build-debug\speedometer.pdb" /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\speedometer.dir\build: speedometer.exe

.PHONY : CMakeFiles\speedometer.dir\build

CMakeFiles\speedometer.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\speedometer.dir\cmake_clean.cmake
.PHONY : CMakeFiles\speedometer.dir\clean

CMakeFiles\speedometer.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" "D:\Study\SkillBox\16 les\speedometer" "D:\Study\SkillBox\16 les\speedometer" "D:\Study\SkillBox\16 les\speedometer\cmake-build-debug" "D:\Study\SkillBox\16 les\speedometer\cmake-build-debug" "D:\Study\SkillBox\16 les\speedometer\cmake-build-debug\CMakeFiles\speedometer.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles\speedometer.dir\depend

