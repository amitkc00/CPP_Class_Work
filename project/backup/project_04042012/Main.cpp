//File Name : Main.cpp

#include "Card.h"
#include "Rolodex.h"

#include <cstdio>
#include <stdlib>


int main() {

	enum {list,view,flip,search,add,remove,modify,quit}UserChoice;
	Rolodex RolodexObj = new Rolodex(); //Initialization of Rolodex.
	string firstname,lastname,occupation,address,phone;

	//Read Input Data File
	firstname = "Amit";
	lastname = "Choudhary";
	occupation = "student";
	address = "20 B Gardner Ave";
	phone = "7654215125";
	
	Card CardObject = new Card(firstname,lastname,occupation,address,phone);
        Card* CardObjectPtr = &CardObject;
	Rolodex::add(CardObjectPtr);	

	
	switch UserChoice {
		case list:
			Rolodex::show();	
		case view:
			Card::displayCardData();
		
		case flip:
			Rolodex::flip();
			Card::displayCardData();
		case search:
			string lname_search;
			cout<<"Enter the Last Name you want to search(Case sensitive)";
			cin>>lname_search;
			Rolodex::search(lname_search);

		case add:
			firstname = "Amit";
			lastname = "Choudhary";
        		occupation = "student";
        		address = "20 B Gardner Ave";
        		phone = "7654215125";
        		Card CardObject2 = new Card(firstname,lastname,occupation,address,phone);
        		Card* CardObjectPtr2 = &CardObject;
        		Rolodex::add(CardObjectPtr2); 
		
		case remove:
			Rolodex::remove();

		case modify:
			Rolodex::modify();
		case quit:
			cout<<"Are you sure you want to exit(Y/N)";
		
		case default:

	}
return 0;
}


