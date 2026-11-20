#include <iostream>
using namespace std;

union Data {
    int x;
    float y;
    char z;
};

int main() {
    Data d;

    d.x = 10;
    cout << d.x << endl;

    d.y = 20.5;
    cout << d.y << endl;

    return 0;
}