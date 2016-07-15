##########################################
#           Editable options             #
##########################################

# Compiler options
CC=g++
CFLAGS=-c -Wall -O3 -std=c++11 
LDFLAGS=
EXECUTABLE_NAME=numberFunction

# Folders
SRC=src
BIN=bin
OBJ=$(BIN)/obj

# Files
SOURCE_FILES=\
    main.cpp \
    function.cpp

#########################################################
# MECHANIC PART #
#########################################################
EXECUTABLE_FILES = $(EXECUTABLE_NAME:%=$(BIN)/%)
OBJECT_FILES     = $(SOURCE_FILES:%.cpp=$(OBJ)/%.o)


build: $(EXECUTABLE_FILES)

clean:
	rm -r -f $(BIN)

.PHONY: build clean

$(EXECUTABLE_FILES): $(OBJECT_FILES)
	@$(CC) $(LDFLAGS) -o $@ $^
	@echo "Successfuly built."

$(OBJECT_FILES): $(OBJ)/%.o: %.cpp
	@echo Compiling $<
	
	@mkdir -p $(@D)
	@$(CC) $(CFLAGS) -o $@ $<
