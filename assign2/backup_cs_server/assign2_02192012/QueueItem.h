//File Name : QueueItem.h
//just setting or getting data memebers

#include<iostream>
#include<string>
using namespace std;


class QueueItem {
public:
    QueueItem(char *pData, int id); // ctor
    void setNext(QueueItem *pItem);
    QueueItem* getNext() const;
    int getId() const;
    const char* getData() const;

private:
    char _data[30];    // or, use a char* if you want to dynamically alloc memory 
    const int _itemId; // unique id for item in queue
    QueueItem* _pNext; // next item in queue
};

