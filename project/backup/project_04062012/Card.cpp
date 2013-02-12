// File Name : Card.cpp

#include "Card.h"

using std::cout;


Card::Card(string fname_IP,string lname_IP,string occupation_IP,string address_IP,string phone_IP) {
        CardObject->first_name = fname_IP;
        CardObject->last_name = lname_IP;
        CardObject->occupation = occupation_IP;
        CardObject->address = address_IP;
        CardObject->phone_no = phone_IP;
}

Card::~Card() {

}

void displayCardData(Card* CardObject) {
	cout<<"First Name = "<<CardObject->first_name<<endl;
	cout<<"Last Name = "<<CardObject->last_name<<endl;
	cout<<"Occupation = "<<CardObject->occupation<<endl;
	cout<<"Address = "<<CardObject->address<<endl;
	cout<<"Phone No = "<<CardObject->phone_no<<endl;
}
