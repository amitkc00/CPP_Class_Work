#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle(string& color_IP, double width_IP,double length_IP)
	:Shape(color_IP)    
{
	width=width_IP;
	length=length_IP;
}

double Rectangle::area() {
	double area_calc = length * width;
	return area_calc;
}

string Rectangle::toString() {
	cout<<"\n"<<getColor()<<" Rectangle with length of "<<length<<" and width of "<<width<<" and area of "<<area()<<"\n";
	return "success";
}


