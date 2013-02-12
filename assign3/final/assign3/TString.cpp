// File Name 	: TString.cpp
// Author	: Amit Choudhary
// Description	: This file contains function definition for various members of class TString.


#include "TString.h"

//DEFAULT CONSTRUCTOR

//TString::TString(const char *pText="") // This is wrong. We dont initialize default values here.
TString::TString(const char *pText)
 {
	//mLength=sizeof(*pText)-1;
	if(pText!=0)
		mLength=strlen(pText); //Dont use sizeof. It is wrong.
	else
		mLength=0;

	mpText=new char[mLength+1]; //Add +1 told hold '\0'
	if(pText != 0) 			// Check if input string is NULL.
		strcpy(mpText,pText);
	else
		mpText[0]='\0';
}

//COPY CONSTRUCTOR
TString::TString(const TString& SObject)
	:mLength(SObject.mLength)
{
	mpText=new char[mLength+1];
	if(SObject.mpText!=0)
		strcpy(mpText,SObject.mpText);
	else
		mpText[0]='\0';
}

//DESTRUCTOR
TString::~TString() {
	cout <<"Destructor Called";
	delete [] mpText;
	//delete mLength;
}

//Return String Length
int TString::length() const {
	return mLength;
}


//Return String
char* TString::asChar() const {
	return mpText;
}

// Assign function. Function overloading.
void TString::assign(const TString& SObject) {
	if(SObject.mpText != mpText) { //Check for Self Assignment.
		delete [] mpText;
		mLength=SObject.mLength;
		mpText=new char[mLength+1];
		if(SObject.mpText!=0)
			strcpy(mpText,SObject.mpText);
		else
			mpText[0]='\0';	 //If SObject.mpText is NULL
	}
}

void TString::assign(const char *pText) {
	if(pText != mpText && pText !=0) {
		delete [] mpText;
		//mLength=sizeof(pText)-1;
		mLength=strlen(pText);
		mpText=new char[mLength+1];
		if(pText!=0)
			strcpy(mpText,pText);
		else
			mpText[0]='\0';	
	}
	if(pText==0) {
		
		delete [] mpText;
		mLength=0;
		mpText=new char[mLength+1];
		mpText[0]='\0';
	}
}


//Append Function.
void TString::append(const TString& SObject) {
	cout<<"\n Append "<<SObject.mpText<<" to "<<mpText<<"\n";
	int newLength=mLength+SObject.mLength;
	char* tempChar= new char[newLength+1];
	strcpy(tempChar,mpText);
	strcpy(tempChar+mLength,SObject.mpText); //Copy next string after mLength as memory is stored in sequence.
	delete [] mpText;
	mpText = new char[newLength+1];
	strcpy(mpText,tempChar);
	mLength=newLength;
	delete [] tempChar;
		
}


bool TString::equals(const TString& SObject) const {
	int i=0; int match=0;
	while(match==0 && i<=SObject.mLength) {
		if (mpText[i]!=SObject.mpText[i]) {
			match=1;
			cout<<"\nThey are not Equal\n";
			return false;
		}
		else
			i++;
	}
	
	cout<<"\nThey are Equal\n";
	return true;
}


//Convert each character to ASCII Value and compare the UPPER Case ASCII Value of both
bool TString::equalsIgnoreCase(const TString& SObject) const {
	int i=0; int match=0;
	while(match==0 && i<=SObject.mLength) {
		char MyChar1 = mpText[i];
		char MyChar2 = SObject.mpText[i];
		int MyAscii1 = static_cast<int>(MyChar1);
		int MyAscii2 = static_cast<int>(MyChar2);
		
		if(MyAscii1>=97 && MyAscii1<=122)
			MyAscii1=MyAscii1-32; 		//Change to UPPER CASE ASCII
		if(MyAscii2>=97 && MyAscii2<=122)
			MyAscii2=MyAscii2-32;		//Change to UPPER CASE ASCII
		if (MyAscii1!=MyAscii2) {
			match=1;
			cout<<"\nThey are not Equal\n";
			return false;
		}
		else
			i++;
	}
	cout<<"\nThey are Equal\n";
	return true;
		
}


int TString::indexOf(const char CSearch) const {
	int i=0;
	while(i<=mLength) {
		if(mpText[i]==CSearch) {
			cout<<"\nCharacter Match Found\n";
			return i;
		}
		i++;
	}
	
	cout<<"\nCharacter Match Not Found\n";
	return -1;
}
