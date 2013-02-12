//File Name : Main.cpp

#include "Card.h"
#include "Rolodex.h"

#include <cstdio>
#include <cstdlib>

using namespace std;

int main() {
    
	enum UserChoice {view=1,add};
    int uchoice = -1;
    
    
    Rolodex* RolodexObj = new Rolodex(NULL); //Initialization of Rolodex.
    
    int quit_IP=0;
	Card* CardObject = new Card("Amit","Choudhary","Student","20 B Gardner Ave","7654215125");
    RolodexObj->add(*CardObject);	
    
	while(quit_IP==0) {	
		cout<<"Choose your Option (1.view 2.add) = ";
        cin>>uchoice;
		switch (uchoice) {
			case view: {
				RolodexObj->CurrentCard();
            }
				break;
                
			case add: {
                Card* CardObject = new Card("Rohit","Choudhary","Student","20 B Gardner Ave","7654215125");
                RolodexObj->add(*CardObject);
            }
				break;
                
            default:
				cout<<"You choose a wrong option. Sorry";
                return -1;
				break;
		}
	}
	return 0;
}
