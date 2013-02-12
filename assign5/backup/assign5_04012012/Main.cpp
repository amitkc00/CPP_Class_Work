// File Name : Main.cpp

#include "Shape.h"
using namespace std;

int main() {
	//Read Data File & Parse Elements to be read.

	Shape* Shape_Object;
	Shape* Shape_Array[100];
	string Line_IP;
	int i=0;
	ifstream input_file;

	Shape* getShape();
	do {
		Shape_Object = getShape();
		Shape_Array[i]=Shape_Object;
		i++;
	}while(Shape_Object != NULL);	

	cout<<"The list of shapes entered...";
	for (int j=0;j<i;j++) {
		Shape_Object = Shape_Array[j];
		Shape_Object->toString();		
	}


	//Sorting the Strings based on Area of Shape.
	for( int j = 0 ; j < i-1 ; j++ ) {
		for( int k = j ; k < i ; k++ ) {
			if (Shape_Array[j]->area()>(Shape_Array[k]->area())) {
				Shape* temp;
				temp = Shape_Array[j];
				Shape_Array[j]=Shape_Array[k];
				Shape_Array[k]=temp;	
			}
		}
	}


	cout<<"The sorted list of shapes...";
	for (int j=0;j<i;j++) {
		Shape_Object = Shape_Array[j];
		Shape_Object->toString();		
	}

	// MAIN CALLING THE DESTRUCTORS.
	//delete Shape_Array;

	return 0;
}