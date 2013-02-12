// Overloading +,-,postfix(++,--),prefix(++,--),=,+=,-=,int casting.

#include<iostream>
#include<string>

using namespace std;

#ifndef _RINT_H
#define _RINT_H

class RINT {

	friend ostream& operator<<(ostream&,RINT a);
	friend istream& operator>>(istream&,RINT a);
	
	private:
		int num;	
	
	public:	
		RINT(int input=0) ;  	//Default Constructor
		void operator=(RINT a);   //Assignment Operator
		RINT operator-(RINT a) ; //Binary Operator
		RINT operator+(RINT a);  //Binary Operator

		RINT operator-(); //Unary Operator
		RINT operator+(); //Unary Operator
};

//Default Constructor
RINT::RINT(int input) {
	num=input;
}

//Assignment Operator
void RINT::operator=(RINT a){
	num=a.num;

}

RINT RINT::operator-(RINT a){
	int temp = num-a.num;
	return temp;
}

RINT RINT::operator+(RINT a) {
	int temp = num+a.num;
	return temp;
}

RINT RINT::operator-(){
	int temp = -num;
	return temp;
}

RINT RINT::operator+() {
	int temp = num;
	return temp;
}

ostream& operator<<(ostream& output,RINT a) {
	int temp = a.num;
	output<<temp;
	return output;
}

istream& operator>>(istream& input,RINT a) {
	int temp;
	input>>temp;
	a.num=temp;
	return input;
}
#endif

