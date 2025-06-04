#include "Dodecahedron.h"
#include "RegularPolygon.h"
#include <iostream>
#include <cmath>

Dodecahedron::Dodecahedron(double s) : side(s) {}

std::string Dodecahedron::getName() const {
    return "Dodecahedron";
}

int Dodecahedron::getVertexCount() const {
    return 20;
}

int Dodecahedron::getEdgeCount() const {
    return 30;
}

double Dodecahedron::getSideLength() const {
    return side;
}

void Dodecahedron::setSideLength(double length) {
    side = length;
}

double Dodecahedron::getSurfaceArea() const {
    return 3 * std::sqrt(25 + 10 * std::sqrt(5)) * side * side;
}

double Dodecahedron::getVolume() const {
    return (15 + 7 * std::sqrt(5)) / 4 * side * side * side;
}

double Dodecahedron::getInradius() const {
    return (side / 2) * std::sqrt((250 + 110 * std::sqrt(5)) / 11) / 5;
}

double Dodecahedron::getCircumradius() const {
    return (side / 4) * std::sqrt(3) * (1 + std::sqrt(5));
}

void Dodecahedron::setInradius(double r) {
    side = r * 5 * 2 / std::sqrt((250 + 110 * std::sqrt(5)) / 11);
}

void Dodecahedron::setCircumradius(double r) {
    side = (4 * r) / (std::sqrt(3) * (1 + std::sqrt(5)));
}

int Dodecahedron::getFaceCount() const {
    return 12;
}

int Dodecahedron::getEdgesPerFace() const {
    return 5;
}

int Dodecahedron::getFacesAtVertex() const {
    return 3;
}

std::shared_ptr<FlatShape> Dodecahedron::getFaceShape() const {
    return std::make_shared<RegularPolygon>(5, side);
}

void Dodecahedron::printInfo() const {
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
