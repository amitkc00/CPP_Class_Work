CC=g++ -g
CFLAGS= -c -Wall

RunRolodex : Main.cpp Rolodex.o Card.o
	$(CC) Main.cpp Rolodex.o Card.o -o RunRolodex

Rolodex.o : Rolodex.cpp Rolodex.h Card.h
	$(CC) $(CFLAGS) Rolodex.cpp Rolodex.h Card.h

Card.o : Card.cpp Card.h
	$(CC) $(CFLAGS) Card.cpp Card.h
