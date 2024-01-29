#######################################################################
# REGISTRY
#
ifeq ($(FLS_ACCESS_FLAG), CFDF_ACCESS)
LIBRARIES_TO_BUILD +=
CC_FILES_TO_BUILD += \
    $(FCL_FDL_P1x_CORE_PATH)\src\r_fcl_hw_access.c \
    $(FCL_FDL_P1x_CORE_PATH)\src\r_fcl_user_if.c \
    $(FCL_FDL_P1x_CORE_PATH)\src\r_fdl_hw_access.c \
    $(FCL_FDL_P1x_CORE_PATH)\src\r_fdl_user_if.c \
    $(FCL_FDL_P1x_CORE_PATH)\src\fdl_descriptor.c \
	$(FCL_FDL_P1x_CORE_PATH)\src\fcl_descriptor.c \
    $(FCL_FDL_P1x_CORE_PATH)\src\r_fdl_user_if_init.c \

CPP_FILES_TO_BUILD  += \
    $(FCL_FDL_P1x_CORE_PATH)\src\r_fcl_hw_access.c \
    $(FCL_FDL_P1x_CORE_PATH)\src\r_fcl_user_if.c \
    $(FCL_FDL_P1x_CORE_PATH)\src\r_fdl_hw_access.c \
    $(FCL_FDL_P1x_CORE_PATH)\src\r_fdl_user_if.c \
    $(FCL_FDL_P1x_CORE_PATH)\src\fdl_descriptor.c \
	$(FCL_FDL_P1x_CORE_PATH)\src\fcl_descriptor.c \
    $(FCL_FDL_P1x_CORE_PATH)\src\r_fdl_user_if_init.c \

ASM_FILES_TO_BUILD  += \
$(FCL_FDL_P1x_CORE_PATH)\src\r_fcl_hw_access_asm.850
endif
ifeq ($(FLS_ACCESS_FLAG), DATAFLASH_ACCESS)
LIBRARIES_TO_BUILD +=
CC_FILES_TO_BUILD += \
    $(FCL_FDL_P1x_CORE_PATH)\src\r_fdl_hw_access.c \
    $(FCL_FDL_P1x_CORE_PATH)\src\r_fdl_user_if.c \
    $(FCL_FDL_P1x_CORE_PATH)\src\fdl_descriptor.c \
    $(FCL_FDL_P1x_CORE_PATH)\src\r_fdl_user_if_init.c

CPP_FILES_TO_BUILD  += \
    $(FCL_FDL_P1x_CORE_PATH)\src\r_fdl_hw_access.c \
    $(FCL_FDL_P1x_CORE_PATH)\src\r_fdl_user_if.c \
    $(FCL_FDL_P1x_CORE_PATH)\src\fdl_descriptor.c \
    $(FCL_FDL_P1x_CORE_PATH)\src\r_fdl_user_if_init.c 
endif
ifeq ($(FLS_ACCESS_FLAG), CODEFLASH_ACCESS)
LIBRARIES_TO_BUILD +=
CC_FILES_TO_BUILD += \
    $(FCL_FDL_P1x_CORE_PATH)\src\r_fcl_hw_access.c \
    $(FCL_FDL_P1x_CORE_PATH)\src\r_fcl_user_if.c \
    $(FCL_FDL_P1x_CORE_PATH)\src\fcl_descriptor.c \

CPP_FILES_TO_BUILD  += \
    $(FCL_FDL_P1x_CORE_PATH)\src\r_fcl_hw_access.c \
    $(FCL_FDL_P1x_CORE_PATH)\src\r_fcl_user_if.c \
    $(FCL_FDL_P1x_CORE_PATH)\src\fcl_descriptor.c \

ASM_FILES_TO_BUILD  += \
$(FCL_FDL_P1x_CORE_PATH)\src\r_fcl_hw_access_asm.850
endif
LIBRARIES_LINK_ONLY +=
OBJECTS_LINK_ONLY +=
GENERATED_SOURCE_FILES +=
MAKE_CLEAN_RULES +=
MAKE_GENERATE_RULES +=
MAKE_DEBUG_RULES += debug_fcl_fdl_P1x_makefile
MAKE_CONFIG_RULES +=

#######################################################################
# Command to print debug information                                  #
#######################################################################
debug_fcl_fdl_P1x_makefile:
	@echo FCL_FDL_P1x_CORE_PATH = $(FCL_FDL_P1x_CORE_PATH)
	@echo OBJ_FILE_SUFFIX = $(OBJ_FILE_SUFFIX)

#######################################################################
