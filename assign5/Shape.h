//File Name : 	Shape.h
//Description : Shape Class definition.
//Author :	Amit Choudhary
//Date :	04/01/2012

#include <iostream>
#include <cstdio>
#include <cstring>
#include <fstream>
#include <string>

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
