# Makefile for executable adjust

# *****************************************************
# Parameters to control Makefile operation

CC = gcc
CFLAGS = -pedantic -Wall -g

# ****************************************************
# Entries to bring the executable up to date

mysort: main.o helper.o
	$(CC) $(CFLAGS) -o mysort main.o helper.o 

main.o: main.c header.h
	$(CC) $(CFLAGS) -c main.c

helper.o: helper.c header.h
	$(CC) $(CFLAGS) -c helper.c 

clean: 
	rm *.o