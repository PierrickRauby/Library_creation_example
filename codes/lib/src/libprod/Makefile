CC=gcc
MKFILE_PATH := $(abspath $(lastword $(MAKEFILE_LIST)))
CURRENT_DIR := $(notdir $(patsubst %/,%,$(dir $(MKFILE_PATH))))
PROJ_NAME=$(CURRENT_DIR)
SOURCES=$(wildcard *.c)
TARGET= $(patsubst $(CURRENT_DIR)%,../../$(PROJ_NAME).a%,$(CURRENT_DIR))
#TARGET= $(GEN_DIR)/$(PROJ_NAME).a
#For the .o files
GEN_DIR=gen
#Final directory for the library
FINAL_DIR=  $(patsubst $(CURRENT_DIR)%,../../$(PROJ_NAME).a%,$(CURRENT_DIR))

#CFLAGS=

OBJECTS=$(patsubst %,$(GEN_DIR)/%,$(SOURCES:.c=.o))

INCLUDE=-I=../../include # the include_path maybe needed for the headers
all: $(TARGET)

$(TARGET): $(OBJECTS)
	@echo '–––––––––––––––––––––––––––'
	@echo '*** Building $(patsubst ../../%,%, $@) ***'
	@echo '–––––––––––––––––––––––––––'
	@echo 'compilling library $(patsubst ../../%, %, $@) from .o files'
	@ar -q  $(TARGET) $^ #-o $(TARGET)


#Creating the OBJECTS from C files
$(GEN_DIR)/%.o : $(SOURCES)
	@mkdir -p $(GEN_DIR)

	@$(CC) -c  $< $(INCLUDE) -o $@
# @echo 'La destination vaut $@'
# @echo 'FINAL_DIR vaut  $(FINAL_DIR)'

clean:
	rm -rf $(GEN_DIR)
	rm $(TARGET)

.PHONY: all clean
