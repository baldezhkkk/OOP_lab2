#include "Tetrahedron.h"
#include "RegularPolygon.h"

Tetrahedron::Tetrahedron(double s) : side(s) {}

std::string Tetrahedron::getName() const {
    return "Tetrahedron";
}

int Tetrahedron::getVertexCount() const {
    return 4;
}

int Tetrahedron::getEdgeCount() const {
    return 6;
}

double Tetrahedron::getSideLength() const {
    return side;
}

void Tetrahedron::setSideLength(double length) {
    side = length;
}

double Tetrahedron::getSurfaceArea() const {
    return std::sqrt(3) * side * side;
}

double Tetrahedron::getVolume() const {
    return (std::pow(side, 3)) / (6 * std::sqrt(2));
}

int Tetrahedron::getFaceCount() const {
    return 4;
}

int Tetrahedron::getEdgesPerFace() const {
    return 3;
}

int Tetrahedron::getFacesAtVertex() const {
    return 3;
}

double Tetrahedron::getInradius() const {
    return side / (6 * std::sqrt(6)) * std::sqrt(6); 
}

double Tetrahedron::getCircumradius() const {
    return side * std::sqrt(6) / 4;
}

void Tetrahedron::setInradius(double r) {
    side = 6 * r;
}

void Tetrahedron::setCircumradius(double r) {
    side = r * 4 / std::sqrt(6);
}

std::shared_ptr<FlatShape> Tetrahedron::getFaceShape() const {
    return std::make_shared<RegularPolygon>(3, side);
}

void Tetrahedron::printInfo() const {
    std::cout << getName() << "\nEdges: 6\nFaces: 4 (triangles)\nSide: " << side
        << "\nSurface Area: " << getSurfaceArea()
        << "\nVolume: " << getVolume()
        << "\nInradius: " << getInradius()
        << "\nCircumradius: " << getCircumradius()
        << "\n\n";
}
