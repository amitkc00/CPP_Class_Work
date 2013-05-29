// File Name : QueueItem.cpp
// Author : Amit Choudhary


#include "QueueItem.h"

//Constructor Definition
QueueItem::QueueItem (const char *pData=NULL,int id=0)
	:_itemId(id)
{
	_data = pData;
	cout <<"\nAdding "<<pData<<" to Queue\n";
	_pNext=0;
}

void QueueItem::setNext(QueueItem *pItem) {
	_pNext = pItem;
	
}

QueueItem* QueueItem::getNext() const {
	return _pNext;
}

int QueueItem::getId() const {
	return _itemId;
}

const char* QueueItem::getData() const {
	return _data;
}
