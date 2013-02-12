CC=g++
CFLAGS=-c -Wall

RunQueue : Queue.o QueueItem.o
	$(CC) Queue.o QueueItem.o -o RunQueue

Queue.o : Queue.cpp Queue.h
	$(CC) $(CFLAGS) Queue.cpp Queue.h

QueueItem.o : QueueItem.cpp QueueItem.h
	$(CC) $(CFLAGS) QueueItem.cpp QueueItem.h
