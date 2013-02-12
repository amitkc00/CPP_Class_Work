//File Name :	Rolodex.cpp

#include "Rolodex.h"

enum intChoice {firstname,lastname,occupation,address,phone};

Rolodex::Rolodex(Card* CardObjectPtr) {
	CurrentCardPtr=CardObjectPtr;
}

Rolodex::~Rolodex() {

}

void add(Card* CardObject) {
	if(CurrentCardPtr==NULL)
		CurrentCardPtr=CardObject;
	else {
		// Need to Handle Alphabetic Order

		listRolodex.push_back(CardObject); 	//	++listRolodex.back() = CardObject;
		CurrentCardPtr = listRolodex.end(); 	//	CardObject;
	}
}

Card* getCurrentCard() {
	return CurrentCardPtr;

}

void flip() {
	CurrentCardPtr++;
}

int search(string lastname) {
	list<Card*>::iterator i;
	
	for(i=listRolodex.begin();i!=listRolodex.end();++i) {
		if (lastname == i->lastname) {
                        CurrentCardPtr = i;
                        return 1;
                }
	}
	
	return 0;
}

void show() {

	list<Card*>::iterator i;
	
	for(i=listRolodex.begin();i!=listRolodex.end();++i) {
		CurrentCardPtr=i;
		Card::displayCardData();
	}
		
}

void modify(int intChoice, string newValue) {
	Card* CardObject3 = new Card();
	CardObject3 = getCurrentCard();
                    
	switch(intChoice) {
		case firstname :
			CardObject3->firstname=newValue;
			break;

		case lastname :
			cin<<CardObject3->lastname=newValue;
			break;

		case occupation :
			cin<<CardObject3->occupation=newValue;
			break;

		case address :
			cin<<CardObject3->address=newValue;
			break;

		case phone :
			cin<<CardObject3->phone=newValue;
			break;

		default:
			cout<<"You choose a wrong option. Sorry";
			break;
	}

}

void remove(Card* CardObject) {	
	CurrentCardPtr = listRolodex.erase(CurrentCardPtr);
}
