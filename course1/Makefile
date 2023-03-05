#******************************************************************************
# Copyright (C) 2017 by Alex Fosdick - University of Colorado
#
# Redistribution, modification or use of this software in source or binary
# forms is permitted as long as the files maintain this copyright. Users are 
# permitted to modify this and use it to learn about the field of embedded
# software. Alex Fosdick and the University of Colorado are not liable for any
# misuse of this material. 
#
#*****************************************************************************

#------------------------------------------------------------------------------
# <Put a Description Here>
#
# Use: make [TARGET] [PLATFORM-OVERRIDES]
#
# Build Targets:
#      <Put a description of the supported targets here>
#
# Platform Overrides:
#      <Put a description of the supported Overrides here
#
#------------------------------------------------------------------------------
include sources.mk

# Platform Overrides
PLATFORM = HOST


# Architectures Specific Flags
LINKER_FILE = ../msp432p401r.lds
CPU = 
ARCH = 
SPECS = 

# Compiler Flags and Defines
# assign the compiler based on the platfor


LD = ld
LDFLAGS = -T $(LINKER_FILE)
INC_DIR = /home/collin/ese-coursera-course1/assessments/final_assessment/course1/include/common
CFLAGS = -Wall -Werror -g -O0 -std=c99 $(IFLAGS)

# architecture specific flags
ARM_FLAGS = -mcpu=cortex-m4 -mthumb -march=armv7e-m -mfloat-abi=hard -mfpu=fpv4-sp-d16 --specs=nosys.specs

# common include directories for both platforms
INC_BASE = /home/collin/ese-coursera-course1/assessments/final_assessment/course1/include
IFLAGS = -I$(INC_BASE)/common
ifeq ($(PLATFORM),HOST)
	CC = gcc
	CPPFLAGS = -DHOST
else
	# compiler
	CC = arm-none-eabi-gcc
	# set the defines
	CPPFLAGS = -DMSP432 
	#add the platform specific includes msp432 CMSIS
	IFLAGS = -I$(INC_BASE)/common -I$(INC_BASE)/msp432 -I$(INC_BASE)/CMSIS
	# compiling on ARM processor so add the ARM FLAGS
	CFLAGS := $(CFLAGS) $(ARM_FLAGS) $(LDFLAGS) 
	# add additional sources
	SOURCES:= $(SOURCES) \
		interrupts_msp432p401r_gcc.c \
		startup_msp432p401r_gcc.c \
		system_msp432p401r.c 
	
endif

# create a list of object files from SRCS
OBJS:=$(SOURCES:.c=.o)
IFILES:=$(SOURCES:.c=.i)
DEPFILES:=$(SOURCES:.c=.d)

# targets 
# compile and assemble , don't link
%.o : %.c
	$(CC) -c $(CFLAGS) $(CPPFLAGS) -o $@ $^ 
	
# create preprocessor file
%.i : %.c
	$(CC) -E $(CFLAGS) $(CPPFLAGS) -o $@ $^ 

c1m2.asm: c1m2.out
	objdump -d $^ > $@

# complile only , do not assemble or link
%.asm: %.c
	$(CC) -S $(CFLAGS) $(CPPFLAGS) -o $@ $^ 
	
# compile all and link to create final executable
# creates
#  - dependency files for .c
#  - size report for the.out 
#  - a map file which maps the memroy segments for the executable
.PHONY: build
build: $(OBJS)
	$(CC) $(CFLAGS) $(CPPFLAGS) -Xlinker -Map=c1m2.map -o c1m2.out $(OBJS)
	size c1m2.out
# compile all but don't linke
.PHONY: compile-all
compile-all: $(OBJS)
	
	

# remove all the build system output start again
.PHONY: clean
clean:
	rm -f *.o *.i *.asm *.dep c1m2.out c1m2.map
	
	
	




