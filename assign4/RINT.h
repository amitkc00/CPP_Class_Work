//FileName : 	RINT.h
//Author : 	Amit Choudhary
//Description :	Overloading +,-,postfix(++,--),prefix(++,--),=.

#include<iostream>
#include<string>

using namespace std;

#ifndef _RINT_H
#define _RINT_H

class RINT {

	friend ostream& operator<<(ostream&,RINT a);
	friend istream& operator>>(istream&,RINT& a);
	
	private:
		int num;	
	
	public:	
		RINT(int input=0) ;  	//Default Constructor
		void operator=(int a);   //Assignment Operator

		RINT operator-(); //Unary Operator
		RINT operator+(); //Unary Operator
		
		friend	RINT operator-(RINT a,RINT b) ; //Binary Operator
		friend	RINT operator+(RINT a,RINT b) ; //Binary Operator
};

//Default Constructor
RINT::RINT(int input) {
	num=input;
}

//Assignment Operator
void RINT::operator=(int a){
	//num=a.num;
	num=a;
	//return num;

}

//Friend '-' operator. Note it needs two arguments and not to be defined like RINT::operator- which I was doing earlier.
RINT operator-(RINT a,RINT b){
	int temp = a.num-b.num;
	return temp;
}

//Friend '+' operator.
RINT operator+(RINT a,RINT b) {
	RINT temp = a.num+b.num;
	return temp;
}

//Unary '-' operator.
RINT RINT::operator-(){
	int temp = -num;
	return temp;
}

//Unary '+' operator.
RINT RINT::operator+() {
	int temp = num;
	return temp; //Even if your temp is int, it is casted as RINT type when returned. So Dont worry.
}

//Stream Extraction Operator Overloading
ostream& operator<<(ostream& output,RINT a) {
	int temp = a.num;
	output<<temp;
	return output;
}

//Stream Insertion Operator Overloading
istream& operator>>(istream& input,RINT& a) {
	int temp;
	input>>temp;
	a.num=temp;
	return input;
}
#endif

