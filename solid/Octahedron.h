#pragma once

#include "SolidShape.h"
#include <string>
#include <memory>

class Octahedron : public SolidShape {
private:
    double side;

public:
    Octahedron(double s);

    std::string getName() const override;
    int getVertexCount() const override;
    int getEdgeCount() const override;
    double getSideLength() const override;
    void setSideLength(double length) override;

    double getSurfaceArea() const override;
    double getVolume() const override;

    double getInradius() const override;
    double getCircumradius() const override;
    void setInradius(double r) override;
    void setCircumradius(double r) override;

    int getFaceCount() const override;
    int getEdgesPerFace() const override;
    int getFacesAtVertex() const override;

    std::shared_ptr<FlatShape> getFaceShape() const override;

    void printInfo() const override;
};
