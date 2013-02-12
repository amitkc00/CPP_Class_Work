#include "Shape.h"
#include <cstdio>
#include <iostream>

using namespace std;
//Constructor
Shape::Shape (string& color_IP )
:color(color_IP)
{
	//color = color_IP;
}

string Shape::getColor() const {
	return color;
}

//virtual double area();
//virtual string toString();
//:color(color_IP)
