/*
	CH-230-A 
    a12-p1.[c or cpp or h] 
    Zixiang Wang 
    zixwang@jacobs-university.de
*/

#include <iostream>
#include "Shapes.h"
#include <cmath>
#define M_PI	3.14159265358979323846

using namespace std; 

/*
	string name;
*/
Shape::Shape(const string& n) : name(n) {}

Shape::Shape() {
	name = "default_shape";
}

Shape::Shape(const Shape& s) {
	name = s.getName();
}

void Shape::printName() const {
	cout << name << endl;
}

void Shape::setName(string nName) {
	name = nName;
}

string Shape::getName() const {
	return name;
}


/*
	string name; double x; double y;
*/
CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
	x = nx;
	y = ny;
}

CenteredShape::CenteredShape() : Shape() {
	x = 0;
	y = 0;
}

CenteredShape::CenteredShape(const CenteredShape& c) {
	setName(c.getName());
	x = c.getX();
	y = c.getY();
}

void CenteredShape::move(double nX, double nY) {
	x = nX;
	y = nY;
}

void CenteredShape::setX(double nX) {
	x = nX;
}

void CenteredShape::setY(double nY) {
	y = nY;
}

double CenteredShape::getX() const {
	return x;
}

double CenteredShape::getY() const {
	return y;
}


/*
	string name; double x; double y;
	int edgesNumber;
*/
RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n,nx,ny) 
{
	edgesNumber = nl;
}

RegularPolygon::RegularPolygon() : CenteredShape() {
	edgesNumber = 0;
}

RegularPolygon::RegularPolygon(const RegularPolygon& r) {
	edgesNumber = r.getEdgesNumber();
	setName(r.getName());
	setX(r.getX());
	setY(r.getY());
}

void RegularPolygon::setEdgesNumber(int nEdges) {
	edgesNumber = nEdges;
}

int RegularPolygon::getEdgesNumber() const {
	return edgesNumber;
}


/*
	string name; double x; double y;
	double radius;
*/
Circle::Circle(const string& n, double nx, double ny, double r) : 
  CenteredShape(n,nx,ny) 
{
	radius = r;
}

Circle::Circle() : CenteredShape() {
	radius = 0;
}

Circle::Circle(const Circle& c) {
	setName(c.getName());
	setX(c.getX());
	setY(c.getY());
	radius = c.getRadius();
}

void Circle::setRadius(double newRadius) {
	radius = newRadius;
}

double Circle::getRadius() const {
	return radius;
}

double Circle::perimeter() const {
	return 2 * M_PI * radius;
}

double Circle::area() const {
	return radius * radius * M_PI;
}


/*
	string name; double x; double y;
	int edgesNumber; double width; double height;
*/
Rectangle::Rectangle() : RegularPolygon() {
	setEdgesNumber(4);
    width = 0;
	height = 0;
}

Rectangle::Rectangle(const string& n, double nx, double ny, double nwidth, 
	double nheight) : RegularPolygon(n, nx, ny, 4)
{
	width = nwidth;
	height = nheight;
}

Rectangle::Rectangle(const Rectangle& r) {
	setName(r.getName());
	setX(r.getX());
	setY(r.getY());
	setEdgesNumber(r.getEdgesNumber());
	width = r.getWidth();
	height = r.getHeight();
}

void Rectangle::setWidth(double nWidth) {
	width = nWidth;
}

void Rectangle::setHeight(double nHeight) {
	height = nHeight;
}

double Rectangle::getWidth() const {
	return width;
}

double Rectangle::getHeight() const {
	return height;
}

double Rectangle::perimeter() const {
	return 2 * (height + width);
}

double Rectangle::area() const {
	return height * width;
}


/*
	string name; double x; double y;
	int edgesNumber; double width; double height;
	double side;
*/

Square::Square() : Rectangle() {
	side = 0;
}

Square::Square(const string& n, double nx, double ny, double nside) 
	: Rectangle(n, nx, ny, nside, nside)
{
	side = nside;
}

Square::Square(const Square& s) {
	setName(s.getName());
	setX(s.getX());
	setY(s.getY());
	setEdgesNumber(s.getEdgesNumber());
	setWidth(s.getWidth());
	setHeight(s.getHeight());
	side = s.getSide();
}

void Square::setSide(double nSide) {
	side = nSide;
}

double Square::getSide() const {
	return side;
}

double Square::perimeter() const {
	return 4 * side;
}

double Square::area() const {
	return side * side;
}

/*
	string name; double x; double y;
	int edgesNumber; string colour; double side;
*/
Hexagon::Hexagon() : RegularPolygon() {
    side = 0;
    colour = "noir";
}

Hexagon::Hexagon(const string& newName, double newX, double newY, 
    int nEdgesNumber, string newColour, double newSide) 
    : RegularPolygon(newName, newX, newY, nEdgesNumber)
{
    colour = newColour;
    side = newSide;
}

Hexagon::Hexagon(const Hexagon& h) : RegularPolygon ("ddd", h.getX(),
    h.getY(), h.getEdgesNumber()) 
{
    setName(h.getName());
    colour = h.getName();
    side = h.getSide();
}

void Hexagon::setColour(const string& colour) {
    this->colour = colour;
}

void Hexagon::setSide(double side) {
    this->side = side;
}

double Hexagon::getSide() const{
    return side;
}

string Hexagon::getColour() const{
    return colour;
}

double Hexagon::area() const {
    return (3.0 * pow(3, 0.5)) / 2 * side * side;
}

double Hexagon::perimeter() const {
    return side * 6;
}