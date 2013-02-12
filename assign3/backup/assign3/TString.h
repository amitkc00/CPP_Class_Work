// Why Copy Constructor : Ref : http://www.learncpp.com/cpp-tutorial/911-the-copy-constructor-and-overloading-the-assignment-operator/
/*
The assignment operator is used to copy the values from one object to another already existing object. The key words here are “already existing”. Consider the following example:
1
2
3

Cents cMark(5); // calls Cents constructor
Cents cNancy; // calls Cents default constructor
cNancy = cMark; // calls Cents assignment operator

In this case, cNancy has already been created by the time the assignment is executed. Consequently, the Cents assignment operator is called. The assignment operator must be overloaded as a member function.

What happens if the object being copied into does not already exist? To understand what happens in that case, we need to talk about the copy constructor
*/
//When I started off this assignment and learnt the basic overview, I was like "Man, this is easy", but when I am stuck now in details, I am like "Dude I am screwed".

#include<iostream>
#include<cstring>
#include<string>
using namespace std;

#ifndef _TSTRING_H    // only include once in a compilation unit
#define _TSTRING_H

class TString { // Prefix with 'T' for uniqueness
public:
        //TString(const char *pText = 0); // default ctor
        TString(const char *pText); // default ctor
	TString(const TString& SObject) ; //Copy Constructor
        TString(); // default ctor
        ~TString(); //Destructor

        int length() const;

        char *asChar() const;

        //assign(string SObject);
        void assign(const TString& SObject);
        void assign(const char *pText);

        //append(string SObject);
        void append(const TString& SObject);

	//equals(string SObject);
        bool equals(const TString& SObject) const;

	//equalsIgnoreCase(string SObject);
	bool equalsIgnoreCase(const TString& SObject) const;

	//indexOf(char CSearch);
	int indexOf(const char CSearch) const;


private:
        int mLength; // length of char data (not including null byte)
        char *mpText; // pointer to dynamic char data in heap
          
};       
          
#endif   // _TSTRING_H

