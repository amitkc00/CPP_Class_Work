// File Name : Card.cpp

#include "Card.h"

using std::cout;
using std::endl;

Card::Card(string fname_IP,string lname_IP,string occupation_IP,string address_IP,string phone_IP) {
        first_name = fname_IP;
        last_name = lname_IP;
        occupation = occupation_IP;
        address = address_IP;
        phone_no = phone_IP;
}

Card::~Card() {

}

int Card::displayCardData() {
	cout<<"First Name = "<<first_name<<endl;
	cout<<"Last Name = "<<last_name<<endl;
	cout<<"Occupation = "<<occupation<<endl;
	cout<<"Address = "<<address<<endl;
	cout<<"Phone No = "<<phone_no<<endl;
    return 0;
}
