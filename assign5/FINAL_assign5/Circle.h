//File Name :	Circle.h
//Description :	Circle Class definition
//Author :	Amit Choudhary
//Date :	04/01/2012

#ifndef CIRCLE_H
#define CIRCLE_H

#include <string>
#include "Shape.h"

class Circle : public Shape {
	protected:
		double radius;
	public:
		Circle(std::string& color_IP,double radius_IP); //Constructor
		double area();
		std::string toString();
		~Circle(); //Destructor

};

#endif
