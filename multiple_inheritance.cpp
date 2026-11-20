#include <iostream>
using namespace std;

class Student{
    public:
    string name;
    int roll;

    void getStudent(){
        cin>>name>>roll;
    }
};

class Marks {
public:
    int m1, m2, m3;

    void getMarks() {
        cin >> m1 >> m2 >> m3;
    }
};

class Result : public Student, public Marks {
public:
    void display() {
        int total = m1 + m2 + m3;

        // Calculate percentage here
        float perc = total/3.0*100;
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "Total: " << total << endl;

        // Display percentage here
        cout<<"Percentage: "<<perc;
    }
};
