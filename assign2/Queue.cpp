//File Name : Queue.cpp
//Implementations of various queue operations.
//Author : Amit Choudhary

#include "Queue.h"
#include "QueueItem.h"

Queue::Queue() {
	_pHead=0;
	_pTail=0;
	_itemCounter=0;
}

Queue::~Queue() {
	cout<<"\n********    Destructor Being Called.    *********\n";
	erase();
}

void Queue::addItem(const char *pData) {
	// dynamically create and init a new QueueItem object
	QueueItem *pItem = new QueueItem(pData, ++_itemCounter);
	cout<<"\n_itemCounter Value for "<<pData<<" is = "<<_itemCounter<<"\n";	

	if(_pHead==0 && _pTail==0) {
		_pHead = _pTail = pItem;
	}
	else { 
		_pTail->setNext(pItem);
		_pTail=pItem;
	}
}
		
void Queue::removeItem() {
	if (_pHead==0) 
		cout<<"\nEmpty Queue. No Elements to Remove\n";
	else {
		cout<<"\nRemoving "<<_pHead->getData()<<" from Head of Queue"<<"\n";
		QueueItem *temp = _pHead;
		_pHead = _pHead->getNext();
		delete temp;
	}
}
	
void Queue::print() {
	QueueItem *temp2 =_pHead;
	if(_pHead == 0) 
		cout<<"\nThere is no elements in the Queue to Print\n";
	else {
		cout<<"\nPrinting Elements of Queue\n";
		cout<<"--------------------------\n";
		while(temp2 != 0) {
			cout<<temp2->getData()<<"\n"; //QueueItem Class member
			temp2=temp2->getNext();
		}
	}
}

void Queue::erase() {
	cout<<"\nErasing All Elements of Queue\n";
	cout<<"-----------------------------\n";
	//while(_pHead != 0 && _pTail != 0) 
	while(_pHead != 0) 
		removeItem();
	_pTail=0;
}

