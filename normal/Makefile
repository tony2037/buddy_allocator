CC = gcc
CFLAGS = -g -O0 -Wall -DINTERCEPT

LIBS = 
OBJS = main.o
TARGET = main

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@ 

main.o: main.c
	$(CC) $(CFLAGS) -c $< -o $@


.PHONY: clean
clean:
	$(RM) *.o $(TARGET)
