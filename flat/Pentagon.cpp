#include "Pentagon.h"
#include <iostream>

Pentagon::Pentagon(double s) : side(s) {}

std::string Pentagon::getName() const {
    return "Regular Pentagon";
}

int Pentagon::getVertexCount() const {
    return 5;
}

int Pentagon::getEdgeCount() const {
    return 5;
}

double Pentagon::getSideLength() const {
    return side;
}

void Pentagon::setSideLength(double length) {
    side = length;
}

double Pentagon::getPerimeter() const {
    return 5 * side;
}

double Pentagon::getArea() const {
    return (5 * side * side) / (4 * std::tan(M_PI / 5));
}

double Pentagon::getInradius() const {
    return side / (2 * std::tan(M_PI / 5));
}

double Pentagon::getCircumradius() const {
    return side / (2 * std::sin(M_PI / 5));
}

void Pentagon::setInradius(double r) {
    side = 2 * r * std::tan(M_PI / 5);
}

void Pentagon::setCircumradius(double r) {
    side = 2 * r * std::sin(M_PI / 5);
}

void Pentagon::printInfo() const {
    std::cout << getName()
        << "\nSide: " << side
        << "\nPerimeter: " << getPerimeter()
        << "\nArea: " << getArea()
        << "\nInradius: " << getInradius()
        << "\nCircumradius: " << getCircumradius()
        << "\n\n";
}
