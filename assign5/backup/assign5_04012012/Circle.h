#ifndef CIRCLE_H
#define CIRCLE_H

#include <string>
#include "Shape.h"

class Circle : public Shape {
	protected:
		double radius;
	public:
		//Circle(const std::string& color_IP,double radius_IP);
		Circle(std::string& color_IP,double radius_IP);
		double area();
		std::string toString();

};

#endif
