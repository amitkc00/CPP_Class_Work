#include "RINT.h"

int main() {

	RINT x,y=4;
	int a=5,b=2;
	
	cout<<x<<endl;
	cin>>x;

	x=x+1;
	x=1-x;
	cout<<"x1 = "<<x<<endl;
	y=x-a;

	x++;
	y +=3;

	cout<<"x = "<<x<<endl;
	cout<<"y = "<<y<<endl;
	return 0;
}
