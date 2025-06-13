# OOP Lab #2 — Geometric Figures Hierarchy (C++)

This project is a part of the **Object-Oriented Programming** course (Lab #2) and demonstrates the use of core OOP concepts in C++: inheritance, polymorphism, abstract classes, dynamic type casting, and virtual methods.

## Project Overview

The project models both **2D flat shapes** and **3D solid shapes** using a well-structured class hierarchy. It features a **console-based menu interface** that allows users to:

* Create geometric figures
* Modify their properties
* View detailed information
* Test polymorphic behavior via `dynamic_cast`
* Delete all created figures

---

##  Features

###  Class Structure

```
                 Shape (abstract)
                  /       \
        FlatShape         SolidShape (both abstract)
        /   |   \              /   |   |   \
 Triangle  ...  Hexagon   Tetrahedron ... Icosahedron
```

### Abstract Classes

* `Shape`: Base class with virtual methods like `getName()`, `getVertexCount()`, `printInfo()`, `getEdgeCount()`, etc.
* `FlatShape`: Derived class with methods like `getArea()`, `getPerimeter()`, `getInradius()`, `getCircumradius()`.
* `SolidShape`: Derived class with methods like `getSurfaceArea()`, `getVolume()`, and `getFaceShape()` (returns the typical face of a polyhedron as a `FlatShape`).

### Concrete Classes

* **Flat figures**: `EquilateralTriangle`, `Square`, `Pentagon`, `Hexagon`, `RegularPolygon`
* **Solid figures**: `Tetrahedron`, `Octahedron`, `Dodecahedron`, `Hexahedron`, `Icosahedron`

### ⚙Console Menu

The user interface provides the following options:

1. **Add figure** – Create new flat or solid shape
2. **Modificate figure** – Change side length or radius values
3. **Print all figures** – Display detailed figure info using polymorphic `printInfo()` calls
4. **Test dynamic cast** – Demonstrate safe type casting between base and derived types
5. **Delete all figures** – Clean memory using `shared_ptr`
6. **Exit**

---

## Concepts Demonstrated

* **Inheritance** (single and multiple)
* **Virtual functions** and **virtual destructors**
* **Abstract classes** and **pure virtual functions**
* **Runtime polymorphism**
* **Safe downcasting** via `dynamic_cast`
* **Memory management** using `shared_ptr`


