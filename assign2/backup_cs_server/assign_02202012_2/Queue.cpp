//File Name : Queue.cpp
//Implementations of various queue operations.

#ifndef QUEUE_H
#define QUEUE_H
#endif

//#ifndef QUEUEITEM_H
//#define QUEUEITEM_H
//#endif

Queue::Queue() {
	_pHead=0;
	_pTail=0;
	_itemCounter=0;
}

Queue::~Queue() {
	erase();
}

void Queue::addItem(char *pData) {
	// dynamically create and init a new QueueItem object
	QueueItem *pItem = new QueueItem(pData, ++_itemCounter);
	
	if(_pHead==0) 
		_pHead = _pTail = pItem;
	else 
		setNext(pItem); //QueueItem Class member
}
		
void Queue::removeItem() {
	QueueItem *temp = _pHead;
	_pHead = _pHead.getNext();
	delete temp;
}
	
void Queue::print() {
	QueueItem *temp2=_pHead;
	while(temp2.getNext() != 0) {
		cout<<temp2.getData(); //QueueItem Class member
		temp2=temp2.getNext();
	}
}

void Queue::erase() {
	while(_pHead != 0 && _pTail != 0) 
		removeItem();
}
