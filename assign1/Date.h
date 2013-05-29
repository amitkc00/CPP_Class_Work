/********************************************************/
/* Programmer : Amit Kumar Choudhary			*/
/* 							*/
/* Assignment 1 : Date.h		*/
/*							*/
/* Program Description : o	*/
/* .					*/
/*							*/
/********************************************************/

#ifndef DATE_H
#define DATE_H

#include<iostream>
#include<iomanip>
#include<string>

using std::cin;
using std::cout;
using std::string;

using std::setfill;
using std::setw;


class Date 
{
	private:
		int day;
		int month;
		int year;
		int daysInMonth;
	public:
		
		Date(int dy=1,int mh=1,int yr=2000) {	
			if(yr >= 1900)
				year=yr;
			else    
				year=1900;
              
			if(mh<1 || mh > 12)
				month = 1;
			else    
				month = mh;
             
			if (month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
				daysInMonth=31;
			else if (month==4 || month==6 || month==9 || month==11)
				daysInMonth=30;
			else    
				daysInMonth=28;
               
			if(dy<1 && dy > daysInMonth)
				day=1;
			else    
				day=dy;
		} 
	
		
		//Date();

		void setDate(int,int,int);
		inline void getDay() 
		{
			cout<<"Day : "<< day;	
		}
		inline void getMonth()
		{
			cout<<"Month : "<<month;
		}
		inline void getYear()
		{
			cout<<"Year : "<<year;
		}
		string getMonthName();
		void print();
		void printLong();
};

#endif
