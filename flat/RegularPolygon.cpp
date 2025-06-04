#include "RegularPolygon.h"

RegularPolygon::RegularPolygon(int n, double s) : sides(n), side(s) {}

std::string RegularPolygon::getName() const {
    if (sides == 2) return "Square";
    else return "Regular " + std::to_string(sides) + "-gon";
}

int RegularPolygon::getVertexCount() const { return sides; }
int RegularPolygon::getEdgeCount() const { return sides; }
double RegularPolygon::getSideLength() const { return side; }
void RegularPolygon::setSideLength(double length) { side = length; }

double RegularPolygon::getPerimeter() const { return sides * side; }

double RegularPolygon::getArea() const {
    return (sides * side * side) / (4 * tan(M_PI / sides));
}

double RegularPolygon::getInradius() const {
    return side / (2 * tan(M_PI / sides));
}

double RegularPolygon::getCircumradius() const {
    return side / (2 * sin(M_PI / sides));
}

void RegularPolygon::setInradius(double r) {
    side = 2 * r * tan(M_PI / sides);
}

void RegularPolygon::setCircumradius(double r) {
    side = 2 * r * sin(M_PI / sides);
}

void RegularPolygon::printInfo() const {
    std::cout << getName() << "\nSides: " << sides
        << "\nLength: " << side
        << "\nPerimeter: " << getPerimeter()
        << "\nArea: " << getArea()
        << "\nInradius: " << getInradius()
        << "\nCircumradius: " << getCircumradius()
        << "\n\n";
}