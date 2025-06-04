#pragma once
#include "FlatShape.h"

class RegularPolygon : public FlatShape {
protected:
    int sides;
    double side;

public:
    RegularPolygon(int n, double s);
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