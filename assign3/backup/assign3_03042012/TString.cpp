// -- TString.cpp source file --

#include "TString.h"

//DEFAULT CONSTRUCTOR
TString::TString(const char *pText) {
	mLength=sizeof(pText);	//try strlen if this doesn't work.
	mpText=new char[mLength+1];
	if(pText != 0)
		strcpy(mpText,pText);
	else
		smpText[0]='\0';
}

//COPY CONSTRUCTOR
TString::TString(TString& tString)
	:mLength(tString.mLength)
{
	mpText=new char[mLength+1];
	if(*this->mpText!=0)
		strcpy(tString,*this->mpText);
	else
		tString[0]='\0';
}

TString::~TString() {
	cout <<"Destructor Called";
	delete [] mpText;
}

TString::length() {
	return mLength;
}

TString::asChar() {
	return mpText;
}


TString::assign(string SObject) {
	if(SObject != this) {
		delete [] *this->mpText;
		mLength=SObject.mLength;
		mpText=new char[mLength+1];
		if(SObject->mpText!=0)
			strcpy(*this->mpText,SObject);
		else
			*this->mpText='\0';	
}

TString::assign(char *pText) {
	if(pText != this->mpText) {
		delete [] *this->mpText;
		mLength=sizeof(pText);
		mpText=new char[mLength+1];
		if(*pText!=0)
			strcpy(*this->mpText,pText);
		else
			*this->mpText='\0';	
}

TString::append(string SObject) {
	int newLength=mLength+sizeof(SObject);
	char* tempChar= new char[newLength];
	strcpy(tempChar,mpText);
	strcpy(tempChar+mLength,SObject);
	delete [] mpText;
	mpText=tempChar;
}


TString::equals(string SObject) {
	if(mpText==SObject)
		cout<<"They are Equal";
	else
		cout<<"They are not Equal";
}


TString::equalsIgnoreCase(string SObject) {
	if(mpText==SObject)
		cout<<"They are Equal";
	else
		cout<<"They are not Equal";
}


TString::equalsIgnoreCase(char CSearch) {
	for(int i=0;i++;i<mLength) {
		if(mpText[i]==CSearch)
			cout<<"Character Match Found";
		else
			cout<<"Character Match Not Found";
	}
}
