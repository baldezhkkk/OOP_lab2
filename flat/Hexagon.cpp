#include "Hexagon.h"
#include <iostream>

Hexagon::Hexagon(double s) : side(s) {}

std::string Hexagon::getName() const {
    return "Regular Hexagon";
}

int Hexagon::getVertexCount() const {
    return 6;
}

int Hexagon::getEdgeCount() const {
    return 6;
}

double Hexagon::getSideLength() const {
    return side;
}

void Hexagon::setSideLength(double length) {
    side = length;
}

double Hexagon::getPerimeter() const {
    return 6 * side;
}

double Hexagon::getArea() const {
    return (3 * std::sqrt(3) / 2) * side * side;
}

double Hexagon::getInradius() const {
    return (std::sqrt(3) / 2) * side;
}

double Hexagon::getCircumradius() const {
    return side;
}

void Hexagon::setInradius(double r) {
    side = (2 * r) / std::sqrt(3);
}

void Hexagon::setCircumradius(double r) {
    side = r;
}

void Hexagon::printInfo() const {
    std::cout << getName()
        << "\nSide: " << side
        << "\nPerimeter: " << getPerimeter()
        << "\nArea: " << getArea()
        << "\nInradius: " << getInradius()
        << "\nCircumradius: " << getCircumradius()
        << "\n\n";
}
