// Overloading +,-,postfix(++,--),prefix(++,--),=,+=,-=,int casting.
// Reference : http://www.youtube.com/watch?v=Od2krfSwVdY

#include<iostream>
#include<string>

using namespace std;

#ifndef _INT_H
#define _INT_H

class INT {

	friend ostream& operator<<(ostream&,INT a);
	
	private:
		int num;	
	
	public:	
		INT(int input=0) ;  	//Default Constructor
		operator int(int temp=0);
		
/*

		INT operator-=(INT a); 
		INT operator+=(INT a);

		INT operator++(); 	//Prefix
		INT operator++(int i); 	//Postfix
		INT operator--(); 	//Prefix
		INT operator--(int i);  //Postfix

*/
};

//Default Constructor
INT::INT(int input) {
	num=input;
	//return *this;
}

INT::operator int(int temp) {
	num=temp;
	return num;;
}

/*

INT INT::operator-=(INT a){
	num=num-a.num;
	return *this;	
}

INT INT::operator+=(INT a) {
	num=num+a.num;
	return *this;
}

//Prefix
INT INT::operator++() {
	return ++num;
}

//Post-fix
INT INT::operator++(int i){
	return num++;
}

//Prefix
INT INT::operator--() {
	return --num;
}

//Postfix
INT INT::operator--(int i) {
	return num--;
}

ostream& operator<<(ostream& output,INT a) {
	int temp = a.num;
	output<<temp;
	return output;

}

*/

#endif

