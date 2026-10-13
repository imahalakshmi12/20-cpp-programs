#include <iostream>
using namespace std;

int main() {
    int a, b, temp;

    cout << "Enter two numbers: ";
    if (!(cin >> a >> b)) {
        cout << "Invalid input!" << endl;
        return 1;
    }

    temp = a;
    a = b;
    b = temp;

    cout << "After swapping: " << a << " " << b << endl;

    return 0;
}
