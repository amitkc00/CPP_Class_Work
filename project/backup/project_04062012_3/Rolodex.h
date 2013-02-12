//File Name : 	Rolodex.h

#include <cstdio>
#include <iostream>
#include "Card.h"
#include <list>
#include <iterator>

using std::list;
using std::cin;
using std::cout;

list<Card*> listRolodex;

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
		int search(string);
		void show(); //Shows all cards.
		void modify(int,string);
		void remove();
		void CurrentCard();
};
