#include "Shape.h"

using namespace std;

int main() {
	//Read Data File & Parse Elements to be read.

	Shape* Shape_Object;
	Shape* Shape_Array[100];
	string LINE;
	int i=0;
	fstream infile;

	Shape* getShape(string&);
	
	infile.open("./datafile");
	if(!infile) {
		cerr << "Unable to open Input File";
		return -1;
	}
	
	infile << "The line above is read successfully\n";

	while(!infile.eof()) {
		getline(infile,LINE);
		Shape_Object = getShape(LINE);
		Shape_Array[i]=Shape_Object;
		i++;
		cout<<LINE<<"\n";
	}	
	Shape_Array[i]=NULL;
	infile.close();

	cout<<"The list of shapes entered...";
	for (int j=0;j<i;j++) {
		Shape_Object = Shape_Array[j];
		(*Shape_Object).toString();		
	}


	//Sorting the Strings based on Area of Shape.
	for( int j = 0 ; j < i-1 ; j++ ) {
		for( int k = j ; k < i ; k++ ) {
			if ((*Shape_Array[j] ).area()>((*Shape_Array[k]).area())) {
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
		(*Shape_Object).toString();		
	}

	// MAIN CALLING THE DESTRUCTORS.
	delete Shape_Array;

	return 0;
}
