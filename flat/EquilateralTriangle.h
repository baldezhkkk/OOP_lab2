#pragma once
#include "FlatShape.h"
#include <cmath>
#include <iostream>
#include <string>

class EquilateralTriangle : public FlatShape {
    double side;

public:
    EquilateralTriangle(double s);

    std::string getName() const override;
    int getVertexCount() const override;
    int getEdgeCount() const override;
    double getSideLength() const override;
    void setSideLength(double length) override;

    double getPerimeter() const override;
    double getArea() const override;
    double getInradius() const override;
    double getCircumradius() const override;
    void setInradius(double r) override;
    void setCircumradius(double r) override;

    void printInfo() const override;
};
