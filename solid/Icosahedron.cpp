#include "Icosahedron.h"
#include "RegularPolygon.h"
#include <iostream>
#include <cmath>

Icosahedron::Icosahedron(double s) : side(s) {}

std::string Icosahedron::getName() const {
    return "Icosahedron";
}

int Icosahedron::getVertexCount() const {
    return 12;
}

int Icosahedron::getEdgeCount() const {
    return 30;
}

double Icosahedron::getSideLength() const {
    return side;
}

void Icosahedron::setSideLength(double length) {
    side = length;
}

double Icosahedron::getSurfaceArea() const {
    return 5 * std::sqrt(3) * side * side;
}

double Icosahedron::getVolume() const {
    return (5 * (3 + std::sqrt(5)) / 12.0) * std::pow(side, 3);
}

double Icosahedron::getInradius() const {
    return (side / 12.0) * std::sqrt(3) * (3 + std::sqrt(5));
}

double Icosahedron::getCircumradius() const {
    return (side / 4.0) * std::sqrt(10 + 2 * std::sqrt(5));
}

void Icosahedron::setInradius(double r) {
    side = (12.0 * r) / (std::sqrt(3) * (3 + std::sqrt(5)));
}

void Icosahedron::setCircumradius(double r) {
    side = (4.0 * r) / std::sqrt(10 + 2 * std::sqrt(5));
}

int Icosahedron::getFaceCount() const {
    return 20;
}

int Icosahedron::getEdgesPerFace() const {
    return 3;
}

int Icosahedron::getFacesAtVertex() const {
    return 5;
}

std::shared_ptr<FlatShape> Icosahedron::getFaceShape() const {
    return std::make_shared<RegularPolygon>(3, side);
}

void Icosahedron::printInfo() const {
    std::cout << getName()
        << "\nSide: " << side
        << "\nSurface Area: " << getSurfaceArea()
        << "\nVolume: " << getVolume()
        << "\nInradius: " << getInradius()
        << "\nCircumradius: " << getCircumradius()
        << "\nFaces: " << getFaceCount()
        << "\nEdges per Face: " << getEdgesPerFace()
        << "\nFaces at Vertex: " << getFacesAtVertex()
        << "\n\n";
}
