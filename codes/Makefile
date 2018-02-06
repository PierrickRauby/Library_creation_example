CC=gcc
MKFILE_PATH := $(abspath $(lastword $(MAKEFILE_LIST)))
CURRENT_DIR := $(notdir $(patsubst %/,%,$(dir $(MKFILE_PATH))))
PROJ_NAME=$(CURRENT_DIR)
INCLUDE_PATH=-I./include
LIB_PATH=-L./lib
SOURCES=$(wildcard *.c)
#TARGET= $(patsubst $(CURRENT_DIR)%,../../$(PROJ_NAME).a%,$(CURRENT_DIR))
TARGET= $(GEN_DIR)/$(PROJ_NAME)
#For the .o files
GEN_DIR=gen
#Final directory for the library
FINAL_DIR=  $(patsubst $(CURRENT_DIR)%,../../$(PROJ_NAME).a%,$(CURRENT_DIR))
#CFLAGS=
OBJECTS=$(patsubst %,$(GEN_DIR)/%,$(SOURCES:.c=.o))

all: $(TARGET)

$(TARGET): $(OBJECTS)
	@echo 'linking $(patsubst ../../%,%, $@) from .o files'
	$(CC) -v $^ -o $(TARGET) $(LIB_PATH) -ladd -lprod


#Creating the OBJECTS from C files
$(GEN_DIR)/%.o : $(SOURCES)
	mkdir -p $(GEN_DIR)
	@echo 'le chemin est $(INCLUDE_PATH)'
	$(CC) -c  $< $(INCLUDE_PATH) -o $@
#@echo 'La destination vaut $@'
#@echo 'FINAL_DIR vaut  $(FINAL_DIR)'

clean:
	rm -rf $(GEN_DIR)
	rm $(TARGET)

.PHONY: all clean
