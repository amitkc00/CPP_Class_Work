//File Name : Main.cpp

#include "Card.h"
#include "Rolodex.h"

#include <cstdio>
#include <stdlib>

using namespace std;

int main() {

	enum {list,view,flip,search,add,remove,modify,quit} UserChoice;

	Rolodex RolodexObj = new Rolodex(NULL); //Initialization of Rolodex.
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
	RolodexObj.add(CardObjectPtr);	

	while(quit==0) {	
		cout<<"Choose your Option (1.list 2.view 3.flip 4.search 5.add 6.remove 7.modify 8.quit)";
		cin<<UserChoice;
		switch UserChoice {
			case list:
				RolodexObj.show();	
				break;

			case view:
				RolodexObj.CurrentCard();
				break;

			case flip:
				RolodexObj.flip();
				RolodexObj.CurrentCard();
				break;

			case search:
				string lname_search;
				cout<<"Enter the Last Name you want to search(Case sensitive) = ";
				cin>>lname_search;
				int result = RolodexObj.search(lname_search);
				if(result == 1) {
					RolodexObj.CurrentCard();
				}
				else
					cout<<"Card not found.";
				break;

			case add:
				firstname = "Rohit";
				lastname = "Choudhary";
				occupation = "student";
				address = "20 B Gardner Ave";
				phone = "7654215125";
				Card CardObject2 = new Card(firstname,lastname,occupation,address,phone);
				Card* CardObjectPtr2 = &CardObject;
				RolodexObj.add(CardObjectPtr2); 
				break;

			case remove:
				RolodexObj.CurrentCard();
				cout<<"\nDo you really want to remove this entry (Y/N)";
				cin<<confirm;
				if(confirm=="Y") {
					RolodexObj.remove();
				}
				else
					cout<<"Dont try to fool me";
				break;

			case modify:
				RolodexObj.CurrentCard();
				cout<<"Do you want to modify this card entry (Y/N)";
				cin<<confirm;
				if(confirm="Y") {
					cout<<"Pick the field you want to modify (Type in 1 - 5)";
					int intChoice;
					string newValue;
					cout<<<"1.First Name    2.Last Name 3.Occupation    4.Address   5.Phone";
					cin >> intChoice;
					cout<<"New Value for "<<intChoice<<"is = ";
					cin >> newValue;
					RolodexObj.modify(intChoice,newValue);
				}
					
				cout<<"The updated Card entry is";
				RolodexObj.CurrentCard();
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
