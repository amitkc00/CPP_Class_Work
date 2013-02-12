#include <iostream>
#include <cstdio>
#include <cstring>
#include <iomanip> //Find out why we need this and keep it only if needed.
#include <strstream> //Find out why we need this and keep it only if needed.
#include <sstream>
#include <string>
#include <cstdlib>

int main() {

using namespace std;
string input;
input="blue circle 2.0";

char* cstr;
cstr = new char[input.size()+1];
char* endptr =" ";
strcpy(cstr,input.c_str());

char * color;
char* shape;
char* radius;

color = strtok(cstr," ");
cout<<"\ncolor value = "<<color<<"\n";

shape = strtok(NULL," ");
cout<<"\nshape value = "<<shape<<"\n";

radius = strtok(NULL," ");
cout<<"\nshape value = "<<radius<<"\n";

double Radius;
Radius = atof(radius);
cout<<"Double version of radius = "<<Radius<<"\n";
cout<<"Twice of Double version of radius = "<<2*Radius<<"\n";


/*
string color;
string shape;
string radius;
double Radius;
istringstream iss(input);

getline(iss,color,' ');
getline(iss,shape,' ');
getline(iss,radius,' ');

char* cstr;
cstr = new char[radius.size()+1];
char* endptr;
Radius = strtod(cstr,' ');
//Radius = strtod(cstr,&endptr);

cout<<"color = "<<color<<"\n shape = "<<shape<<"\n radius = "<<radius;

cout<<"\nRadius = "<<Radius;
*/



return 1;

}
