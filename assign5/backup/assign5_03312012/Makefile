CC=g++
CFLAGS= -g -c -Wall

RunShape : Main.cpp Shape.h getShape.o Circle.o Square.o Rectangle.o
	$(CC) Main.cpp getShape.o Circle.o Square.o Rectangle.o -o RunShape

getShape.o : getShape.cpp Circle.h Square.h Rectangle.h Shape.h
	$(CC) $(CFLAGS) getShape.cpp Circle.h Square.h Rectangle.h Shape.h

Circle.o : Circle.cpp Circle.h
	$(CC) $(CFLAGS) Circle.cpp Circle.h

Square.o : Square.cpp Square.h
	$(CC) $(CFLAGS) Square.cpp Square.h

Rectangle.0 : Rectangle.cpp Rectangle.h
	$(CC) $(CFLAGS) Rectangle.cpp Rectangle.h
