//File Name : 	Rolodex.h

#ifndef ROLODEX_H
#define ROLODEX_H


#include <cstdio>
#include <iostream>
#include "Card.h"
#include <list>
#include <iterator>


using std::list;
using std::cin;
using std::cout;

using std::string;

class Rolodex {
	private:
		Card* CurrentCardPtr;
	public:
    Rolodex(Card* CardObjectPtr): CurrentCardPtr(CardObjectPtr)
    {
        
    }
		~Rolodex(); //Destructor
		void add(Card& CardObjectPtr); //Handle the case of duplicate names.
		Card* getCurrentCard();
		void CurrentCard();
		
};

#endif