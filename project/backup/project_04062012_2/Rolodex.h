//File Name : 	Rolodex.h

#include <cstdio>
#include <iostream>
#include "Card.h"

using std::list;


list<Card*> listRolodex;
//list<Card*>::iterator iterRolodex = listRolodex.begin(); 	

using std::int;
using std::string;

class Rolodex {
	private:
		Card* CurrentCardPtr;
	public:
		Rolodex(Card* CardObjectPtr=NULL); //Constructor
		~Rolodex(); //Destructor
		void add(Card* CardObject); //Handle the case of duplicate names.
		Card* getCurrentCard();
		void flip();
		int search();
		void show(); //Shows all cards.
		void modify();
		void remove();
};
