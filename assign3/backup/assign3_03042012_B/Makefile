CC=g++
CFLAGS= -g -c -Wall

RunXString : XString1.cpp TString.o
	$(CC) XString1.cpp TString.o -o RunXString

TString.o : TString.cpp TString.h
	$(CC) $(CFLAGS) TString.cpp TString.h
