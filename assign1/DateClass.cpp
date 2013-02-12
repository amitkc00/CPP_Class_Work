#include<Date.h>
int daysInMonth;

Date(int dy=1,int mh=1,int yr=2000) {
	if(yr !>= 1900)
		year=1900;
	else
		year=yr;	

	if(mh<1 && mh > 12)
		month = 1;
	else
		month = mh;

	if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
		daysInMonth=31;
	else if(month==4||month==6||month==9||month==11)
		daysInMonth=30;
	else
		daysInMonth=28;

	if(dy<1 && dy > daysInMonth) 
		day=1;
	else
		day=dy;
}
//void getDay();    
//void getMonth();
//void getYear();
                
string getMonthName() {
	swtich(month) {
		case 1:
			return "January";
		case 2:
			return "February";
		case 3:
			return "March";
		case 4:
			return "April";
		case 5:
			return "May";
		case 6:
			return "June";
		case 7:
			return "July";
		case 8:
			return "August";
		case 9:
			return "September";
		case 10:
			return "October";
		case 11:
			return "November";
		case 12:
			return "December";
	}
}

void print()
{
	cout<<month<<"\"<<day<<"\"<<year;
}

void printLong() {
	cout<<day<<" "<<getMonthName()<<" "<<year;
}
