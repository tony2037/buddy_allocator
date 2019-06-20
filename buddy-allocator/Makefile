CC = gcc
CFLAGS = -g -O0 -Wall -DINTERCEPT

LIBS = 
OBJS = buddy-malloc.o main.o
TARGET = main

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@ 

buddy-malloc.o: buddy-malloc.c
	$(CC) $(CFLAGS) -c $< -o $@

main.o: main.c
	$(CC) $(CFLAGS) -c $< -o $@


.PHONY: clean
clean:
	$(RM) *.o $(TARGET)
