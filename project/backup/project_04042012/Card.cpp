// File Name : Card.cpp

Card::Card(string fname_IP,string lname_IP,string occupation_IP,string address_IP,string phone_IP) {
        CardObject->first_name = fname_IP;
        CardObject->last_name = lname_IP;
        CardObject->occupation = occupation_IP;
        CardObject->address = address_IP;
        CardObject->phone_no = phone_IP;
}

Card::~Card() {

}

/*
Card* getCardData(string fname_IP,string lname_IP,string occupation_IP,string address_IP,string phone_IP) {
	Card CardObject = new Card(string fname_IP,string lname_IP,string occupation_IP,string address_IP,string phone_IP);
	Card* CardObjectPtr = &CardObject;
	return CardObject;
}

*/

void displayCardData(Card* CardObject) {
	cout<<"First Name = "<<CardObject->first_name;
	cout<<"Last Name = "<<CardObject->last_name;
	cout<<"Occupation = "<<CardObject->occupation;
	cout<<"Address = "<<CardObject->address;
	cout<<"Phone No = "<<CardObject->phone_no;
}
