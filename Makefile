CC = gcc
NAME = proof.c
OINC = ./includes/operators
DINC = ./includes/data_structures
SRCS = arithmetic_string_polymorphism.c 
OBJS = $(patsubst %.c, %.o, $(SRCS))
