#include <iostream>
#include <iomanip>
using namespace std;

class Student {
private:
    int rollNo;
    double marks;

public:
    void setData(int rollNo, double marks) {
        this->rollNo = rollNo;
        this->marks = marks;
    }

    void display() {
        cout << "Roll No: " << rollNo << endl;
        cout << fixed << setprecision(2);
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s;

    int roll;
    double marks;

    cin >> roll >> marks;

    s.setData(roll, marks);
    s.display();

    return 0;
}