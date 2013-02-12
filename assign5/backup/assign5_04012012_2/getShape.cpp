#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"
#include "Shape.h"
#include <string>
#include <sstream>
#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

Shape* getShape()  {
	string shape_IP;
	string color_IP;
	double radius;
	double sidelength;
	double length;
	double width;
	int testing=1;
	
	cout<<"\nEnter a list of shapes - 'done' to end";
	while(1) {
	
		cout<<"\nEnter the shape's color (or 'done')...";
		cin>>color_IP;
		string& color=color_IP;
		
		if(color_IP == "done") {
			testing++;
			return NULL;
		}
		else {
			cout<<"Enter shape type... ";
			cin>>shape_IP;
			
			if(shape_IP=="circle") {
				cout<<"Enter the radius... ";
				cin>>radius;
				Circle* circle_IP = new Circle(color,radius);
				testing++;
				return circle_IP;
			
			}
			else if(shape_IP =="square"){
				cout<<"Enter the length of a side... ";
				cin>>sidelength;
				Square* square_IP = new Square(color,sidelength);
				return square_IP;
			}
			else if(shape_IP == "rectangle") {
				cout<<"Enter the length and width... ";
				cin>>length>>width;
                		Rectangle* rectangle_IP = new Rectangle(color,width,length);
                		return rectangle_IP;
			}
		}		
	}
}
