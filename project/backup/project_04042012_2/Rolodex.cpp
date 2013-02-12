//File Name :	Rolodex.cpp


#include "Rolodex.h"

enum {firstname#,lastname#,occupation#,address#,phone#}intChoice;

Rolodex::Rolodex(Card* CardObjectPtr) {
	CurrentCardPtr=CardObjectPtr;
}

Rolodex::~Rolodex() {

}

void add(Card* CardObject) {
	if(CurrentCardPtr==NULL)
		CurrentCardPtr=CardObject
	else {
		++listRolodex.back() = CardObject;
		CurrentCardPtr = CardObject;
	}
}

Card* getCurrentCard() {
	return CurrentCardPtr;

}

Card* flip() {
	return CurrentCardPtr++;
}

Card* search(string lastname) {
	Card* temp;
	temp=listRolodex.begin();
	if(lastname == temp->lastname)
		CurrentCardPtr = temp;
	else
		temp++;
}

Card* show() {
	Card* temp;
	temp = listRolodex.begin();
	do {
		CurrentCardPtr=temp;
		Card::displayCarddata(temp);
	}while(temp++ !=listRolodex.begin())
}

Card* modify(int intChoice, string newValue) {
	Card* CardObject3 = new Card();
	CardObject3 = getCurrentCard();
                    
	switch(intChoice) {
		case firstname# :
			CardObject3->firstname=newValue;
			break;

		case lastname# :
			cin<<CardObject3->lastname=newValue;
			break;

		case occupation# :
			cin<<CardObject3->occupation=newValue;
			break;

		case address# :
			cin<<CardObject3->address=newValue;
			break;

		case phone# :
			cin<<CardObject3->phone=newValue;
			break;

		default:
			cout<<"You choose a wrong option. Sorry";
			break;
	}

}

Card* remove(Card* CardObject) {	
	Card* temp;
	temp = CurrentCardPtr++;
	delete CurrentCardPtr;
	CurrentCardPtr=temp;
}
