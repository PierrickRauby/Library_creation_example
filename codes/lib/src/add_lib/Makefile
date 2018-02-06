CC=gcc
MKFILE_PATH := $(abspath $(lastword $(MAKEFILE_LIST)))
CURRENT_DIR := $(notdir $(patsubst %/,%,$(dir $(MKFILE_PATH))))
PROJ_NAME=$(CURRENT_DIR)
SOURCES=$(wildcard *.c)
TARGET= $(GEN_DIR)/$(PROJ_NAME).a
GEN_DIR=gen

#CFLAGS=

OBJECTS=$(patsubst %,$(GEN_DIR)/%,$(SOURCES:.c=.o))

INCLUDE=-I=../../include # the include_path maybe needed for the headers
all: $(TARGET)

$(TARGET): $(OBJECTS)
	echo 'compilling library files from .o files'
	ar -q  $(TARGET) $^ -o $(TARGET)


#Creating the OBJECTS from C files
$(GEN_DIR)/%.o : $(SOURCES)
	@echo 'LE NOM VAUT $(CURRENT_DIR)'
	@mkdir -p $(GEN_DIR)
	@echo 'Building file: $<'
	@$(CC) -c  $< $(INCLUDE) -o $@

clean:
	rm -rf $(GEN_DIR)

.PHONY: all clean
