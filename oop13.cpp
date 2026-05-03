//Template Class
//Create a template class Calculator with functions:
//add()
//subtract()
//multiply()
//
//Use it for both int and float.

#include <iostream>
using namespace std;

template <class T>
class Calculator {
    T a, b;

public:
    Calculator(T x, T y) {
        a = x;
        b = y;
    }

    void add() {
        cout << "Addition = " << a + b << endl;
    }

    void subtract() {
        cout << "Subtraction = " << a - b << endl;
    }

    void multiply() {
        cout << "Multiplication = " << a * b << endl;
    }
};

int main() {

    // Integer type
    Calculator<int> intCalc(10, 5);

    cout << "Integer Operations:" << endl;
    intCalc.add();
    intCalc.subtract();
    intCalc.multiply();

    cout << endl;

    // Float type
    Calculator<float> floatCalc(2.5, 1.5);

    cout << "Float Operations:" << endl;
    floatCalc.add();
    floatCalc.subtract();
    floatCalc.multiply();

    return 0;
}
