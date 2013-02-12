// Overloading +,-,postfix(++,--),prefix(++,--),=,+=,-=,int casting.

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
		//RINT operator-(RINT a) ; //Binary Operator
		//RINT operator+(RINT a);  //Binary Operator

		//RINT operator-(); //Unary Operator
		//RINT operator+(); //Unary Operator
		
		friend	RINT operator-(RINT a,RINT b) ; //Binary Operator
		friend	RINT operator+(RINT a,RINT b) ; //Binary Operator
		//friend	RINT operator+(RINT a);  //Binary Operator
		//friend	RINT operator+(RINT a);  //Binary Operator
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


RINT operator-(RINT a,RINT b){
	int temp = a.num-b.num;
	return temp;
}

RINT operator+(RINT a,RINT b) {
	RINT temp = a.num+b.num;
	return temp;
}


/*

RINT RINT::operator-(RINT a){
	RINT temp = *this.num-a.num;
	return temp;
}

RINT RINT::operator+(RINT a) {
	RINT temp = num+a.num;
	return temp;
}

*/

/*
RINT RINT::operator-(){
	int temp = -num;
	return temp;
}

RINT RINT::operator+() {
	int temp = num;
	return temp;
}
*/
ostream& operator<<(ostream& output,RINT a) {
	int temp = a.num;
	output<<temp;
	return output;
}

istream& operator>>(istream& input,RINT& a) {
	int temp;
	input>>temp;
	a.num=temp;
	//input>>(*a).num;	
	
	return input;
}
#endif

