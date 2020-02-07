# Copyright 1994-2018 The MathWorks, Inc.
#
# File    : raccel_unix.tmf   
#
# Abstract:
#	Template makefile for building a UNIX-based "rapid acceleration"
#       executable from the generated C code.
#
# 	This makefile attempts to conform to the guidelines specified in the
# 	IEEE Std 1003.2-1992 (POSIX) standard. It is designed to be used
#       with GNU Make which is located in matlabroot/rtw/bin.
#
# 	Note that this template is automatically customized by the build
#       procedure to create "<model>.mk"
#
#       The following defines can be used to modify the behavior of the
#	build:
#	  OPT_OPTS       - Optimization options. Default is -O.
#	  CPP_OPTS       - C++ compiler options.
#	  OPTS           - User specific compile options.
#	  USER_SRCS      - Additional user sources, such as files needed by
#			   S-functions.
#	  USER_INCLUDES  - Additional include paths
#			   (i.e. USER_INCLUDES="-Iwhere-ever -Iwhere-ever2")
#
#       To enable debugging:
#         set DEBUG_BUILD = 1 below, which will trigger OPTS=-g and
#          LDFLAGS += -g (may vary with compiler version, see compiler doc)
#
#       This template makefile is designed to be used with a system target
#       file that contains 'rtwgensettings.BuildDirSuffix' see raccel.tlc

#------------------------ Macros read by make_rtw ------------------------------
#
# The following macros are read by the build procedure:
#
#  MAKECMD         - This is the command used to invoke the make utility
#  HOST            - What platform this template makefile is targeted for
#                    (i.e. PC or UNIX)
#  BUILD           - Invoke make from the build procedure (yes/no)?
#  SYS_TARGET_FILE - Name of system target file.

MAKECMD         = /usr/local/MATLAB/R2019b/bin/glnxa64/gmake
HOST            = UNIX
BUILD           = yes
SYS_TARGET_FILE = raccel.tlc
BUILD_SUCCESS	= *** Created

# Opt in to simplified format by specifying compatible Toolchain
TOOLCHAIN_NAME = ["Clang v3.1 | gmake (64-bit Mac)", \
             "GNU gcc/g++ | gmake (64-bit Linux)"]

#---------------------- Tokens expanded by make_rtw ----------------------------
#
# The following tokens, when wrapped with "|>" and "<|" are expanded by the
# build procedure.
#
#  MODEL_NAME          - Name of the Simulink block diagram
#  MODEL_MODULES       - Any additional generated source modules
#  MAKEFILE_NAME       - Name of makefile created from template makefile <model>.mk
#  MATLAB_ROOT         - Path to where MATLAB is installed.
#  S_FUNCTIONS_LIB     - List of S-functions libraries to link.
#  COMPUTER            - Computer type. See the MATLAB computer command.
#  BUILDARGS           - Options passed in at the command line.
#  TGT_FCN_LIB         - Target function (code replacement) library to use


MODEL                  = Assembly1
MODULES                = Assembly1_3ef711a9_1.c Assembly1_3ef711a9_1_create.c Assembly1_3ef711a9_1_setParameters.c Assembly1_3ef711a9_1_asserts.c Assembly1_3ef711a9_1_deriv.c Assembly1_3ef711a9_1_checkDynamics.c Assembly1_3ef711a9_1_output.c Assembly1_3ef711a9_1_asm_delegate.c Assembly1_3ef711a9_1_sim_delegate.c Assembly1_3ef711a9_1_mode_zero_crossings.c Assembly1_3ef711a9_1_geometries.c Assembly1_3ef711a9_1_gateway.c pm_printf.c Assembly1_d7f0d859_1_ds.c Assembly1_d7f0d859_1_ds_zc.c Assembly1_d7f0d859_1_ds_obs_il.c Assembly1_d7f0d859_1_ds_obs_all.c Assembly1_d7f0d859_1_ds_obs_act.c Assembly1_d7f0d859_1_ds_obs_exp.c Assembly1_d7f0d859_1_ds_log.c Assembly1_d7f0d859_1_ds_dxf.c Assembly1_d7f0d859_1_ds_f.c Assembly1_d7f0d859_1.c Assembly1_d7f0d859_1_gateway.c Assembly1_aa69c5c5_1_ds.c Assembly1_aa69c5c5_1_ds_zc.c Assembly1_aa69c5c5_1_ds_obs_all.c Assembly1_aa69c5c5_1_ds_obs_act.c Assembly1_aa69c5c5_1_ds_log.c Assembly1_aa69c5c5_1_ds_dxf.c Assembly1_aa69c5c5_1_ds_f.c Assembly1_aa69c5c5_1.c Assembly1_aa69c5c5_1_gateway.c Assembly1_e38647b6_1_ds.c Assembly1_e38647b6_1_ds_zc.c Assembly1_e38647b6_1_ds_obs_all.c Assembly1_e38647b6_1_ds_obs_act.c Assembly1_e38647b6_1_ds_log.c Assembly1_e38647b6_1_ds_dxf.c Assembly1_e38647b6_1_ds_f.c Assembly1_e38647b6_1.c Assembly1_e38647b6_1_gateway.c rt_logging.c rt_backsubrr_dbl.c rt_forwardsubrr_dbl.c rt_lu_real.c rt_matrixlib_dbl.c Assembly1.c Assembly1_capi.c Assembly1_data.c Assembly1_tgtconn.c rtGetInf.c rtGetNaN.c rt_nonfinite.c rt_logging_mmi.c rtw_modelmap_utils.c raccel_main_new.c raccel_sup.c raccel_mat.c simulink_solver_api.c raccel_utils.c common_utils.c ext_svr.c updown.c ext_work.c rtiostream_interface.c rtiostream_tcpip.c rtiostream_utils.c
MAKEFILE               = Assembly1.mk
MATLAB_ROOT            = /usr/local/MATLAB/R2019b
ALT_MATLAB_ROOT        = /usr/local/MATLAB/R2019b
MATLAB_ROOTQ           = \"/usr/local/MATLAB/R2019b\"
MASTER_ANCHOR_DIR      = 
START_DIR              = /home/sydney/Desktop/matlab/simulink/SimpImpCheck
S_FUNCTIONS_LIB        = $(MATLAB_ROOT)/bin/glnxa64/libmwcoder_target_services.so $(MATLAB_ROOT)/bin/glnxa64/libmwcoder_ParamTuningTgtAppSvc.so
COMPUTER               = GLNXA64
BUILDARGS              =  RSIM_SOLVER_SELECTION=2 PCMATLABROOT="/usr/local/MATLAB/R2019b" EXTMODE_STATIC_ALLOC=0 EXTMODE_STATIC_ALLOC_SIZE=1000000 EXTMODE_TRANSPORT=0 TMW_EXTMODE_TESTING=0 COMBINE_OUTPUT_UPDATE_FCNS=0 INCLUDE_MDL_TERMINATE_FCN=1 MULTI_INSTANCE_CODE=0 MODELREF_TARGET_TYPE=NONE ISPROTECTINGMODEL=NOTPROTECTING OPTS="-DTGTCONN -DON_TARGET_WAIT_FOR_START=0"
RSIM_PARAMETER_LOADING = 1
ENABLE_SLEXEC_SSBRIDGE = 1


TGT_FCN_LIB         = ISO_C

MODELREFS           = 
OPTIMIZATION_FLAGS  = -O0 -fPIC
ADDITIONAL_LDFLAGS  = 
DEFINES_CUSTOM      = -DEXT_MODE -DIS_RAPID_ACCEL 
SYSTEM_LIBS         = -L"/usr/local/MATLAB/R2019b/bin/glnxa64" -lmwipp -lut -lmx -lmex -lmat -lmwmathutil -lmwslexec_simbridge -lmwsl_fileio -lmwsigstream -lmwsl_AsyncioQueue -lmwsl_services -lmwsdi_raccel -lmwi18n -lmwsl_simtarget_instrumentation -lfixedpoint -lmwslexec_simlog -lm -lpthread -ldl

MODEL_HAS_DYNAMICALLY_LOADED_SFCNS = 0

# To enable debugging:
# set DEBUG_BUILD = 1
DEBUG_BUILD             = 0


#--------------------------- Model and reference models -----------------------
MODELREF_LINK_LIBS        = 
RELATIVE_PATH_TO_ANCHOR   = ../../..
GLOBAL_TIMING_ENGINE      = 0

#-- In the case when directory name contains space ---
ifneq ($(MATLAB_ROOT),$(ALT_MATLAB_ROOT))
MATLAB_ROOT := $(ALT_MATLAB_ROOT)
endif

#--------------------------- Solver ---------------------------------------------
RSIM_WITH_SL_SOLVER = 1

#--------------------------- Tool Specifications -------------------------------

include $(MATLAB_ROOT)/rtw/c/tools/unixtools.mk

#------------------------------Parameter Tuning---------------------------------
PARAM_CC_OPTS = -DRSIM_PARAMETER_LOADING

#------------------------------ Include Path -----------------------------------

# Additional includes

ADD_INCLUDES = \
	-I$(START_DIR) \
	-I$(START_DIR)/slprj/raccel/Assembly1 \
	-I$(MATLAB_ROOT)/extern/include \
	-I$(MATLAB_ROOT)/simulink/include \
	-I$(MATLAB_ROOT)/rtw/c/src \
	-I$(MATLAB_ROOT)/rtw/c/src/rapid \
	-I$(MATLAB_ROOT)/rtw/c/raccel \
	-I$(MATLAB_ROOT)/rtw/c/src/ext_mode/common \
	-I$(MATLAB_ROOT)/toolbox/coder/rtiostream/src \
	-I$(MATLAB_ROOT)/toolbox/coder/rtiostream/src/rtiostreamtcpip \
	-I$(MATLAB_ROOT)/toolbox/coder/rtiostream/src/utils \
	-I$(MATLAB_ROOT)/toolbox/physmod/sm/ssci/c/glnxa64 \
	-I$(MATLAB_ROOT)/toolbox/physmod/sm/core/c/glnxa64 \
	-I$(MATLAB_ROOT)/toolbox/physmod/pm_math/c/glnxa64 \
	-I$(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/glnxa64 \
	-I$(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/glnxa64 \
	-I$(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/glnxa64 \
	-I$(MATLAB_ROOT)/toolbox/physmod/network_engine/c/glnxa64 \
	-I$(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/glnxa64 \
	-I$(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/glnxa64 \
	-I$(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/glnxa64 \
	-I$(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/glnxa64 \


INCLUDES = -I. -I$(RELATIVE_PATH_TO_ANCHOR) $(ADD_INCLUDES) $(USER_INCLUDES) \
	$(INSTRUMENT_INCLUDES)

#-------------------------------- C Flags --------------------------------------

# Optimization Options
ifndef OPT_OPTS
OPT_OPTS = $(DEFAULT_OPT_OPTS)
endif

# General User Options
ifeq ($(DEBUG_BUILD),0)
DBG_FLAG =
else
#   Set OPTS=-g and any additional flags for debugging
DBG_FLAG = -g
LDFLAGS += -g
endif

# Compiler options, etc:
ifneq ($(OPTIMIZATION_FLAGS),)
CC_OPTS = $(OPTS)  $(PARAM_CC_OPTS) $(OPTIMIZATION_FLAGS)
else
CC_OPTS = $(OPT_OPTS) $(OPTS)  $(PARAM_CC_OPTS)
endif

CPP_REQ_DEFINES = -DMODEL=$(MODEL) -DHAVESTDIO -DUNIX

CPP_REQ_DEFINES += -DNRT \
                   -DRSIM_WITH_SL_SOLVER

ifneq ($(ENABLE_SLEXEC_SSBRIDGE), 0)
   CPP_REQ_DEFINES += -DENABLE_SLEXEC_SSBRIDGE=$(ENABLE_SLEXEC_SSBRIDGE)
endif

CPP_REQ_DEFINES += -DMODEL_HAS_DYNAMICALLY_LOADED_SFCNS=$(MODEL_HAS_DYNAMICALLY_LOADED_SFCNS)

CFLAGS = $(ANSI_OPTS) $(DBG_FLAG) $(CC_OPTS) $(DEFINES_CUSTOM) $(CPP_REQ_DEFINES) $(INCLUDES)
CPPFLAGS = $(CPP_ANSI_OPTS) $(DBG_FLAG) $(CPP_OPTS) $(CC_OPTS) $(DEFINES_CUSTOM) $(CPP_REQ_DEFINES) $(INCLUDES)

# g1593309
ifneq (,$(findstring MAC,$(COMPUTER)))
    GCC_WALL_FLAG += -Wno-invalid-source-encoding
endif

#----------------------------- Source Files ------------------------------------
USER_SRCS =
SRC_DEP =
PRODUCT            = $(MODEL)
BUILD_PRODUCT_TYPE = "executable"
REQ_SRCS = $(MODULES)

USER_OBJS       = $(addsuffix .o, $(basename $(USER_SRCS)))
LOCAL_USER_OBJS = $(notdir $(USER_OBJS))

SRCS = $(REQ_SRCS)

OBJS      = $(addsuffix .o, $(basename $(SRCS))) $(USER_OBJS)
LINK_OBJS = $(addsuffix .o, $(basename $(SRCS))) $(LOCAL_USER_OBJS)

#--------------------------- Link flags & libraries ----------------------------

LIBS =

ifeq ($(OPT_OPTS),$(DEFAULT_OPT_OPTS))
LIBS += $(MATLAB_ROOT)/toolbox/physmod/sm/ssci/lib/glnxa64/sm_ssci_std.a
else
LIBS += sm_ssci.a
endif

ifeq ($(OPT_OPTS),$(DEFAULT_OPT_OPTS))
LIBS += $(MATLAB_ROOT)/toolbox/physmod/sm/core/lib/glnxa64/sm_std.a
else
LIBS += sm.a
endif

ifeq ($(OPT_OPTS),$(DEFAULT_OPT_OPTS))
LIBS += $(MATLAB_ROOT)/toolbox/physmod/pm_math/lib/glnxa64/pm_math_std.a
else
LIBS += pm_math.a
endif

ifeq ($(OPT_OPTS),$(DEFAULT_OPT_OPTS))
LIBS += $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/lib/glnxa64/ssc_sli_std.a
else
LIBS += ssc_sli.a
endif

ifeq ($(OPT_OPTS),$(DEFAULT_OPT_OPTS))
LIBS += $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/lib/glnxa64/ssc_core_std.a
else
LIBS += ssc_core.a
endif

ifeq ($(OPT_OPTS),$(DEFAULT_OPT_OPTS))
LIBS += $(MATLAB_ROOT)/toolbox/physmod/network_engine/lib/glnxa64/ne_std.a
else
LIBS += ne.a
endif

ifeq ($(OPT_OPTS),$(DEFAULT_OPT_OPTS))
LIBS += $(MATLAB_ROOT)/toolbox/physmod/common/math/core/lib/glnxa64/mc_std.a
else
LIBS += mc.a
endif

ifeq ($(OPT_OPTS),$(DEFAULT_OPT_OPTS))
LIBS += $(MATLAB_ROOT)/toolbox/physmod/common/external/library/lib/glnxa64/ex_std.a
else
LIBS += ex.a
endif

ifeq ($(OPT_OPTS),$(DEFAULT_OPT_OPTS))
LIBS += $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/lib/glnxa64/pm_std.a
else
LIBS += pm.a
endif
 
LIBS += $(S_FUNCTIONS_LIB) $(INSTRUMENT_LIBS)

BINDIR = $(MATLAB_ROOT)/bin/$(ARCH)

ifneq (,$(findstring GLNX,$(COMPUTER)))
  LDFLAGS += -Wl,-rpath,$(MATLAB_ROOT)/sys/os/$(ARCH) -L$(MATLAB_ROOT)/sys/os/$(ARCH)
endif

ifneq (,$(findstring MAC,$(COMPUTER)))
  LDFLAGS += -Wl,-rpath,$(BINDIR) -Wl,-rpath,@executable_path -Wl,-rpath,@executable_path/$(RELATIVE_PATH_TO_ANCHOR) -L$(MATLAB_ROOT)/sys/os/$(ARCH)
endif

#--------------------------------- Rules ---------------------------------------

$(PRODUCT) : $(OBJS) $(LIBS)  $(MODELREF_LINK_LIBS)
	$(LD) $(LDFLAGS) -o $(PRODUCT) $(LINK_OBJS) $(MODELREF_LINK_LIBS) \
		$(LIBS) $(ADDITIONAL_LDFLAGS) $(SYSTEM_LIBS)
	@echo "$(BUILD_SUCCESS) $(BUILD_PRODUCT_TYPE): $@"

#-------------------------- Standard rules for building modules --------------

%.o : %.c
	$(CC) -c -o $(@F) $(CFLAGS) $(GCC_WALL_FLAG) "$<"

%.o : %.cpp
	$(CPP) -c $(CPPFLAGS)$(GCC_WALL_FLAG)  "$<"

%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.c
	$(CC) -c -o $(@F) $(CFLAGS) $(GCC_WALL_FLAG) "$<"

%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.cpp
	$(CPP) -c $(CPPFLAGS) $(GCC_WALL_FLAG) "$<"

%.o : $(MATLAB_ROOT)/toolbox/physmod/sm/ssci/c/glnxa64/%.c
	$(CC) -c $(CFLAGS) $(GCC_WALL_FLAG_MAX) "$<"

%.o : $(MATLAB_ROOT)/toolbox/physmod/sm/core/c/glnxa64/%.c
	$(CC) -c $(CFLAGS) $(GCC_WALL_FLAG_MAX) "$<"

%.o : $(MATLAB_ROOT)/toolbox/physmod/pm_math/c/glnxa64/%.c
	$(CC) -c $(CFLAGS) $(GCC_WALL_FLAG_MAX) "$<"

%.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/glnxa64/%.c
	$(CC) -c $(CFLAGS) $(GCC_WALL_FLAG_MAX) "$<"

%.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/glnxa64/%.c
	$(CC) -c $(CFLAGS) $(GCC_WALL_FLAG_MAX) "$<"

%.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/glnxa64/%.c
	$(CC) -c $(CFLAGS) $(GCC_WALL_FLAG_MAX) "$<"

%.o : $(MATLAB_ROOT)/toolbox/physmod/network_engine/c/glnxa64/%.c
	$(CC) -c $(CFLAGS) $(GCC_WALL_FLAG_MAX) "$<"

%.o : $(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/glnxa64/%.c
	$(CC) -c $(CFLAGS) $(GCC_WALL_FLAG_MAX) "$<"

%.o : $(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/glnxa64/%.c
	$(CC) -c $(CFLAGS) $(GCC_WALL_FLAG_MAX) "$<"

%.o : $(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/glnxa64/%.c
	$(CC) -c $(CFLAGS) $(GCC_WALL_FLAG_MAX) "$<"

%.o : $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/glnxa64/%.c
	$(CC) -c $(CFLAGS) $(GCC_WALL_FLAG_MAX) "$<"

%.o : $(MATLAB_ROOT)/rtw/c/src/%.c
	$(CC) -c $(CFLAGS) $(GCC_WALL_FLAG_MAX) "$<"

%.o : $(MATLAB_ROOT)/simulink/src/%.c
	$(CC) -c $(CFLAGS) $(GCC_WALL_FLAG_MAX) "$<"

%.o : $(MATLAB_ROOT)/rtw/c/src/ext_mode/common/%.c
	$(CC) -c $(CFLAGS) $(GCC_WALL_FLAG_MAX) "$<"

%.o : $(MATLAB_ROOT)/toolbox/coder/rtiostream/src/rtiostreamtcpip/%.c
	$(CC) -c $(CFLAGS) $(GCC_WALL_FLAG_MAX) "$<"

%.o : $(MATLAB_ROOT)/toolbox/coder/rtiostream/src/utils/%.c
	$(CC) -c $(CFLAGS) $(GCC_WALL_FLAG_MAX) "$<"

rt_logging.o : $(MATLAB_ROOT)/rtw/c/src/rt_logging.c
	$(CC) -c $(CFLAGS) $(GCC_WALL_FLAG_MAX) $(MATLAB_ROOT)/rtw/c/src/rt_logging.c

raccel_main_new.o : $(MATLAB_ROOT)/rtw/c/raccel/raccel_main_new.c
	$(CC) -c $(CFLAGS) $(GCC_WALL_FLAG_MAX) $(MATLAB_ROOT)/rtw/c/raccel/raccel_main_new.c

raccel_sup.o : $(MATLAB_ROOT)/rtw/c/raccel/raccel_sup.c
	$(CC) -c $(CFLAGS) $(GCC_WALL_FLAG_MAX) $(MATLAB_ROOT)/rtw/c/raccel/raccel_sup.c

raccel_mat.o : $(MATLAB_ROOT)/rtw/c/raccel/raccel_mat.c
	$(CC) -c $(CFLAGS) $(GCC_WALL_FLAG_MAX) $(MATLAB_ROOT)/rtw/c/raccel/raccel_mat.c

simulink_solver_api.o : $(MATLAB_ROOT)/simulink/include/simulink_solver_api.c
	$(CC) -c $(CFLAGS) $(GCC_WALL_FLAG_MAX) $(MATLAB_ROOT)/simulink/include/simulink_solver_api.c

raccel_utils.o : $(MATLAB_ROOT)/rtw/c/src/rapid/raccel_utils.c
	$(CC) -c $(CFLAGS) $(GCC_WALL_FLAG_MAX) $(MATLAB_ROOT)/rtw/c/src/rapid/raccel_utils.c

common_utils.o : $(MATLAB_ROOT)/rtw/c/src/rapid/common_utils.c
	$(CC) -c $(CFLAGS) $(GCC_WALL_FLAG_MAX) $(MATLAB_ROOT)/rtw/c/src/rapid/common_utils.c

ext_svr.o : $(MATLAB_ROOT)/rtw/c/src/ext_mode/common/ext_svr.c
	$(CC) -c $(CFLAGS) $(GCC_WALL_FLAG_MAX) $(MATLAB_ROOT)/rtw/c/src/ext_mode/common/ext_svr.c

updown.o : $(MATLAB_ROOT)/rtw/c/src/ext_mode/common/updown.c
	$(CC) -c $(CFLAGS) $(GCC_WALL_FLAG_MAX) $(MATLAB_ROOT)/rtw/c/src/ext_mode/common/updown.c

ext_work.o : $(MATLAB_ROOT)/rtw/c/src/ext_mode/common/ext_work.c
	$(CC) -c $(CFLAGS) $(GCC_WALL_FLAG_MAX) $(MATLAB_ROOT)/rtw/c/src/ext_mode/common/ext_work.c

rtiostream_interface.o : $(MATLAB_ROOT)/rtw/c/src/ext_mode/common/rtiostream_interface.c
	$(CC) -c $(CFLAGS) $(GCC_WALL_FLAG_MAX) $(MATLAB_ROOT)/rtw/c/src/ext_mode/common/rtiostream_interface.c

rtiostream_tcpip.o : $(MATLAB_ROOT)/toolbox/coder/rtiostream/src/rtiostreamtcpip/rtiostream_tcpip.c
	$(CC) -c $(CFLAGS) $(GCC_WALL_FLAG_MAX) $(MATLAB_ROOT)/toolbox/coder/rtiostream/src/rtiostreamtcpip/rtiostream_tcpip.c

rtiostream_utils.o : /usr/local/MATLAB/R2019b/toolbox/coder/rtiostream/src/utils/rtiostream_utils.c
	$(CC) -c $(CFLAGS) $(GCC_WALL_FLAG_MAX) /usr/local/MATLAB/R2019b/toolbox/coder/rtiostream/src/utils/rtiostream_utils.c




%.o : $(MATLAB_ROOT)/toolbox/physmod/sm/ssci/c/glnxa64/%.cpp
	$(CPP) -c $(CPPFLAGS) "$<"
%.o : $(MATLAB_ROOT)/toolbox/physmod/sm/core/c/glnxa64/%.cpp
	$(CPP) -c $(CPPFLAGS) "$<"
%.o : $(MATLAB_ROOT)/toolbox/physmod/pm_math/c/glnxa64/%.cpp
	$(CPP) -c $(CPPFLAGS) "$<"
%.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/glnxa64/%.cpp
	$(CPP) -c $(CPPFLAGS) "$<"
%.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/glnxa64/%.cpp
	$(CPP) -c $(CPPFLAGS) "$<"
%.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/glnxa64/%.cpp
	$(CPP) -c $(CPPFLAGS) "$<"
%.o : $(MATLAB_ROOT)/toolbox/physmod/network_engine/c/glnxa64/%.cpp
	$(CPP) -c $(CPPFLAGS) "$<"
%.o : $(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/glnxa64/%.cpp
	$(CPP) -c $(CPPFLAGS) "$<"
%.o : $(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/glnxa64/%.cpp
	$(CPP) -c $(CPPFLAGS) "$<"
%.o : $(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/glnxa64/%.cpp
	$(CPP) -c $(CPPFLAGS) "$<"
%.o : $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/glnxa64/%.cpp
	$(CPP) -c $(CPPFLAGS) "$<"
%.o : $(MATLAB_ROOT)/rtw/c/src/%.cpp
	$(CPP) -c $(CPPFLAGS) "$<"
%.o : $(MATLAB_ROOT)/simulink/src/%.cpp
	$(CPP) -c $(CPPFLAGS) "$<"
%.o : $(MATLAB_ROOT)/rtw/c/src/ext_mode/common/%.cpp
	$(CPP) -c $(CPPFLAGS) "$<"
%.o : $(MATLAB_ROOT)/toolbox/coder/rtiostream/src/rtiostreamtcpip/%.cpp
	$(CPP) -c $(CPPFLAGS) "$<"
%.o : $(MATLAB_ROOT)/toolbox/coder/rtiostream/src/utils/%.cpp
	$(CPP) -c $(CPPFLAGS) "$<"


# Libraries:



MODULES_sm_ssci = \
    sm_ssci_3dd14f0a.o \
    sm_ssci_646478c5.o \
    sm_ssci_916e6db1.o \
    sm_ssci_b2b6b422.o \
    sm_ssci_c16a187b.o \


sm_ssci.a : $(MAKEFILE) rtw_proj.tmw \
				$(MODULES_sm_ssci)
	$(AR) rs $@ $(MODULES_sm_ssci)

MODULES_sm = \
    sm_1ade6722.o \
    sm_1dba7276.o \
    sm_1e022f29.o \
    sm_2567b5ea.o \
    sm_26df822b.o \
    sm_346a6262.o \
    sm_3c02344f.o \
    sm_440126a7.o \
    sm_45dc522c.o \
    sm_5763bdb7.o \
    sm_6166f1eb.o \
    sm_62d41fb5.o \
    sm_67d72683.o \
    sm_6fbd150d.o \
    sm_71b23225.o \
    sm_73d210b9.o \
    sm_7a6fe4d7.o \
    sm_8bba0509.o \
    sm_916806b3.o \
    sm_9abcb56e.o \
    sm_a0028316.o \
    sm_a264a430.o \
    sm_aa059a3a.o \
    sm_acba2496.o \
    sm_badd8656.o \
    sm_bc63e36c.o \
    sm_bfda6e42.o \
    sm_c0ba649d.o \
    sm_c160a102.o \
    sm_c60cd1fd.o \
    sm_c7d3720c.o \
    sm_c7d6c0d7.o \
    sm_cabca465.o \
    sm_d3d79f0f.o \
    sm_d3d946fd.o \
    sm_e2bea5a2.o \
    sm_e8bab6d7.o \
    sm_efdfa66e.o \


sm.a : $(MAKEFILE) rtw_proj.tmw \
				$(MODULES_sm)
	$(AR) rs $@ $(MODULES_sm)

MODULES_pm_math = \
    pm_math_1966ea7d.o \
    pm_math_1ad202b7.o \
    pm_math_1c69d5b2.o \
    pm_math_2cdd2951.o \
    pm_math_3463da5d.o \
    pm_math_360e4b46.o \
    pm_math_48bd51fb.o \
    pm_math_500a14cd.o \
    pm_math_5a01dda4.o \
    pm_math_646fa971.o \
    pm_math_8d05b7c0.o \
    pm_math_a001e9ec.o \
    pm_math_b7b980b1.o \
    pm_math_bad43c87.o \
    pm_math_d1be0f30.o \
    pm_math_da630bd2.o \
    pm_math_f760e8f6.o \


pm_math.a : $(MAKEFILE) rtw_proj.tmw \
				$(MODULES_pm_math)
	$(AR) rs $@ $(MODULES_pm_math)

MODULES_ssc_sli = \
    ssc_sli_0763c151.o \
    ssc_sli_0bd269e6.o \
    ssc_sli_0d6d0780.o \
    ssc_sli_136b443c.o \
    ssc_sli_140b3534.o \
    ssc_sli_15d5f6ce.o \
    ssc_sli_1db813e8.o \
    ssc_sli_2bbd58a4.o \
    ssc_sli_2f6ea1cd.o \
    ssc_sli_360cfd63.o \
    ssc_sli_43618287.o \
    ssc_sli_466b08dd.o \
    ssc_sli_496799bd.o \
    ssc_sli_4e028390.o \
    ssc_sli_51dbd3b5.o \
    ssc_sli_550a4805.o \
    ssc_sli_5a0cb974.o \
    ssc_sli_5d63aeeb.o \
    ssc_sli_62d81790.o \
    ssc_sli_77063d8b.o \
    ssc_sli_7a618260.o \
    ssc_sli_880e593a.o \
    ssc_sli_89d0f30a.o \
    ssc_sli_8a64c4e2.o \
    ssc_sli_93019ea6.o \
    ssc_sli_9abcdb7f.o \
    ssc_sli_9b67747c.o \
    ssc_sli_9c030181.o \
    ssc_sli_c7dda239.o \
    ssc_sli_d064c978.o \
    ssc_sli_d80c44d2.o \
    ssc_sli_dcd66f69.o \
    ssc_sli_e66fe6d5.o \
    ssc_sli_e7b327bb.o \
    ssc_sli_eb0a5702.o \
    ssc_sli_f6bd9cc8.o \
    ssc_sli_f9b5dbc5.o \
    ssc_sli_fa0ce53e.o \
    ssc_sli_fbdf29da.o \


ssc_sli.a : $(MAKEFILE) rtw_proj.tmw \
				$(MODULES_ssc_sli)
	$(AR) rs $@ $(MODULES_ssc_sli)

MODULES_ssc_core = \
    ssc_core_01dcc633.o \
    ssc_core_04da2c69.o \
    ssc_core_05058dd9.o \
    ssc_core_06ba68a6.o \
    ssc_core_09b5fa6e.o \
    ssc_core_0bd666aa.o \
    ssc_core_0f019bd9.o \
    ssc_core_0f0420a6.o \
    ssc_core_18bf4d77.o \
    ssc_core_1b0cafd5.o \
    ssc_core_1c6b0332.o \
    ssc_core_1fd25120.o \
    ssc_core_24b4cdee.o \
    ssc_core_2568b075.o \
    ssc_core_280c0222.o \
    ssc_core_2cd54448.o \
    ssc_core_3169e4b7.o \
    ssc_core_360a4baf.o \
    ssc_core_37d4ea84.o \
    ssc_core_40dfdbdc.o \
    ssc_core_41017299.o \
    ssc_core_4666b45b.o \
    ssc_core_48b08af1.o \
    ssc_core_48b1386a.o \
    ssc_core_4965213d.o \
    ssc_core_4ad9135b.o \
    ssc_core_4db6bd68.o \
    ssc_core_4db86fcc.o \
    ssc_core_4e03e39d.o \
    ssc_core_4e04eecd.o \
    ssc_core_54d55ae9.o \
    ssc_core_5505224d.o \
    ssc_core_56b1a2bf.o \
    ssc_core_576cd129.o \
    ssc_core_59b034b8.o \
    ssc_core_5d6ba758.o \
    ssc_core_67d1f118.o \
    ssc_core_68da074b.o \
    ssc_core_6b6b89d2.o \
    ssc_core_6dd833f3.o \
    ssc_core_73d9c2b7.o \
    ssc_core_76d825be.o \
    ssc_core_79dd08ab.o \
    ssc_core_7a613edb.o \
    ssc_core_83db8762.o \
    ssc_core_856738f2.o \
    ssc_core_8569edc5.o \
    ssc_core_89d7fa79.o \
    ssc_core_8a6471dc.o \
    ssc_core_8d0064b8.o \
    ssc_core_96061071.o \
    ssc_core_97d767fe.o \
    ssc_core_990fe1a4.o \
    ssc_core_9b607b15.o \
    ssc_core_9c016445.o \
    ssc_core_9c01d168.o \
    ssc_core_9dd110ad.o \
    ssc_core_9fb0e229.o \
    ssc_core_9fb25b4f.o \
    ssc_core_a1d393be.o \
    ssc_core_a4d4c45e.o \
    ssc_core_a4da1d0a.o \
    ssc_core_a6b78ccc.o \
    ssc_core_a76299bc.o \
    ssc_core_a867d880.o \
    ssc_core_a9bf1ff2.o \
    ssc_core_abd05c18.o \
    ssc_core_abd5e7b4.o \
    ssc_core_acb64294.o \
    ssc_core_acb6462e.o \
    ssc_core_b1038cbb.o \
    ssc_core_b10e34f4.o \
    ssc_core_b2b3b239.o \
    ssc_core_b402b40d.o \
    ssc_core_b7b88213.o \
    ssc_core_b96ebc21.o \
    ssc_core_bc648043.o \
    ssc_core_c3003040.o \
    ssc_core_c5b050d7.o \
    ssc_core_c5b63cb2.o \
    ssc_core_c607b660.o \
    ssc_core_c8d83e88.o \
    ssc_core_cab615c8.o \
    ssc_core_cabdc251.o \
    ssc_core_cc067f58.o \
    ssc_core_ce6a84bb.o \
    ssc_core_d06d763c.o \
    ssc_core_d3d34d7c.o \
    ssc_core_d70a6a09.o \
    ssc_core_d807fa59.o \
    ssc_core_dcda6edd.o \
    ssc_core_deb7fd8d.o \
    ssc_core_e0d0866d.o \
    ssc_core_e2b61d72.o \
    ssc_core_e400c1c2.o \
    ssc_core_ead8f455.o \
    ssc_core_ee000fbe.o \
    ssc_core_ee01086d.o \
    ssc_core_ee0f0141.o \
    ssc_core_f9b6dbed.o \
    ssc_core_fa09e9e6.o \
    ssc_core_fbd34e62.o \
    ssc_core_ff06d9a4.o \


ssc_core.a : $(MAKEFILE) rtw_proj.tmw \
				$(MODULES_ssc_core)
	$(AR) rs $@ $(MODULES_ssc_core)

MODULES_ne = \
    ne_59b4e14a.o \


ne.a : $(MAKEFILE) rtw_proj.tmw \
				$(MODULES_ne)
	$(AR) rs $@ $(MODULES_ne)

MODULES_mc = \
    mc_026e4f4b.o \
    mc_03b98f6f.o \
    mc_0764157d.o \
    mc_0bd30dee.o \
    mc_0d6fd085.o \
    mc_0ed73c49.o \
    mc_10d4ab75.o \
    mc_11086079.o \
    mc_110e6c6c.o \
    mc_140e3c4c.o \
    mc_15d12d95.o \
    mc_15d828ca.o \
    mc_220ba961.o \
    mc_2565d6e0.o \
    mc_2a642f54.o \
    mc_2a6a9b24.o \
    mc_2bbf87e3.o \
    mc_2cdc96b4.o \
    mc_32d501e3.o \
    mc_32dc008a.o \
    mc_3b6a945d.o \
    mc_3e66abdf.o \
    mc_4105189f.o \
    mc_47b8cebe.o \
    mc_47b91db1.o \
    mc_4b0301c6.o \
    mc_4c6117e3.o \
    mc_51d4094e.o \
    mc_52623861.o \
    mc_52688a58.o \
    mc_53b1fc84.o \
    mc_550847c3.o \
    mc_5766048f.o \
    mc_59b6e413.o \
    mc_5d65cd86.o \
    mc_5edd42ef.o \
    mc_630208f8.o \
    mc_630dda0e.o \
    mc_67da200d.o \
    mc_67da4f41.o \
    mc_6b6d311a.o \
    mc_6e61d16c.o \
    mc_6fb1c336.o \
    mc_7809a65c.o \
    mc_7a613aec.o \
    mc_7bbf41f0.o \
    mc_7cd58f0b.o \
    mc_7cdbe436.o \
    mc_7d0547c8.o \
    mc_7d099de7.o \
    mc_7eb21b39.o \
    mc_81b0ada5.o \
    mc_81b5717e.o \
    mc_870ec75e.o \
    mc_89d597cf.o \
    mc_90b6aa0a.o \
    mc_95b62b73.o \
    mc_9ab7d9b0.o \
    mc_9b6376d1.o \
    mc_9b6c1529.o \
    mc_a2647600.o \
    mc_a26bab1a.o \
    mc_a3b90582.o \
    mc_a865d1dd.o \
    mc_acb3fad7.o \
    mc_af0cc4c9.o \
    mc_b0de9cbc.o \
    mc_b362c5eb.o \
    mc_b7b03d44.o \
    mc_b96a0bad.o \
    mc_bb0520ee.o \
    mc_bdbb9b78.o \
    mc_c2dbf4b2.o \
    mc_c8d25d23.o \
    mc_cab8a1f9.o \
    mc_ce6656ce.o \
    mc_d20085b7.o \
    mc_d9d38185.o \
    mc_dbbb14d2.o \
    mc_dcdddfae.o \
    mc_debb448f.o \
    mc_e7bc2f1a.o \
    mc_e969ae87.o \
    mc_edbf543c.o \
    mc_ee000fbe.o \
    mc_efdea3a7.o \
    mc_f3be157c.o \
    mc_fcb15a9b.o \
    mc_fd619d14.o \
    mc_fd6341bb.o \


mc.a : $(MAKEFILE) rtw_proj.tmw \
				$(MODULES_mc)
	$(AR) rs $@ $(MODULES_mc)

MODULES_ex = \
    ex_04d5441d.o \
    ex_136645f8.o \
    ex_17bc61ac.o \
    ex_18b4440a.o \
    ex_2ebcd5b2.o \
    ex_316a81de.o \
    ex_40d5be33.o \
    ex_47b11894.o \
    ex_690b7cd0.o \
    ex_79d100f1.o \
    ex_8a6fc761.o \
    ex_b2b40ad5.o \
    ex_bb0efd4b.o \
    ex_debffef2.o \
    ex_e40d74b8.o \
    ex_f866102d.o \


ex.a : $(MAKEFILE) rtw_proj.tmw \
				$(MODULES_ex)
	$(AR) rs $@ $(MODULES_ex)

MODULES_pm = \
    pm_09bc42e2.o \
    pm_14098e54.o \
    pm_26dc3230.o \
    pm_4fd5f5b9.o \
    pm_fed8c2c9.o \


pm.a : $(MAKEFILE) rtw_proj.tmw \
				$(MODULES_pm)
	$(AR) rs $@ $(MODULES_pm)



#----------------------------- Dependencies ------------------------------------

$(OBJS) : $(MAKEFILE) rtw_proj.tmw

