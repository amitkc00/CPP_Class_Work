#include "Shape.h"
using namespace std;

//Constructor
Shape::Shape(string& color_IP)
	:color(color_IP)
{
} 

Shape::~Shape() {
	cout<<"\nShape Destructor Called\n";
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
