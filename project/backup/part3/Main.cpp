//File Name : Main.cpp

#include "Card.h"
#include "Rolodex.h"

#include <cstdio>
#include <cstdlib>

using namespace std;

int main() {

	enum UserChoice {view=1,add};
    UserChoice uchoice;
    Card* CardObjectPtr4=NULL;
        
	Rolodex* RolodexObj = new Rolodex(CardObjectPtr4); //Initialization of Rolodex.
	string firstname,lastname,occupation,address,phone;

	//Read Input Data File
	firstname = "Amit";
	lastname = "Choudhary";
	occupation = "student";
	address = "20 B Gardner Ave";
	phone = "7654215125";
	string confirm;	
	int quit_IP=0;

	Card* CardObject = new Card(firstname,lastname,occupation,address,phone);	
	RolodexObj->add(*CardObject);	

	while(quit_IP==0) {	
		cout<<"Choose your Option (1.view 2.add)";

        uchoice=view;
		switch (uchoice) {
			case view:
				RolodexObj->CurrentCard();
				break;
			
			case add: {
				firstname = "Rohit";
				lastname = "Choudhary";
				occupation = "student";
				address = "20 B Gardner Ave";
				phone = "7654215125";
				Card* CardObjectPtr2 = new Card(firstname,lastname,occupation,address,phone);
				RolodexObj->add(*CardObjectPtr2); 
            }
				break;

                default:
				cout<<"You choose a wrong option. Sorry";
				break;
		}
	}
	return 0;
}
