#pragma once
#include <iostream>
#include "Shape.h"

class FlatShape : public Shape {
public:
    virtual double getPerimeter() const = 0;
    virtual double getArea() const = 0;
    virtual double getInradius() const = 0;
    virtual double getCircumradius() const = 0;
    virtual void setInradius(double r) = 0;
    virtual void setCircumradius(double r) = 0;
};
