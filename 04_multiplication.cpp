#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    if (!(cin >> a >> b)) {
        cout << "Invalid input!" << endl;
        return 1;
    }

    cout << "Product = " << a * b << endl;
    return 0;
}
