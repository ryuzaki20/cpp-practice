
#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int roll;

    void input() {
        cin >> name >> roll;
    }
};

class Test : public Student {
public:
    int m1, m2;

    void getMarks() {
        cin >> m1 >> m2;
    }
    void display(){
        cout<<name<<roll<<m1<<m2;
    }

};
class Result : public Test{
    public:
    void calculateTotal(){
        int t = m1 + m2;
        cout << "Total marks: "<< t;
    }
};

int main() {
    Result r;

    // Call the Student input function
    r.input();
    // Call the Test marks function
    r.getMarks();
    // Display name, roll and marks
    r.display();
    r.calculateTotal()


    return 0;
};
