#pragma once
#include <iostream>
#include <string>

const double M_PI = 3.14159265358979323846;

class Shape {
public:
    virtual std::string getName() const = 0;
    virtual int getVertexCount() const = 0;
    virtual int getEdgeCount() const = 0;
    virtual double getSideLength() const = 0;
    virtual void setSideLength(double length) = 0;
    virtual void printInfo() const = 0;
    virtual ~Shape() = default;

};
