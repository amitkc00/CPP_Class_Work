//FileName : Card.h

//Just encapsulates single card's information.

#ifndef CARD_H
#define CARD_H

#include <cstring>
//#include <list> //list class-template definition
#include <iostream>
#include <cstdio>

using std::string;

class Card {
	
	private:
		string first_name;
		string last_name;
		string occupation;
		string address;
		string phone_no;
	public:
        //Constructor
		Card(string fname_IP,string lname_IP,string occupation_IP,string address_IP,string phone_IP); 
		//Destructor
        ~Card(); 
		int displayCardData();	

		//friend class Rolodex;
};

#endif

