.SUFFIXES  = .c .o
OBJECTS = register.o print.o search.o delete.o phoneBookMain.o
CC = gcc
CFLAGS = -Wall -g

phoneBook : $(OBJECTS)
	$(CC) -o phoneBook $(OBJECTS)

%.o: %.c
	$(CC) -c -o $@ $(CFLAGS) $<

clean:
	rm -f $(OBJECTS) phoneBook
