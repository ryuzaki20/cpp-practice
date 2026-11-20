#include <iostream>
using namespace std;

void swapNumbers(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a, b;

    cin >> a >> b;

    cout << a << " " << b << endl;

    swapNumbers(a, b);

    cout << a << " " << b << endl;

    return 0;
}