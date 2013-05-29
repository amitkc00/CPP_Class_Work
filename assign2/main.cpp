//Main implementation
// Author : Amit Choudhary

#include "Queue.h"
#include "QueueItem.h"

int main() {
    Queue myQueue;

    myQueue.removeItem();
    myQueue.addItem("red");
    myQueue.addItem("green");
    myQueue.addItem("blue");
    myQueue.addItem("orange");
    myQueue.print();  // print contents of queue (item ID and data)
	myQueue.removeItem();
	myQueue.removeItem();
    myQueue.addItem("red2");
    myQueue.addItem("green2");
    myQueue.addItem("blue2");
    myQueue.addItem("orange2");
	myQueue.print();
	myQueue.removeItem();
	myQueue.removeItem();
	myQueue.removeItem();
	myQueue.removeItem();
	myQueue.print();
	myQueue.erase();
    myQueue.addItem("red3");
    myQueue.addItem("green3");
    myQueue.addItem("blue3");
	myQueue.print();
	myQueue.erase();
	myQueue.print();

}
