// File Name : QueueItem.cpp


#include "QueueItem.h"

//Constructor Definition
QueueItem::QueueItem (char *pData=NULL,int id=0)
	:_itemId(id)
{
	_data = pData;
}

void QueueItem::setNext(QueueItem *pItem) {
	pItem->_pNext = 0;
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
