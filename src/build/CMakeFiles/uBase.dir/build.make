# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.0

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/pedrecal/Documents/uBase/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/pedrecal/Documents/uBase/src/build

# Include any dependencies generated for this target.
include CMakeFiles/uBase.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/uBase.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/uBase.dir/flags.make

CMakeFiles/uBase.dir/main.c.o: CMakeFiles/uBase.dir/flags.make
CMakeFiles/uBase.dir/main.c.o: ../main.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/pedrecal/Documents/uBase/src/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/uBase.dir/main.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/uBase.dir/main.c.o   -c /home/pedrecal/Documents/uBase/src/main.c

CMakeFiles/uBase.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/uBase.dir/main.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/pedrecal/Documents/uBase/src/main.c > CMakeFiles/uBase.dir/main.c.i

CMakeFiles/uBase.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/uBase.dir/main.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/pedrecal/Documents/uBase/src/main.c -o CMakeFiles/uBase.dir/main.c.s

CMakeFiles/uBase.dir/main.c.o.requires:
.PHONY : CMakeFiles/uBase.dir/main.c.o.requires

CMakeFiles/uBase.dir/main.c.o.provides: CMakeFiles/uBase.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/uBase.dir/build.make CMakeFiles/uBase.dir/main.c.o.provides.build
.PHONY : CMakeFiles/uBase.dir/main.c.o.provides

CMakeFiles/uBase.dir/main.c.o.provides.build: CMakeFiles/uBase.dir/main.c.o

CMakeFiles/uBase.dir/help.c.o: CMakeFiles/uBase.dir/flags.make
CMakeFiles/uBase.dir/help.c.o: ../help.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/pedrecal/Documents/uBase/src/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/uBase.dir/help.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/uBase.dir/help.c.o   -c /home/pedrecal/Documents/uBase/src/help.c

CMakeFiles/uBase.dir/help.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/uBase.dir/help.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/pedrecal/Documents/uBase/src/help.c > CMakeFiles/uBase.dir/help.c.i

CMakeFiles/uBase.dir/help.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/uBase.dir/help.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/pedrecal/Documents/uBase/src/help.c -o CMakeFiles/uBase.dir/help.c.s

CMakeFiles/uBase.dir/help.c.o.requires:
.PHONY : CMakeFiles/uBase.dir/help.c.o.requires

CMakeFiles/uBase.dir/help.c.o.provides: CMakeFiles/uBase.dir/help.c.o.requires
	$(MAKE) -f CMakeFiles/uBase.dir/build.make CMakeFiles/uBase.dir/help.c.o.provides.build
.PHONY : CMakeFiles/uBase.dir/help.c.o.provides

CMakeFiles/uBase.dir/help.c.o.provides.build: CMakeFiles/uBase.dir/help.c.o

CMakeFiles/uBase.dir/interpretar.c.o: CMakeFiles/uBase.dir/flags.make
CMakeFiles/uBase.dir/interpretar.c.o: ../interpretar.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/pedrecal/Documents/uBase/src/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/uBase.dir/interpretar.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/uBase.dir/interpretar.c.o   -c /home/pedrecal/Documents/uBase/src/interpretar.c

CMakeFiles/uBase.dir/interpretar.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/uBase.dir/interpretar.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/pedrecal/Documents/uBase/src/interpretar.c > CMakeFiles/uBase.dir/interpretar.c.i

CMakeFiles/uBase.dir/interpretar.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/uBase.dir/interpretar.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/pedrecal/Documents/uBase/src/interpretar.c -o CMakeFiles/uBase.dir/interpretar.c.s

CMakeFiles/uBase.dir/interpretar.c.o.requires:
.PHONY : CMakeFiles/uBase.dir/interpretar.c.o.requires

CMakeFiles/uBase.dir/interpretar.c.o.provides: CMakeFiles/uBase.dir/interpretar.c.o.requires
	$(MAKE) -f CMakeFiles/uBase.dir/build.make CMakeFiles/uBase.dir/interpretar.c.o.provides.build
.PHONY : CMakeFiles/uBase.dir/interpretar.c.o.provides

CMakeFiles/uBase.dir/interpretar.c.o.provides.build: CMakeFiles/uBase.dir/interpretar.c.o

CMakeFiles/uBase.dir/criar.c.o: CMakeFiles/uBase.dir/flags.make
CMakeFiles/uBase.dir/criar.c.o: ../criar.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/pedrecal/Documents/uBase/src/build/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/uBase.dir/criar.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/uBase.dir/criar.c.o   -c /home/pedrecal/Documents/uBase/src/criar.c

CMakeFiles/uBase.dir/criar.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/uBase.dir/criar.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/pedrecal/Documents/uBase/src/criar.c > CMakeFiles/uBase.dir/criar.c.i

CMakeFiles/uBase.dir/criar.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/uBase.dir/criar.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/pedrecal/Documents/uBase/src/criar.c -o CMakeFiles/uBase.dir/criar.c.s

CMakeFiles/uBase.dir/criar.c.o.requires:
.PHONY : CMakeFiles/uBase.dir/criar.c.o.requires

CMakeFiles/uBase.dir/criar.c.o.provides: CMakeFiles/uBase.dir/criar.c.o.requires
	$(MAKE) -f CMakeFiles/uBase.dir/build.make CMakeFiles/uBase.dir/criar.c.o.provides.build
.PHONY : CMakeFiles/uBase.dir/criar.c.o.provides

CMakeFiles/uBase.dir/criar.c.o.provides.build: CMakeFiles/uBase.dir/criar.c.o

CMakeFiles/uBase.dir/remover.c.o: CMakeFiles/uBase.dir/flags.make
CMakeFiles/uBase.dir/remover.c.o: ../remover.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/pedrecal/Documents/uBase/src/build/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/uBase.dir/remover.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/uBase.dir/remover.c.o   -c /home/pedrecal/Documents/uBase/src/remover.c

CMakeFiles/uBase.dir/remover.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/uBase.dir/remover.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/pedrecal/Documents/uBase/src/remover.c > CMakeFiles/uBase.dir/remover.c.i

CMakeFiles/uBase.dir/remover.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/uBase.dir/remover.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/pedrecal/Documents/uBase/src/remover.c -o CMakeFiles/uBase.dir/remover.c.s

CMakeFiles/uBase.dir/remover.c.o.requires:
.PHONY : CMakeFiles/uBase.dir/remover.c.o.requires

CMakeFiles/uBase.dir/remover.c.o.provides: CMakeFiles/uBase.dir/remover.c.o.requires
	$(MAKE) -f CMakeFiles/uBase.dir/build.make CMakeFiles/uBase.dir/remover.c.o.provides.build
.PHONY : CMakeFiles/uBase.dir/remover.c.o.provides

CMakeFiles/uBase.dir/remover.c.o.provides.build: CMakeFiles/uBase.dir/remover.c.o

CMakeFiles/uBase.dir/ordenar.c.o: CMakeFiles/uBase.dir/flags.make
CMakeFiles/uBase.dir/ordenar.c.o: ../ordenar.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/pedrecal/Documents/uBase/src/build/CMakeFiles $(CMAKE_PROGRESS_6)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/uBase.dir/ordenar.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/uBase.dir/ordenar.c.o   -c /home/pedrecal/Documents/uBase/src/ordenar.c

CMakeFiles/uBase.dir/ordenar.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/uBase.dir/ordenar.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/pedrecal/Documents/uBase/src/ordenar.c > CMakeFiles/uBase.dir/ordenar.c.i

CMakeFiles/uBase.dir/ordenar.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/uBase.dir/ordenar.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/pedrecal/Documents/uBase/src/ordenar.c -o CMakeFiles/uBase.dir/ordenar.c.s

CMakeFiles/uBase.dir/ordenar.c.o.requires:
.PHONY : CMakeFiles/uBase.dir/ordenar.c.o.requires

CMakeFiles/uBase.dir/ordenar.c.o.provides: CMakeFiles/uBase.dir/ordenar.c.o.requires
	$(MAKE) -f CMakeFiles/uBase.dir/build.make CMakeFiles/uBase.dir/ordenar.c.o.provides.build
.PHONY : CMakeFiles/uBase.dir/ordenar.c.o.provides

CMakeFiles/uBase.dir/ordenar.c.o.provides.build: CMakeFiles/uBase.dir/ordenar.c.o

CMakeFiles/uBase.dir/compactar.c.o: CMakeFiles/uBase.dir/flags.make
CMakeFiles/uBase.dir/compactar.c.o: ../compactar.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/pedrecal/Documents/uBase/src/build/CMakeFiles $(CMAKE_PROGRESS_7)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/uBase.dir/compactar.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/uBase.dir/compactar.c.o   -c /home/pedrecal/Documents/uBase/src/compactar.c

CMakeFiles/uBase.dir/compactar.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/uBase.dir/compactar.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/pedrecal/Documents/uBase/src/compactar.c > CMakeFiles/uBase.dir/compactar.c.i

CMakeFiles/uBase.dir/compactar.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/uBase.dir/compactar.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/pedrecal/Documents/uBase/src/compactar.c -o CMakeFiles/uBase.dir/compactar.c.s

CMakeFiles/uBase.dir/compactar.c.o.requires:
.PHONY : CMakeFiles/uBase.dir/compactar.c.o.requires

CMakeFiles/uBase.dir/compactar.c.o.provides: CMakeFiles/uBase.dir/compactar.c.o.requires
	$(MAKE) -f CMakeFiles/uBase.dir/build.make CMakeFiles/uBase.dir/compactar.c.o.provides.build
.PHONY : CMakeFiles/uBase.dir/compactar.c.o.provides

CMakeFiles/uBase.dir/compactar.c.o.provides.build: CMakeFiles/uBase.dir/compactar.c.o

CMakeFiles/uBase.dir/descompactar.c.o: CMakeFiles/uBase.dir/flags.make
CMakeFiles/uBase.dir/descompactar.c.o: ../descompactar.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/pedrecal/Documents/uBase/src/build/CMakeFiles $(CMAKE_PROGRESS_8)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/uBase.dir/descompactar.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/uBase.dir/descompactar.c.o   -c /home/pedrecal/Documents/uBase/src/descompactar.c

CMakeFiles/uBase.dir/descompactar.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/uBase.dir/descompactar.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/pedrecal/Documents/uBase/src/descompactar.c > CMakeFiles/uBase.dir/descompactar.c.i

CMakeFiles/uBase.dir/descompactar.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/uBase.dir/descompactar.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/pedrecal/Documents/uBase/src/descompactar.c -o CMakeFiles/uBase.dir/descompactar.c.s

CMakeFiles/uBase.dir/descompactar.c.o.requires:
.PHONY : CMakeFiles/uBase.dir/descompactar.c.o.requires

CMakeFiles/uBase.dir/descompactar.c.o.provides: CMakeFiles/uBase.dir/descompactar.c.o.requires
	$(MAKE) -f CMakeFiles/uBase.dir/build.make CMakeFiles/uBase.dir/descompactar.c.o.provides.build
.PHONY : CMakeFiles/uBase.dir/descompactar.c.o.provides

CMakeFiles/uBase.dir/descompactar.c.o.provides.build: CMakeFiles/uBase.dir/descompactar.c.o

CMakeFiles/uBase.dir/bibliotecaRemover.c.o: CMakeFiles/uBase.dir/flags.make
CMakeFiles/uBase.dir/bibliotecaRemover.c.o: ../bibliotecaRemover.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/pedrecal/Documents/uBase/src/build/CMakeFiles $(CMAKE_PROGRESS_9)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/uBase.dir/bibliotecaRemover.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/uBase.dir/bibliotecaRemover.c.o   -c /home/pedrecal/Documents/uBase/src/bibliotecaRemover.c

CMakeFiles/uBase.dir/bibliotecaRemover.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/uBase.dir/bibliotecaRemover.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/pedrecal/Documents/uBase/src/bibliotecaRemover.c > CMakeFiles/uBase.dir/bibliotecaRemover.c.i

CMakeFiles/uBase.dir/bibliotecaRemover.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/uBase.dir/bibliotecaRemover.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/pedrecal/Documents/uBase/src/bibliotecaRemover.c -o CMakeFiles/uBase.dir/bibliotecaRemover.c.s

CMakeFiles/uBase.dir/bibliotecaRemover.c.o.requires:
.PHONY : CMakeFiles/uBase.dir/bibliotecaRemover.c.o.requires

CMakeFiles/uBase.dir/bibliotecaRemover.c.o.provides: CMakeFiles/uBase.dir/bibliotecaRemover.c.o.requires
	$(MAKE) -f CMakeFiles/uBase.dir/build.make CMakeFiles/uBase.dir/bibliotecaRemover.c.o.provides.build
.PHONY : CMakeFiles/uBase.dir/bibliotecaRemover.c.o.provides

CMakeFiles/uBase.dir/bibliotecaRemover.c.o.provides.build: CMakeFiles/uBase.dir/bibliotecaRemover.c.o

CMakeFiles/uBase.dir/bibliotecaAlocacao.c.o: CMakeFiles/uBase.dir/flags.make
CMakeFiles/uBase.dir/bibliotecaAlocacao.c.o: ../bibliotecaAlocacao.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/pedrecal/Documents/uBase/src/build/CMakeFiles $(CMAKE_PROGRESS_10)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/uBase.dir/bibliotecaAlocacao.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/uBase.dir/bibliotecaAlocacao.c.o   -c /home/pedrecal/Documents/uBase/src/bibliotecaAlocacao.c

CMakeFiles/uBase.dir/bibliotecaAlocacao.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/uBase.dir/bibliotecaAlocacao.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/pedrecal/Documents/uBase/src/bibliotecaAlocacao.c > CMakeFiles/uBase.dir/bibliotecaAlocacao.c.i

CMakeFiles/uBase.dir/bibliotecaAlocacao.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/uBase.dir/bibliotecaAlocacao.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/pedrecal/Documents/uBase/src/bibliotecaAlocacao.c -o CMakeFiles/uBase.dir/bibliotecaAlocacao.c.s

CMakeFiles/uBase.dir/bibliotecaAlocacao.c.o.requires:
.PHONY : CMakeFiles/uBase.dir/bibliotecaAlocacao.c.o.requires

CMakeFiles/uBase.dir/bibliotecaAlocacao.c.o.provides: CMakeFiles/uBase.dir/bibliotecaAlocacao.c.o.requires
	$(MAKE) -f CMakeFiles/uBase.dir/build.make CMakeFiles/uBase.dir/bibliotecaAlocacao.c.o.provides.build
.PHONY : CMakeFiles/uBase.dir/bibliotecaAlocacao.c.o.provides

CMakeFiles/uBase.dir/bibliotecaAlocacao.c.o.provides.build: CMakeFiles/uBase.dir/bibliotecaAlocacao.c.o

CMakeFiles/uBase.dir/bibliotecaStrings.c.o: CMakeFiles/uBase.dir/flags.make
CMakeFiles/uBase.dir/bibliotecaStrings.c.o: ../bibliotecaStrings.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/pedrecal/Documents/uBase/src/build/CMakeFiles $(CMAKE_PROGRESS_11)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/uBase.dir/bibliotecaStrings.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/uBase.dir/bibliotecaStrings.c.o   -c /home/pedrecal/Documents/uBase/src/bibliotecaStrings.c

CMakeFiles/uBase.dir/bibliotecaStrings.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/uBase.dir/bibliotecaStrings.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/pedrecal/Documents/uBase/src/bibliotecaStrings.c > CMakeFiles/uBase.dir/bibliotecaStrings.c.i

CMakeFiles/uBase.dir/bibliotecaStrings.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/uBase.dir/bibliotecaStrings.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/pedrecal/Documents/uBase/src/bibliotecaStrings.c -o CMakeFiles/uBase.dir/bibliotecaStrings.c.s

CMakeFiles/uBase.dir/bibliotecaStrings.c.o.requires:
.PHONY : CMakeFiles/uBase.dir/bibliotecaStrings.c.o.requires

CMakeFiles/uBase.dir/bibliotecaStrings.c.o.provides: CMakeFiles/uBase.dir/bibliotecaStrings.c.o.requires
	$(MAKE) -f CMakeFiles/uBase.dir/build.make CMakeFiles/uBase.dir/bibliotecaStrings.c.o.provides.build
.PHONY : CMakeFiles/uBase.dir/bibliotecaStrings.c.o.provides

CMakeFiles/uBase.dir/bibliotecaStrings.c.o.provides.build: CMakeFiles/uBase.dir/bibliotecaStrings.c.o

CMakeFiles/uBase.dir/bibliotecaOperacoes.c.o: CMakeFiles/uBase.dir/flags.make
CMakeFiles/uBase.dir/bibliotecaOperacoes.c.o: ../bibliotecaOperacoes.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/pedrecal/Documents/uBase/src/build/CMakeFiles $(CMAKE_PROGRESS_12)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/uBase.dir/bibliotecaOperacoes.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/uBase.dir/bibliotecaOperacoes.c.o   -c /home/pedrecal/Documents/uBase/src/bibliotecaOperacoes.c

CMakeFiles/uBase.dir/bibliotecaOperacoes.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/uBase.dir/bibliotecaOperacoes.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/pedrecal/Documents/uBase/src/bibliotecaOperacoes.c > CMakeFiles/uBase.dir/bibliotecaOperacoes.c.i

CMakeFiles/uBase.dir/bibliotecaOperacoes.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/uBase.dir/bibliotecaOperacoes.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/pedrecal/Documents/uBase/src/bibliotecaOperacoes.c -o CMakeFiles/uBase.dir/bibliotecaOperacoes.c.s

CMakeFiles/uBase.dir/bibliotecaOperacoes.c.o.requires:
.PHONY : CMakeFiles/uBase.dir/bibliotecaOperacoes.c.o.requires

CMakeFiles/uBase.dir/bibliotecaOperacoes.c.o.provides: CMakeFiles/uBase.dir/bibliotecaOperacoes.c.o.requires
	$(MAKE) -f CMakeFiles/uBase.dir/build.make CMakeFiles/uBase.dir/bibliotecaOperacoes.c.o.provides.build
.PHONY : CMakeFiles/uBase.dir/bibliotecaOperacoes.c.o.provides

CMakeFiles/uBase.dir/bibliotecaOperacoes.c.o.provides.build: CMakeFiles/uBase.dir/bibliotecaOperacoes.c.o

CMakeFiles/uBase.dir/bibliotecaCompactacao.c.o: CMakeFiles/uBase.dir/flags.make
CMakeFiles/uBase.dir/bibliotecaCompactacao.c.o: ../bibliotecaCompactacao.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/pedrecal/Documents/uBase/src/build/CMakeFiles $(CMAKE_PROGRESS_13)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/uBase.dir/bibliotecaCompactacao.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/uBase.dir/bibliotecaCompactacao.c.o   -c /home/pedrecal/Documents/uBase/src/bibliotecaCompactacao.c

CMakeFiles/uBase.dir/bibliotecaCompactacao.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/uBase.dir/bibliotecaCompactacao.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/pedrecal/Documents/uBase/src/bibliotecaCompactacao.c > CMakeFiles/uBase.dir/bibliotecaCompactacao.c.i

CMakeFiles/uBase.dir/bibliotecaCompactacao.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/uBase.dir/bibliotecaCompactacao.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/pedrecal/Documents/uBase/src/bibliotecaCompactacao.c -o CMakeFiles/uBase.dir/bibliotecaCompactacao.c.s

CMakeFiles/uBase.dir/bibliotecaCompactacao.c.o.requires:
.PHONY : CMakeFiles/uBase.dir/bibliotecaCompactacao.c.o.requires

CMakeFiles/uBase.dir/bibliotecaCompactacao.c.o.provides: CMakeFiles/uBase.dir/bibliotecaCompactacao.c.o.requires
	$(MAKE) -f CMakeFiles/uBase.dir/build.make CMakeFiles/uBase.dir/bibliotecaCompactacao.c.o.provides.build
.PHONY : CMakeFiles/uBase.dir/bibliotecaCompactacao.c.o.provides

CMakeFiles/uBase.dir/bibliotecaCompactacao.c.o.provides.build: CMakeFiles/uBase.dir/bibliotecaCompactacao.c.o

CMakeFiles/uBase.dir/bibliotecaDescompactacao.c.o: CMakeFiles/uBase.dir/flags.make
CMakeFiles/uBase.dir/bibliotecaDescompactacao.c.o: ../bibliotecaDescompactacao.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/pedrecal/Documents/uBase/src/build/CMakeFiles $(CMAKE_PROGRESS_14)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/uBase.dir/bibliotecaDescompactacao.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/uBase.dir/bibliotecaDescompactacao.c.o   -c /home/pedrecal/Documents/uBase/src/bibliotecaDescompactacao.c

CMakeFiles/uBase.dir/bibliotecaDescompactacao.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/uBase.dir/bibliotecaDescompactacao.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/pedrecal/Documents/uBase/src/bibliotecaDescompactacao.c > CMakeFiles/uBase.dir/bibliotecaDescompactacao.c.i

CMakeFiles/uBase.dir/bibliotecaDescompactacao.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/uBase.dir/bibliotecaDescompactacao.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/pedrecal/Documents/uBase/src/bibliotecaDescompactacao.c -o CMakeFiles/uBase.dir/bibliotecaDescompactacao.c.s

CMakeFiles/uBase.dir/bibliotecaDescompactacao.c.o.requires:
.PHONY : CMakeFiles/uBase.dir/bibliotecaDescompactacao.c.o.requires

CMakeFiles/uBase.dir/bibliotecaDescompactacao.c.o.provides: CMakeFiles/uBase.dir/bibliotecaDescompactacao.c.o.requires
	$(MAKE) -f CMakeFiles/uBase.dir/build.make CMakeFiles/uBase.dir/bibliotecaDescompactacao.c.o.provides.build
.PHONY : CMakeFiles/uBase.dir/bibliotecaDescompactacao.c.o.provides

CMakeFiles/uBase.dir/bibliotecaDescompactacao.c.o.provides.build: CMakeFiles/uBase.dir/bibliotecaDescompactacao.c.o

CMakeFiles/uBase.dir/bibliotecaCriar.c.o: CMakeFiles/uBase.dir/flags.make
CMakeFiles/uBase.dir/bibliotecaCriar.c.o: ../bibliotecaCriar.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/pedrecal/Documents/uBase/src/build/CMakeFiles $(CMAKE_PROGRESS_15)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/uBase.dir/bibliotecaCriar.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/uBase.dir/bibliotecaCriar.c.o   -c /home/pedrecal/Documents/uBase/src/bibliotecaCriar.c

CMakeFiles/uBase.dir/bibliotecaCriar.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/uBase.dir/bibliotecaCriar.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/pedrecal/Documents/uBase/src/bibliotecaCriar.c > CMakeFiles/uBase.dir/bibliotecaCriar.c.i

CMakeFiles/uBase.dir/bibliotecaCriar.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/uBase.dir/bibliotecaCriar.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/pedrecal/Documents/uBase/src/bibliotecaCriar.c -o CMakeFiles/uBase.dir/bibliotecaCriar.c.s

CMakeFiles/uBase.dir/bibliotecaCriar.c.o.requires:
.PHONY : CMakeFiles/uBase.dir/bibliotecaCriar.c.o.requires

CMakeFiles/uBase.dir/bibliotecaCriar.c.o.provides: CMakeFiles/uBase.dir/bibliotecaCriar.c.o.requires
	$(MAKE) -f CMakeFiles/uBase.dir/build.make CMakeFiles/uBase.dir/bibliotecaCriar.c.o.provides.build
.PHONY : CMakeFiles/uBase.dir/bibliotecaCriar.c.o.provides

CMakeFiles/uBase.dir/bibliotecaCriar.c.o.provides.build: CMakeFiles/uBase.dir/bibliotecaCriar.c.o

CMakeFiles/uBase.dir/susbtituicao.c.o: CMakeFiles/uBase.dir/flags.make
CMakeFiles/uBase.dir/susbtituicao.c.o: ../susbtituicao.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/pedrecal/Documents/uBase/src/build/CMakeFiles $(CMAKE_PROGRESS_16)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/uBase.dir/susbtituicao.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/uBase.dir/susbtituicao.c.o   -c /home/pedrecal/Documents/uBase/src/susbtituicao.c

CMakeFiles/uBase.dir/susbtituicao.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/uBase.dir/susbtituicao.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/pedrecal/Documents/uBase/src/susbtituicao.c > CMakeFiles/uBase.dir/susbtituicao.c.i

CMakeFiles/uBase.dir/susbtituicao.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/uBase.dir/susbtituicao.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/pedrecal/Documents/uBase/src/susbtituicao.c -o CMakeFiles/uBase.dir/susbtituicao.c.s

CMakeFiles/uBase.dir/susbtituicao.c.o.requires:
.PHONY : CMakeFiles/uBase.dir/susbtituicao.c.o.requires

CMakeFiles/uBase.dir/susbtituicao.c.o.provides: CMakeFiles/uBase.dir/susbtituicao.c.o.requires
	$(MAKE) -f CMakeFiles/uBase.dir/build.make CMakeFiles/uBase.dir/susbtituicao.c.o.provides.build
.PHONY : CMakeFiles/uBase.dir/susbtituicao.c.o.provides

CMakeFiles/uBase.dir/susbtituicao.c.o.provides.build: CMakeFiles/uBase.dir/susbtituicao.c.o

CMakeFiles/uBase.dir/selecaonatural.c.o: CMakeFiles/uBase.dir/flags.make
CMakeFiles/uBase.dir/selecaonatural.c.o: ../selecaonatural.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/pedrecal/Documents/uBase/src/build/CMakeFiles $(CMAKE_PROGRESS_17)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/uBase.dir/selecaonatural.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/uBase.dir/selecaonatural.c.o   -c /home/pedrecal/Documents/uBase/src/selecaonatural.c

CMakeFiles/uBase.dir/selecaonatural.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/uBase.dir/selecaonatural.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/pedrecal/Documents/uBase/src/selecaonatural.c > CMakeFiles/uBase.dir/selecaonatural.c.i

CMakeFiles/uBase.dir/selecaonatural.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/uBase.dir/selecaonatural.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/pedrecal/Documents/uBase/src/selecaonatural.c -o CMakeFiles/uBase.dir/selecaonatural.c.s

CMakeFiles/uBase.dir/selecaonatural.c.o.requires:
.PHONY : CMakeFiles/uBase.dir/selecaonatural.c.o.requires

CMakeFiles/uBase.dir/selecaonatural.c.o.provides: CMakeFiles/uBase.dir/selecaonatural.c.o.requires
	$(MAKE) -f CMakeFiles/uBase.dir/build.make CMakeFiles/uBase.dir/selecaonatural.c.o.provides.build
.PHONY : CMakeFiles/uBase.dir/selecaonatural.c.o.provides

CMakeFiles/uBase.dir/selecaonatural.c.o.provides.build: CMakeFiles/uBase.dir/selecaonatural.c.o

# Object files for target uBase
uBase_OBJECTS = \
"CMakeFiles/uBase.dir/main.c.o" \
"CMakeFiles/uBase.dir/help.c.o" \
"CMakeFiles/uBase.dir/interpretar.c.o" \
"CMakeFiles/uBase.dir/criar.c.o" \
"CMakeFiles/uBase.dir/remover.c.o" \
"CMakeFiles/uBase.dir/ordenar.c.o" \
"CMakeFiles/uBase.dir/compactar.c.o" \
"CMakeFiles/uBase.dir/descompactar.c.o" \
"CMakeFiles/uBase.dir/bibliotecaRemover.c.o" \
"CMakeFiles/uBase.dir/bibliotecaAlocacao.c.o" \
"CMakeFiles/uBase.dir/bibliotecaStrings.c.o" \
"CMakeFiles/uBase.dir/bibliotecaOperacoes.c.o" \
"CMakeFiles/uBase.dir/bibliotecaCompactacao.c.o" \
"CMakeFiles/uBase.dir/bibliotecaDescompactacao.c.o" \
"CMakeFiles/uBase.dir/bibliotecaCriar.c.o" \
"CMakeFiles/uBase.dir/susbtituicao.c.o" \
"CMakeFiles/uBase.dir/selecaonatural.c.o"

# External object files for target uBase
uBase_EXTERNAL_OBJECTS =

uBase: CMakeFiles/uBase.dir/main.c.o
uBase: CMakeFiles/uBase.dir/help.c.o
uBase: CMakeFiles/uBase.dir/interpretar.c.o
uBase: CMakeFiles/uBase.dir/criar.c.o
uBase: CMakeFiles/uBase.dir/remover.c.o
uBase: CMakeFiles/uBase.dir/ordenar.c.o
uBase: CMakeFiles/uBase.dir/compactar.c.o
uBase: CMakeFiles/uBase.dir/descompactar.c.o
uBase: CMakeFiles/uBase.dir/bibliotecaRemover.c.o
uBase: CMakeFiles/uBase.dir/bibliotecaAlocacao.c.o
uBase: CMakeFiles/uBase.dir/bibliotecaStrings.c.o
uBase: CMakeFiles/uBase.dir/bibliotecaOperacoes.c.o
uBase: CMakeFiles/uBase.dir/bibliotecaCompactacao.c.o
uBase: CMakeFiles/uBase.dir/bibliotecaDescompactacao.c.o
uBase: CMakeFiles/uBase.dir/bibliotecaCriar.c.o
uBase: CMakeFiles/uBase.dir/susbtituicao.c.o
uBase: CMakeFiles/uBase.dir/selecaonatural.c.o
uBase: CMakeFiles/uBase.dir/build.make
uBase: CMakeFiles/uBase.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking C executable uBase"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/uBase.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/uBase.dir/build: uBase
.PHONY : CMakeFiles/uBase.dir/build

CMakeFiles/uBase.dir/requires: CMakeFiles/uBase.dir/main.c.o.requires
CMakeFiles/uBase.dir/requires: CMakeFiles/uBase.dir/help.c.o.requires
CMakeFiles/uBase.dir/requires: CMakeFiles/uBase.dir/interpretar.c.o.requires
CMakeFiles/uBase.dir/requires: CMakeFiles/uBase.dir/criar.c.o.requires
CMakeFiles/uBase.dir/requires: CMakeFiles/uBase.dir/remover.c.o.requires
CMakeFiles/uBase.dir/requires: CMakeFiles/uBase.dir/ordenar.c.o.requires
CMakeFiles/uBase.dir/requires: CMakeFiles/uBase.dir/compactar.c.o.requires
CMakeFiles/uBase.dir/requires: CMakeFiles/uBase.dir/descompactar.c.o.requires
CMakeFiles/uBase.dir/requires: CMakeFiles/uBase.dir/bibliotecaRemover.c.o.requires
CMakeFiles/uBase.dir/requires: CMakeFiles/uBase.dir/bibliotecaAlocacao.c.o.requires
CMakeFiles/uBase.dir/requires: CMakeFiles/uBase.dir/bibliotecaStrings.c.o.requires
CMakeFiles/uBase.dir/requires: CMakeFiles/uBase.dir/bibliotecaOperacoes.c.o.requires
CMakeFiles/uBase.dir/requires: CMakeFiles/uBase.dir/bibliotecaCompactacao.c.o.requires
CMakeFiles/uBase.dir/requires: CMakeFiles/uBase.dir/bibliotecaDescompactacao.c.o.requires
CMakeFiles/uBase.dir/requires: CMakeFiles/uBase.dir/bibliotecaCriar.c.o.requires
CMakeFiles/uBase.dir/requires: CMakeFiles/uBase.dir/susbtituicao.c.o.requires
CMakeFiles/uBase.dir/requires: CMakeFiles/uBase.dir/selecaonatural.c.o.requires
.PHONY : CMakeFiles/uBase.dir/requires

CMakeFiles/uBase.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/uBase.dir/cmake_clean.cmake
.PHONY : CMakeFiles/uBase.dir/clean

CMakeFiles/uBase.dir/depend:
	cd /home/pedrecal/Documents/uBase/src/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pedrecal/Documents/uBase/src /home/pedrecal/Documents/uBase/src /home/pedrecal/Documents/uBase/src/build /home/pedrecal/Documents/uBase/src/build /home/pedrecal/Documents/uBase/src/build/CMakeFiles/uBase.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/uBase.dir/depend
