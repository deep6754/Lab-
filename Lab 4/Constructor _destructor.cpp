
#include <iostream>
#include <cmath>
using namespace std;

class Shape {
private:
    double radius, length, width;

public:
    Shape(double r) {
        radius = r;
        length = 0;
        width = 0;
        cout << "Circle created." << endl;
    }

    Shape(double l, double w) {
        length = l;
        width = w;
        radius = 0;
        cout << "Rectangle created." << endl;
    }
    ~Shape() {
        cout << "Shape object destroyed." << endl;
    }
    double calculateCirclePerimeter() {
        return 2 * M_PI * radius;
    }
    double calculateRectanglePerimeter() {
        return 2 * (length + width);
    }
};

int main() {
    Shape circle(5);
    cout << "Perimeter of circle: "
         << circle.calculateCirclePerimeter() << endl;

    Shape rectangle(4, 6);
    cout << "Perimeter of rectangle: "
         << rectangle.calculateRectanglePerimeter() << endl;

    return 0;
}
