#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;

    cout << "Enter an expression (e.g. 10 + 5): ";

    if (!(cin >> a >> op >> b)) {
        cout << "Invalid input!" << endl;
        return 1;
    }

    switch (op) {
        case '+':
            cout << "Result = " << a + b << endl;
            break;

        case '-':
            cout << "Result = " << a - b << endl;
            break;

        case '*':
            cout << "Result = " << a * b << endl;
            break;

        case '/':
            if (b == 0) {
                cout << "Error: Division by zero." << endl;
                return 1;
            }
            cout << "Result = " << a / b << endl;
            break;

        default:
            cout << "Unsupported operator." << endl;
            return 1;
    }

    return 0;
}
