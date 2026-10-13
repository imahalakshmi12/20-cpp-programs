#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter three numbers: ";
    if (!(cin >> a >> b >> c)) {
        cout << "Invalid input!" << endl;
        return 1;
    }

    if (a >= b && a >= c)
        cout << "Largest = " << a << endl;
    else if (b >= a && b >= c)
        cout << "Largest = " << b << endl;
    else
        cout << "Largest = " << c << endl;

    return 0;
}
