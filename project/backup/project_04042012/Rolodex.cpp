//File Name :	Rolodex.cpp


#include "Rolodex.h"

Rolodex::Rolodex(Card* CardObjectPtr) {
i	CurrentCardPtr=CardObjectPtr;
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

Card* search(string firstname, string lastname) {
	Card* first;
	Card* last;
	Card* temp;
	temp=listRolodex.begin();
	if(lastname == temp->lastname)
		CurrentCardPtr = temp;
	else
		temp++;
}

Card* show() {


}

Card* modify(Card* CardObject) {

}
