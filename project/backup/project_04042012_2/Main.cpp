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
	string confirm;	
	int quit=0;

	Card CardObject = new Card(firstname,lastname,occupation,address,phone);
        Card* CardObjectPtr = &CardObject;
	Rolodex::add(CardObjectPtr);	

	while(quit==0) {	
		switch UserChoice {
			case list:
				Rolodex::show();	
				break;
			case view:
				Card::displayCardData();
				break;
			case flip:
				Rolodex::flip();
				Card::displayCardData();
				break;
			case search:
				string lname_search;
				cout<<"Enter the Last Name you want to search(Case sensitive)";
				cin>>lname_search;
				Rolodex::search(lname_search);
				break;
			case add:
				firstname = "Rohit";
				lastname = "Choudhary";
        		occupation = "student";
        		address = "20 B Gardner Ave";
        		phone = "7654215125";
        		Card CardObject2 = new Card(firstname,lastname,occupation,address,phone);
        		Card* CardObjectPtr2 = &CardObject;
        		Rolodex::add(CardObjectPtr2); 
			break;
			case remove:
				Rolodex::show();
				cout<<"\nDo you really want to remove this entry (Y/N)";
				cin<<confirm;
				if(confirm=="Y") 
					Rolodex::remove();
				else
					cout<<"Dont try to fool me";
				break;
			case modify:
				Card::displayCardData();
                cout<<"Do you want to modify this card entry (Y/N)";
                cin<<confirm;
                if(confirm="Y") {
					cout<<"Pick the field you want to modify (Type in 1 - 5)";
                    int intChoice;
                    cout<<<"1.First Name    2.Last Name 3.Occupation    4.Address   5.Phone";
                    cin >> intChoice;
					cout<<"New Value for "<<intChoice<<"is = ";
					cin >> newValue;
					Rolodex::modify(intChoice,newValue);
				}
					
				cout<<"The updated Card entry is";
				Card::displayCardData();
				break;

			case quit:
				cout<<"Are you sure you want to exit(Y/N)";
				cin<<confirm;
				if(confirm =="Y")
					quit=1;
				break;

			case default:
				cout<<"You choose a wrong option. Sorry";
				break;
		}
	}
	return 0;
}
