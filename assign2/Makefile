CC=g++
CFLAGS= -g -c -Wall

RunQueue : main.cpp Queue.o QueueItem.o
	$(CC) main.cpp Queue.o QueueItem.o -o RunQueue

Queue.o : Queue.cpp Queue.h QueueItem.h
	$(CC) $(CFLAGS) Queue.cpp Queue.h QueueItem.h

QueueItem.o : QueueItem.cpp QueueItem.h
	$(CC) $(CFLAGS) QueueItem.cpp QueueItem.h
