#include "Octahedron.h"
#include "RegularPolygon.h" 
#include <iostream>
#include <cmath>

Octahedron::Octahedron(double s) : side(s) {}

std::string Octahedron::getName() const {
    return "Octahedron";
}

int Octahedron::getVertexCount() const {
    return 6;
}

int Octahedron::getEdgeCount() const {
    return 12;
}

double Octahedron::getSideLength() const {
    return side;
}

void Octahedron::setSideLength(double length) {
    side = length;
}

double Octahedron::getSurfaceArea() const {
    return 2 * std::sqrt(3) * side * side;
}

double Octahedron::getVolume() const {
    return (std::sqrt(2) / 3.0) * side * side * side;
}

double Octahedron::getInradius() const {
    return (side * std::sqrt(6)) / 6.0;
}

double Octahedron::getCircumradius() const {
    return (side * std::sqrt(2)) / 2.0;
}

void Octahedron::setInradius(double r) {
    side = (6.0 * r) / std::sqrt(6);
}

void Octahedron::setCircumradius(double r) {
    side = (2.0 * r) / std::sqrt(2);
}

int Octahedron::getFaceCount() const {
    return 8;
}

int Octahedron::getEdgesPerFace() const {
    return 3;
}

int Octahedron::getFacesAtVertex() const {
    return 4;
}

std::shared_ptr<FlatShape> Octahedron::getFaceShape() const {
    return std::make_shared<RegularPolygon>(3, side);
}

void Octahedron::printInfo() const {
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
