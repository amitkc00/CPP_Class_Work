/********************************************************/
/* Programmer : Amit Kumar Choudhary			*/
/* 							*/
/* Assignment 1 : Date Class Header File		*/
/*							*/
/* Program Description : To create a C++ Date Class to	*/
/* store Calendar Date.					*/
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
	public:
		Date(int,int,int);
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
	private:
		int day;
		int month;
		int year;
}

#endif
