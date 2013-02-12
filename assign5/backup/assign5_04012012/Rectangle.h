#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <string>
#include <iostream>
#include <cstdio>

#include "Shape.h"

class Rectangle : public Shape {
	private:
		double width;
		double length;

	public:
		//Rectangle(const std::string& color_IP,double width_IP,double length_IP);
		Rectangle(std::string& color_IP,double width_IP,double length_IP);
		double area();
		std::string toString();

};

#endif
