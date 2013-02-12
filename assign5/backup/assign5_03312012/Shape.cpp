#include "Shape.h"
using namespace std;


//Constructor
Shape::Shape(string& color_IP)
{
	color=color_IP;
} 

//Shape::Shape(const string& color_IP) {
//	color = color_IP;
//} 

string Shape::getColor() const {
	return color;
}

virtual double Shape::area() {

}

virtual string Shape::toString() {

}
