#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"
#include "Shape.h"
#include <string>

using namespace std;

//Shape* getShape(string);

Shape* getShape(string LINE_IP)  {

	//Break this line and call appropriate Shape function by using Switch Statement.
	
	string shape_IP = "circle";
	string color_IP = "red";
	//const string& color_IP;
	//*color_IP = "red";	

	if(shape_IP=="circle") {
		double radius_IP = 10;
		Circle* circle_IP = new Circle(color_IP,radius_IP);
		return circle_IP;

	}
	else if (shape_IP == "square") {
		double sidelength_IP = 10;
		Square* square_IP = new Square(color_IP,sidelength_IP);
		return square_IP;
	}
	else if (shape_IP == "rectangle") {
		double length_IP = 10;
		double width_IP = 10;
		Rectangle* rectangle_IP = new Rectangle(color_IP,width_IP,length_IP);
		return rectangle_IP;
	}

	else
		return NULL;
}
