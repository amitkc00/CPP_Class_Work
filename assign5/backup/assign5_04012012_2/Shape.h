#include <iostream>
#include <cstdio>
#include <cstring>
//#include <iomanip> //Find out why we need this and keep it only if needed.
//#include <strstream> //Find out why we need this and keep it only if needed.
#include <fstream>
#include <string>

//using namespace std;

#ifndef SHAPE_H
#define SHAPE_H

class Shape {
	protected:
		std::string color;
	public:
		Shape(std::string& color_IP); //Constructor
		std::string getColor() const;
		virtual double area();
		virtual std::string toString();
		~Shape(); //Destructor
};
#endif 
