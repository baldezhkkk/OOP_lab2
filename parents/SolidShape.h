#pragma once
#include "Shape.h"
#include "FlatShape.h"

class SolidShape : public Shape {
public:
    virtual double getSurfaceArea() const = 0;
    virtual double getVolume() const = 0;
    virtual double getInradius() const = 0;
    virtual double getCircumradius() const = 0;
    virtual void setInradius(double r) = 0;
    virtual void setCircumradius(double r) = 0;
    virtual int getFaceCount() const = 0;
    virtual int getEdgesPerFace() const = 0;
    virtual int getFacesAtVertex() const = 0;
    virtual std::shared_ptr<FlatShape> getFaceShape() const = 0;
};