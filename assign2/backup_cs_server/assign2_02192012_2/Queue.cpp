//File Name : Queue.cpp
//Implementations of various queue operations.

#include "Queue.h"
#include "QueueItem.h"

void Queue::addItem(char *pData) 
{
	// dynamically create and init a new QueueItem object
	QueueItem *pItem = new QueueItem(pData, ++_itemCounter);
	
	if(_pHead==0) 
		_pHead = _pTail = pItem;
	else {
		temp = _pTail;
		temp->Next = pItem;
		pTail = pItem;
	}

	 setNext(pItem); //QueueItem Class member
}
		

void Queue::removeItem() {
	temp=_pHead;
	_pHead=_pHead->Next
	delete temp;
}

void Queue::print() {

getData() //QueueItem Class memeber


}

void Queue::erase() {

}

