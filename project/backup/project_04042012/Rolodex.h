//File Name : 	Rolodex.h

#include <cstdio>
#include <iostream>
#include "Card.h"

list<Card*> listRolodex(1,0);
list<Card*>::iterator iterRolodex = listRolodex.begin(); 	

class Rolodex {
	private:
		Card* CurrentCardPtr;
	public:
		Rolodex(Card* CardObjectPtr=NULL); //Constructor
		~Rolodex(); //Destructor
		//void add(); //Handle the case of duplicate names.
		void remove();
		void getCurrentCard();
		void flip();
		void search();
		void show(); //Shows all cards.
		void modify();
}
