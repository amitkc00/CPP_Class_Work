// File Name : QueueItem.cpp

#ifndef QUEUEITEM_H
#define QUEUEITEM_H

//Constructor Definition
QueueItem::QueueItem (char *pData=NULL,int id=0) {
	_itemId=id;
	_data = pData;
}

void QueueItem::setNext(QueueItem *pItem) {
	_pTail._pNext=pItem
	pItem._pNext=NULL;
	_pTail=pItem;
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

#endif
