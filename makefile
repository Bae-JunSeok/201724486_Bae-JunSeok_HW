.SUFFIXES  = .c .o
OBJECTS = register.o print.o search.o delete.o phoneBookMain.o
CC = gcc
CFLAGS = -Wall -g -c

phoneBook : $(OBJECTS)
	$(CC) -o phoneBook $(OBJECTS)

%.o: %.c
	$(CC) $@ $(CFLAGS) $<

clean:
	rm -f $(OBJECTS)
