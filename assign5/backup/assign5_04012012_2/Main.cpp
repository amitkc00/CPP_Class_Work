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
	while(1) {
		Shape_Object = getShape();
		if(Shape_Object == NULL)
			break ;//continue;
		Shape_Array[i]=Shape_Object;
		i++;
	};	

	cout<<"\nThe list of shapes entered...\n";
	for (int j=0;j<i;j++) {
		Shape_Object = Shape_Array[j];
		Line_IP=Shape_Object->toString();		
		cout<<Line_IP;
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


	cout<<"\nThe sorted list of shapes...\n";
	for (int j=0;j<i;j++) {
		Shape_Object = Shape_Array[j];
		Line_IP=Shape_Object->toString();		
		cout<<Line_IP;
	}

	return 0;
}
