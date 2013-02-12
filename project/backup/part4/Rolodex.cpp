//File Name :	Rolodex.cpp

#include "Rolodex.h"

enum intChoice {firstname,lastname,occupation,address,phone};
 
Rolodex::~Rolodex() {

}

list<Card> listRolodex;
list<Card>::iterator itRolodex;

void Rolodex::add(Card& CardObjectPtr) {

    
    listRolodex.push_back(CardObjectPtr);
    CurrentCardPtr = &listRolodex.back();
    
}

Card* Rolodex::getCurrentCard() {
    CurrentCardPtr->displayCardData();
	return CurrentCardPtr;

}

void Rolodex::CurrentCard() {
	CurrentCardPtr->displayCardData(); //I guess I have to make Rolodex Class friend of Card Class.
}
