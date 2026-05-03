//Template for Maximum Value
#include <iostream>
using namespace std;

template <typename T>
T max(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    int int1 = 5, int2 = 10;
    double double1 = 3.5, double2 = 2.5;

    cout << "Maximum of integers: " << max(int1, int2) << endl;
    cout << "Maximum of doubles: " << max(double1, double2) << endl;

    return 0;
}