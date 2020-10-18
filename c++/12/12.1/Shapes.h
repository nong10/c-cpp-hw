/* 
	Classic shape examples: an inheritance tree in a geometric context
*/
#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>
using namespace std;

/*
	string name;
*/
class Shape {			// base class
	private:   				// private access modifier: could also be protected
		string name;   // every shape will have a name
	public:
		Shape(const string&);  // builds a shape with a name
		Shape();					// empty shape
		Shape(const Shape&);		// copy constructor
		void printName() const ;  	// prints the name 
		// setter:
		void setName(string);
		// getter:
		string getName() const; 
};

/*
	string name; double x; double y;
*/
class CenteredShape : public Shape {  // inherits from Shape
	private: 
		double x,y;  // the center of the shape
	public:
		CenteredShape(const string&, double, double);  // usual three constructors
		CenteredShape();
		CenteredShape(const CenteredShape&);
		void move(double, double);	// moves the shape, i.e. it modifies it center
		// setters:
		void setX(double);
		void setY(double);
		// getters:
		double getX() const;
		double getY() const;
};

/*
	string name; double x; double y;
	int edgesNumber;
*/
class RegularPolygon : public CenteredShape { // a regular polygon is a centered_shape with a number of edges
	private: 
		int edgesNumber;
	public:
		RegularPolygon(const string&, double, double, int);
		RegularPolygon();
		RegularPolygon(const RegularPolygon&);
		// setter:
		void setEdgesNumber(int);
		// getter:
		int getEdgesNumber() const;
};

/*
	string name; double x; double y;
	double radius;
*/
class Circle : public CenteredShape {  // a Circle is a shape with a center and a radius
	private:
		double radius;
	public:
		Circle(const string&, double, double, double);
		Circle();
		Circle(const Circle&);
		// setter:
		void setRadius(double);
		// getter:
		double getRadius() const;
		// others:
		double perimeter() const;
		double area() const;
};

/*
	string name; double x; double y;
	int edgesNumber; double width; double height;
*/
class Rectangle : public RegularPolygon { // a Rectangle has a center, width, and height
	private:
		double width, height;
	public:
		Rectangle();
		Rectangle(const string& n, double nx, double ny, double nwidth, double 
			nheight);
		Rectangle(const Rectangle&);
		// setters:
		void setWidth(double);
		void setHeight(double);
		// getters:
		double getWidth() const;
		double getHeight() const;
		// others:
		double perimeter() const;
		double area() const;
};

/*
	string name; double x; double y;
	int edgesNumber; double width; double height;
	double side;
*/
class Square : public Rectangle { // a Square has a center, side
	private:
		double side;
	public:
		Square();
		Square(const string& n, double nx, double ny, double nside);
		Square(const Square&);
		// setter:
		void setSide(double);
		// getter:
		double getSide() const;
		// others:
		double perimeter() const;
		double area() const;
};

/*
	string name; double x; double y;
	int edgesNumber; string colour; double side;
*/
class Hexagon : public RegularPolygon {
    private:
        double side;
        string colour;
    public:
        Hexagon();
        Hexagon(const string& newName, double newX, double newY, int nEdgesNumber
            ,string newColour, double newSide);
        Hexagon(const Hexagon&);
        // setters:
        void setColour(const string&);
        void setSide(double);
        // getters:
        double getSide() const;
        string getColour() const;
        //
        double area() const;
        double perimeter() const;
};

#endif
