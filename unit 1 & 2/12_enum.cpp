#include <iostream>
using namespace std;

enum Day {
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY
};

int main() {
    Day today = WEDNESDAY;

    cout << today;

    return 0;
}