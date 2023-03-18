CXX = g++
CXXFLAGS = -fno-builtin -nostdlib -fno-rtti -fno-exceptions -std=c++0x

CC = gcc
CFLAGS =

AR = ar
ARFLAGS = rcs

CPP_SRCS = $(wildcard *.cpp)
C_SRCS = $(wildcard *.c)

CPP_OBJS = $(CPP_SRCS:.cpp=.o)
C_OBJS = $(C_SRCS:.c=.o)

LIB_NAME = Demo.a
EXEC_NAME = main

all: $(EXEC_NAME)

$(EXEC_NAME): $(LIB_NAME) $(C_OBJS)
	$(CC) $(C_OBJS) $(LIB_NAME) -lstdc++ -o $(EXEC_NAME)

$(LIB_NAME): $(CPP_OBJS)
	$(AR) $(ARFLAGS) $(LIB_NAME) $(CPP_OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	del /Q /F $(CPP_OBJS) $(C_OBJS) $(LIB_NAME) $(EXEC_NAME) 2>NUL

.PHONY: all clean
