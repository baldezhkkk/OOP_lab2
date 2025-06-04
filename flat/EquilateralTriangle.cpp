#include "EquilateralTriangle.h"

EquilateralTriangle::EquilateralTriangle(double s) : side(s) {}

std::string EquilateralTriangle::getName() const {
    return "Equilateral Triangle";
}

int EquilateralTriangle::getVertexCount() const {
    return 3;
}

int EquilateralTriangle::getEdgeCount() const {
    return 3;
}

double EquilateralTriangle::getSideLength() const {
    return side;
}

void EquilateralTriangle::setSideLength(double length) {
    side = length;
}

double EquilateralTriangle::getPerimeter() const {
    return 3 * side;
}

double EquilateralTriangle::getArea() const {
    return (std::sqrt(3) / 4) * side * side;
}

double EquilateralTriangle::getInradius() const {
    return side / (2 * std::sqrt(3));
}

double EquilateralTriangle::getCircumradius() const {
    return side / std::sqrt(3);
}

void EquilateralTriangle::setInradius(double r) {
    side = 2 * r * std::sqrt(3);
}

void EquilateralTriangle::setCircumradius(double r) {
    side = r * std::sqrt(3);
}

void EquilateralTriangle::printInfo() const {
    std::cout << getName()
        << "\nSides: 3"
        << "\nLength: " << side
        << "\nPerimeter: " << getPerimeter()
        << "\nArea: " << getArea()
        << "\nInradius: " << getInradius()
        << "\nCircumradius: " << getCircumradius()
        << "\n\n";
}
