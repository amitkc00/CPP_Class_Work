#include "Shape.h"
using namespace std;

//Constructor
Shape::Shape(string& color_IP)
	:color(color_IP)
{
} 

string Shape::getColor() const {
	return color;
}

double Shape::area() {
	return 1;
}

string Shape::toString() {
	return "shapeClass";
}
