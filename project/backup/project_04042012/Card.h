//FileName : Card.h

//Just encapsulates single card's information.

#include <cstring>
#include <list> //list class-template definition
#include "Rolodex.h"


class Card {
	private:
		string first_name;
		string last_name;
		string occupation;
		string address;
		string phone_no;
	public:
		Card(); //Constructor
		~Card(); //Destructor
		//void getCardData();
		void displayCardData(Card* CardObject=CurrentCardPtr);	
}
