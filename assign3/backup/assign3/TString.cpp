// -- TString.cpp source file --

#include "TString.h"

//DEFAULT CONSTRUCTOR
/*
TString::TString()
 {
	char *pText=NULL;
	mLength=sizeof(*pText)-1;
	cout<<"\nObject Length = "<<mLength<<"\n";
	mpText=new char[mLength+1];
	if(pText != 0)
		strcpy(mpText,pText);
	else
		mpText[0]='\0';
}
*/

TString::TString(const char *pText="")
 {
	mLength=sizeof(*pText)-1;
	cout<<"\nObject Length = "<<mLength<<"\n";
	mpText=new char[mLength+1];
	if(pText != 0)
		strcpy(mpText,pText);
	else
		mpText[0]='\0';
}

//COPY CONSTRUCTOR
TString::TString(const TString& SObject) //TString(const TString& Sobject)
	:mLength(SObject.mLength)
{
	mpText=new char[mLength+1];
	if(SObject.mpText!=0)
		strcpy(mpText,SObject.mpText);
	else
		mpText[0]='\0';
}

TString::~TString() {
	cout <<"Destructor Called";
	delete [] mpText;
	//delete mLength;
}

int TString::length() const {
	return mLength;
}

char* TString::asChar() const {
	return mpText;
}


void TString::assign(const TString& SObject) {
	if(SObject.mpText != mpText) { //Check for Self Assignment.
		delete [] mpText;
		mLength=SObject.mLength;
		mpText=new char[mLength+1];
		if(SObject.mpText!=0)
			strcpy(mpText,SObject.mpText);
		else
			mpText[0]='\0';	
	}
}

void TString::assign(const char *pText) {
	if(pText != mpText) {
		delete [] mpText;
		mLength=sizeof(pText);
		mpText=new char[mLength+1];
		if(pText!=0)
			strcpy(mpText,pText);
		else
			mpText[0]='\0';	
	}
}

void TString::append(const TString& SObject) {
	int newLength=mLength+sizeof(SObject.mpText);
	char* tempChar= new char[newLength];
	strcpy(tempChar,mpText);
	strcpy(tempChar+mLength,SObject.mpText);
	delete [] mpText;
	mpText=tempChar;
}


bool TString::equals(const TString& SObject) const {
	if(mpText==SObject.mpText) {
		cout<<"They are Equal";
		return true;
	}
	else {
		cout<<"They are not Equal";
		return false;
	}
}

bool TString::equalsIgnoreCase(const TString& SObject) const {
	if(mpText==SObject.mpText) {
		cout<<"They are Equal";
		return true;
	}
	else {
		cout<<"They are not Equal";
		return false;
	}
}


int TString::indexOf(const char CSearch) const {
	for(int i=0;i++;i<mLength) {
		if(mpText[i]==CSearch) {
			cout<<"Character Match Found";
			return i;
		}
	}
	cout<<"Character Match Not Found";
	return -1;
}
