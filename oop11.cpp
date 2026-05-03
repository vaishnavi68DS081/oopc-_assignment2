//Generic Addition Function
#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    int int1 = 5, int2 = 10;
    double double1 = 3.5, double2 = 2.5;

    cout << "Sum of integers: " << add(int1, int2) << endl;
    cout << "Sum of doubles: " << add(double1, double2) << endl;

    return 0;
}
    