// #include <iostream>
// using namespace std;

// class Shape {
// public:
//     int breadth;
//     int length;

// public:
//     Shape(int breadth, int length) : breadth(breadth), length(length) {}
// };

// class Rectangle : public Shape {
// public:
//     Rectangle(int breadth, int length) : Shape(breadth, length) {}

//     int area() const {
//         return breadth * length;
//     }
// };

// int main() {
//     Rectangle rectangle(10, 5);
//     cout << "Area: " << rectangle.area() << '\n';
// }


#include <iostream>
#include <cmath>
using namespace std;

// Base class
class Shape {
protected:
    float radius;

public:
    void getRadius() {
        cout << "Enter radius: ";
        cin >> radius;
    }
};


class Circle : public Shape {
public:
    void calculateArea() {
        cout << "Area of Circle: "
             << 3.14159 * radius * radius << endl;
    }
};


class Sphere : public Shape {
public:
    void calculateArea() {
        cout << "Surface Area of Sphere: "
             << 4 * 3.14159 * radius * radius << endl;
    }
};

int main() {
    Circle c;
    Sphere s;

    cout << "--- Circle ---" << endl;
    c.getRadius();
    c.calculateArea();

    cout << "\n--- Sphere ---" << endl;
    s.getRadius();
    s.calculateArea();

    return 0;
}

#include <iostream>
using namespace std;

// Base class 1
class Father {
public:
    string fatherName;

    void getFatherName() {
        cout << "Enter father's name: ";
        cin >> fatherName;
    }
};

// Base class 2
class Mother {
public:
    string motherName;

    void getMotherName() {
        cout << "Enter mother's name: ";
        cin >> motherName;
    }
};

// Derived class
class Child : public Father, public Mother {
public:
    void display() {
        cout << "\nFather's Name: " << fatherName << endl;
        cout << "Mother's Name: " << motherName << endl;
    }
};

int main() {
    Child c;

    c.getFatherName();
    c.getMotherName();

    cout << "\n--- Child's Parent Details ---\n";
    c.display();

    return 0;
}