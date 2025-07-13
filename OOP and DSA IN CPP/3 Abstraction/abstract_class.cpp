#include <iostream>
using namespace std;

// Abstract class
class Shape {
public:
    // Pure virtual function
    virtual void area() = 0;
};

// Derived class 1
class Circle : public Shape {
    float radius;
public:
    Circle(float r) {
        radius = r;
    }

    void area() override {
        cout << "Area of Circle = " << 3.14 * radius * radius << endl;
    }
};

// Derived class 2
class Rectangle : public Shape {
    float length, breadth;
public:
    Rectangle(float l, float b) {
        length = l;
        breadth = b;
    }

    void area() override {
        cout << "Area of Rectangle = " << length * breadth << endl;
    }
};

int main() {
    // Shape s; ❌ Not allowed – abstract class can't be instantiated

    Circle c(5);
    Rectangle r(4, 6);

    Shape* s1 = &c;
    Shape* s2 = &r;

    s1->area();  // Calls Circle's area
    s2->area();  // Calls Rectangle's area

    return 0;
}
