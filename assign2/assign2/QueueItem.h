//File Name : QueueItem.h
//Author : Amit Choudhary
//just setting or getting data memebers

#ifndef QUEUEITEM_H
#define QUEUEITEM_H

#include<iostream>
#include<string>
#include<cstring>

using namespace std;

class QueueItem {
public:
    QueueItem(const char *pData, int id); 	//ctor
    void setNext(QueueItem *pItem); 	//setNext sets your pointer to pointer to the next item in the queue.
    QueueItem* getNext() const; 	//getNext returns what the next item in the queue is.
    int getId() const; 			//getID returns the id of the queue item.
    const char* getData() const; 	//getData returns the data pointer.

private:
    //char _data[30];    // or, use a char* if you want to dynamically alloc memory 
    const char *_data;    // or, use a char* if you want to dynamically alloc memory 
    const int _itemId; // unique id for item in queue
    QueueItem* _pNext; // next item in queue
};

#endif
