# Makefile for writer.c

# Compiler and flags
CC := $(CROSS_COMPILE)gcc
CFLAGS := -Wall -Werror -g

# Targets and files
TARGET := writer
SRC := writer.c
OBJ := $(SRC:.c=.o)

.PHONY: all clean

# Default target
all: $(TARGET)

# Build target
$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

# Compile source files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean target
clean:
	rm -f $(TARGET) $(OBJ)

