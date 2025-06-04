#include "Hexahedron.h"
#include "RegularPolygon.h"
#include <iostream>
#include <cmath>

Hexahedron::Hexahedron(double s) : side(s) {}

std::string Hexahedron::getName() const {
    return "Hexahedron (Cube)";
}

int Hexahedron::getVertexCount() const {
    return 8;
}

int Hexahedron::getEdgeCount() const {
    return 12;
}

double Hexahedron::getSideLength() const {
    return side;
}

void Hexahedron::setSideLength(double length) {
    side = length;
}

double Hexahedron::getSurfaceArea() const {
    return 6 * side * side;
}

double Hexahedron::getVolume() const {
    return side * side * side;
}

double Hexahedron::getInradius() const {
    return side / 2.0;
}

double Hexahedron::getCircumradius() const {
    return (side * std::sqrt(3)) / 2.0;
}

void Hexahedron::setInradius(double r) {
    side = 2 * r;
}

void Hexahedron::setCircumradius(double r) {
    side = 2 * r / std::sqrt(3);
}

int Hexahedron::getFaceCount() const {
    return 6;
}

int Hexahedron::getEdgesPerFace() const {
    return 4;
}

int Hexahedron::getFacesAtVertex() const {
    return 3;
}

std::shared_ptr<FlatShape> Hexahedron::getFaceShape() const {
    return std::make_shared<RegularPolygon>(4, side);
}

void Hexahedron::printInfo() const {
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
