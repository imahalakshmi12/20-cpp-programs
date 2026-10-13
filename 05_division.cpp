#include <iostream>
using namespace std;

int main() {
    double a, b;

    cout << "Enter two numbers: ";
    if (!(cin >> a >> b)) {
        cout << "Invalid input!" << endl;
        return 1;
    }

    if (b == 0) {
        cout << "Error: Division by zero is not allowed." << endl;
        return 1;
    }

    cout << "Quotient = " << a / b << endl;
    return 0;
}
