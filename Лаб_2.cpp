using namespace std;
#include <vector>
#include <iostream>
#include "Shape.h"
#include "FlatShape.h"
#include "SolidShape.h"
#include "RegularPolygon.h"
#include "Tetrahedron.h"
#include "EquilateralTriangle.h"
#include "Pentagon.h"
#include "Hexagon.h"
#include "Octahedron.h"
#include "Dodecahedron.h"
#include "Hexahedron.h"
#include "Icosahedron.h"

void printShapeInfo(const Shape& shape, int index) {
    cout << "---------------------\n";
    shape.printInfo();  // Поліморфний виклик
    cout << "Index figure: " << index << endl;
}

void testDynamicCast(const Shape* shape) {
    if (const FlatShape* flat = dynamic_cast<const FlatShape*>(shape)) {
        cout << "[FlatShape] Perimeter: " << flat->getPerimeter()
            << ", Area: " << flat->getArea() << "\n";
    }
    else if (const SolidShape* solid = dynamic_cast<const SolidShape*>(shape)) {
        cout << "[SolidShape] Surface Area: " << solid->getSurfaceArea()
            << ", Volume: " << solid->getVolume() << "\n";

        // Демонстрація доступу до плоскої грані
        auto face = solid->getFaceShape();
        cout << "  -> Face is a: " << face->getName()
            << ", Area: " << face->getArea() << "\n";
    }
    else {
        cout << "[Unknown Shape Type]\n";
    }
}

int main() {
    vector<shared_ptr<Shape>> shapes;
   
    int num, index;
    double size;
    while (true)
    {
        cout << "Select function:\n";
        cout << "1. Add figure\n";
        cout << "2. Modificate figure\n";
        cout << "3. Print all figures\n";
        cout << "4. Test dynamic cast\n";
        cout << "5. Delete all figures\n";
        cout << "6. Exit\n";

        cin >> num;
        if (num == 1)
        {
            cout << "---------------------\n";
            cout << "Select figure:\n";
            cout << "1. EquilateralTriangle\n";
            cout << "2. Hexagon\n";
            cout << "3. Pentagon\n";
            cout << "4. Square\n";
            cout << "5. Dodecahedron\n";
            cout << "6. Hexahedron\n";
            cout << "7. Icosahedron\n";
            cout << "8. Octahedron\n";
            cout << "9. Tetrahedron\n";

            cin >> num;
            cout << "---------------------\n";
            switch (num) {
            case 1:
                cout << "Enter size:";
                cin >> size;
                shapes.push_back(make_shared<EquilateralTriangle>(size));
                break;

            case 2:
                cout << "Enter size:";
                cin >> size;
                shapes.push_back(make_shared<Hexagon>(size));
                break;

            case 3:
                cout << "Enter size:";
                cin >> size;
                shapes.push_back(make_shared<Pentagon>(size));
                break;

            case 4:
                cout << "Enter size:";
                cin >> size;
                shapes.push_back(make_shared<RegularPolygon>(2, size));
                break;

            case 5:
                cout << "Enter size:";
                cin >> size;
                shapes.push_back(make_shared<Dodecahedron>(size));
                break;

            case 6:
                cout << "Enter size:";
                cin >> size;
                shapes.push_back(make_shared<Hexahedron>(size));
                break;

            case 7:
                cout << "Enter size:";
                cin >> size;
                shapes.push_back(make_shared<Icosahedron>(size));
                break;

            case 8:
                cout << "Enter size:";
                cin >> size;
                shapes.push_back(make_shared<Octahedron>(size));
                break;

            case 9:
                cout << "Enter size:";
                cin >> size;
                shapes.push_back(make_shared<Tetrahedron>(size));
                break;

            default:
                cout << "error\n";
            }
            cout << "---------------------\n";
        }
        else if (num == 2)
        {
            cout << "Select flat (0) or splid (1):";
            cin >> num;
            if (num == 0)
            {
                cout << "Select index:";
                cin >> num;
                index = num;
                shared_ptr<FlatShape> flat = dynamic_pointer_cast<FlatShape>(shapes[index]);

                cout << "Select figure parameter:\n";
                cout << "1. Size\n";
                cout << "2. Inradius\n";
                cout << "3. Circumradius\n";
                cin >> num;
                if (num == 1) {
                    cout << "Select new size:";
                    cin >> size;
                    flat->setSideLength(size);
                }
                else if (num == 2)
                {
                    cout << "Select new inradius:";
                    cin >> size;
                    flat->setInradius(size);
                }
                else if (num == 3)
                {
                    cout << "Select new circumradius:";
                    cin >> size;
                    flat->setCircumradius(size);
                }
            }
            else if (num == 1)
            {
                cout << "Select index:";
                cin >> num;
                index = num;
                shared_ptr<SolidShape> solid = dynamic_pointer_cast<SolidShape>(shapes[index]);

                cout << "Select figure parameter:";
                cout << "1. Size";
                cout << "2. Inradius";
                cout << "3. Circumradius";
                cin >> num;
                if (num == 1) {
                    cout << "Select new size:";
                    cin >> size;
                    solid->setSideLength(size);
                }
                else if (num == 2)
                {
                    cout << "Select new inradius:";
                    cin >> size;
                    solid->setInradius(size);
                }
                else if (num == 3)
                {
                    cout << "Select new circumradius:";
                    cin >> size;
                    solid->setCircumradius(size);
                }
            }
        }
        else if (num == 3)
        {
            index = 0;
            for (const auto& shape : shapes) {
                printShapeInfo(*shape, index);      // Робота через абстрактний інтерфейс
                index++;
            }
            cout << "---------------------\n";
        }
        else if (num == 4)
        {
            for (const auto& shape : shapes) {
                testDynamicCast(shape.get()); // Демонстрація dynamic_cast
                cout << "\n";
            }
            cout << "---------------------\n";

        }
        else if (num == 5)
        {
            cout << "Deleting all figures...\n";
            shapes.clear();
            cout << "Delete complete\n";
            cout << "---------------------\n";

        }
        else
        {
            cout << "Exit\n";
            return 0;
        } 
    }
    
}
