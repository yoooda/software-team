# Wind River Workbench generated Makefile.
# Do not edit!!!
#
# The file ".wrmakefile" is the template used by the Wind River Workbench to
# generate the makefiles of this project. Add user-specific build targets and
# make rules only(!) in this project's ".wrmakefile" file. These will then be
# automatically dumped into the makefiles.

WIND_HOME := $(subst \,/,$(WIND_HOME))
WIND_BASE := $(subst \,/,$(WIND_BASE))
WIND_USR := $(subst \,/,$(WIND_USR))
WRVX_COMPBASE := $(subst \,/,$(WRVX_COMPBASE))

all : pre_build main_all post_build

_clean ::
	@echo "make: removing targets and objects of `pwd`"

TRACE=0
TRACEON=$(TRACE:0=@)
TRACE_FLAG=$(TRACEON:1=)

MAKEFILE := Makefile

FLEXIBLE_BUILD := 1

BUILD_SPEC = PPC32diab
DEBUG_MODE = 1
ifeq ($(DEBUG_MODE),1)
MODE_DIR := Debug
else
MODE_DIR := NonDebug
endif
OBJ_DIR := .
WS_ROOT_DIR := C:/WindRiver/workspace
PRJ_ROOT_DIR := $(WS_ROOT_DIR)/mico



#Global Build Macros
PROJECT_TYPE = DKM
DEFINES = 
EXPAND_DBG = 0


#BuildSpec specific Build Macros
VX_CPU_FAMILY = ppc
CPU = PPC32
TOOL_FAMILY = diab
TOOL = diab
TOOL_PATH = 
CC_ARCH_SPEC = -tPPCFH:vxworks63 -Xstmw-slow -DPPC32_fp60x
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = 

IDE_DEFINES = 



#BuildTool flags
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
DEBUGFLAGS_C++-Compiler = -g
DEBUGFLAGS_Linker = -g
DEBUGFLAGS_Partial-Image-Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_C-Compiler = -XO -Xsize-opt
DEBUGFLAGS_C++-Compiler = -XO -Xsize-opt
DEBUGFLAGS_Linker = -XO -Xsize-opt
DEBUGFLAGS_Partial-Image-Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler = -XO -Xsize-opt
endif


#Project Targets
PROJECT_TARGETS = mico/$(MODE_DIR)/mico.out \
	 mico_partialImage/$(MODE_DIR)/mico_partialImage.o


#Rules

# mico
ifeq ($(DEBUG_MODE),1)
mico/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
mico/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
mico/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
mico/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
mico/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
mico/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
mico/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -XO -Xsize-opt
mico/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -XO -Xsize-opt
mico/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -XO -Xsize-opt
mico/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
mico/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
mico/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -XO -Xsize-opt
endif
mico/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip 
mico/$(MODE_DIR)/% : IDE_LIBRARIES = 
mico/$(MODE_DIR)/% : IDE_DEFINES = 
mico/$(MODE_DIR)/% : PROJECT_TYPE = DKM
mico/$(MODE_DIR)/% : DEFINES = 
mico/$(MODE_DIR)/% : EXPAND_DBG = 0
mico/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
mico/$(MODE_DIR)/% : CPU = PPC32
mico/$(MODE_DIR)/% : TOOL_FAMILY = diab
mico/$(MODE_DIR)/% : TOOL = diab
mico/$(MODE_DIR)/% : TOOL_PATH = 
mico/$(MODE_DIR)/% : CC_ARCH_SPEC = -tPPCFH:vxworks63 -Xstmw-slow -DPPC32_fp60x
mico/$(MODE_DIR)/% : LIBPATH = 
mico/$(MODE_DIR)/% : LIBS = 
mico/$(MODE_DIR)/% : OBJ_DIR := mico/$(MODE_DIR)

OBJECTS_mico = mico_partialImage/$(MODE_DIR)/mico_partialImage.o

mico/$(MODE_DIR)/mico.out : $(OBJECTS_mico)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@";rm -f "$@";ddump -Ng $(OBJECTS_mico) $(IDE_LIBRARIES) | tclsh $(WIND_BASE)/host/resource/hutils/tcl/munch.tcl -c ppc > $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)dcc $(DEBUGFLAGS_Linker) $(CC_ARCH_SPEC) -Xdollar-in-ident -Xforce-declarations $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES)  -o $(OBJ_DIR)/ctdt.o -c $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)dld -tPPCFH:vxworks63 -X -r5 -r4 -o "$@" $(OBJ_DIR)/ctdt.o $(OBJECTS_mico) $(IDE_LIBRARIES) $(LIBPATH) $(LIBS)  $(ADDED_LIBPATH) $(ADDED_LIBS) && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

mico/$(MODE_DIR)/mico_compile_file : $(FILE) ;

_clean :: mico/$(MODE_DIR)/mico_clean

mico/$(MODE_DIR)/mico_clean : 
	$(TRACE_FLAG)if [ -d "mico" ]; then cd "mico"; rm -rf $(MODE_DIR); fi


# mico_partialImage
ifeq ($(DEBUG_MODE),1)
mico_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
mico_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
mico_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
mico_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
mico_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
mico_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
mico_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -XO -Xsize-opt
mico_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -XO -Xsize-opt
mico_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -XO -Xsize-opt
mico_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
mico_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
mico_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -XO -Xsize-opt
endif
mico_partialImage/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip 
mico_partialImage/$(MODE_DIR)/% : IDE_LIBRARIES = 
mico_partialImage/$(MODE_DIR)/% : IDE_DEFINES = 
mico_partialImage/$(MODE_DIR)/% : PROJECT_TYPE = DKM
mico_partialImage/$(MODE_DIR)/% : DEFINES = 
mico_partialImage/$(MODE_DIR)/% : EXPAND_DBG = 0
mico_partialImage/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
mico_partialImage/$(MODE_DIR)/% : CPU = PPC32
mico_partialImage/$(MODE_DIR)/% : TOOL_FAMILY = diab
mico_partialImage/$(MODE_DIR)/% : TOOL = diab
mico_partialImage/$(MODE_DIR)/% : TOOL_PATH = 
mico_partialImage/$(MODE_DIR)/% : CC_ARCH_SPEC = -tPPCFH:vxworks63 -Xstmw-slow -DPPC32_fp60x
mico_partialImage/$(MODE_DIR)/% : LIBPATH = 
mico_partialImage/$(MODE_DIR)/% : LIBS = 
mico_partialImage/$(MODE_DIR)/% : OBJ_DIR := mico_partialImage/$(MODE_DIR)

mico_partialImage/$(MODE_DIR)/Objects/mico/MyPIDOut.o : $(PRJ_ROOT_DIR)/MyPIDOut.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


mico_partialImage/$(MODE_DIR)/Objects/mico/MyRobot.o : $(PRJ_ROOT_DIR)/MyRobot.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


OBJECTS_mico_partialImage = mico_partialImage/$(MODE_DIR)/Objects/mico/MyPIDOut.o \
	 mico_partialImage/$(MODE_DIR)/Objects/mico/MyRobot.o

mico_partialImage/$(MODE_DIR)/mico_partialImage.o : $(OBJECTS_mico_partialImage)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dld -tPPCFH:vxworks63 -X -r5  -o "$@" $(OBJECTS_mico_partialImage) $(LIBPATH) $(LIBS) $(ADDED_LIBPATH) $(ADDED_LIBS)  && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

mico_partialImage/$(MODE_DIR)/mico_partialImage_compile_file : $(FILE) ;

_clean :: mico_partialImage/$(MODE_DIR)/mico_partialImage_clean

mico_partialImage/$(MODE_DIR)/mico_partialImage_clean : 
	$(TRACE_FLAG)if [ -d "mico_partialImage" ]; then cd "mico_partialImage"; rm -rf $(MODE_DIR); fi

force : 

DEP_FILES := mico_partialImage/$(MODE_DIR)/Objects/mico/MyPIDOut.d mico_partialImage/$(MODE_DIR)/Objects/mico/MyRobot.d
-include $(DEP_FILES)



-include $(PRJ_ROOT_DIR)/*.makefile

-include *.makefile

JOBS?=1
ifeq ($(JOBS),1)
main_all : external_build  $(PROJECT_TARGETS)
	@echo "make: built targets of `pwd`"
else
main_all : external_build 
	@$(MAKE) -f $(MAKEFILE) --jobs $(JOBS) $(MFLAGS) $(PROJECT_TARGETS);\
	echo "make: built targets of `pwd`"
endif 

# entry point for extending the build
external_build ::
	@echo ""

# main entry point for pre processing prior to the build
pre_build :: $(PRE_BUILD_STEP) generate_sources
	@echo ""

# entry point for generating sources prior to the build
generate_sources ::
	@echo ""

# main entry point for post processing after the build
post_build :: $(POST_BUILD_STEP) deploy_output
	@echo ""

# entry point for deploying output after the build
deploy_output ::
	@echo ""

clean :: external_clean $(CLEAN_STEP) _clean

# entry point for extending the build clean
external_clean ::
	@echo ""
