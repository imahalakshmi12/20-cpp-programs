#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter a number: ";
    if (!(cin >> n)) {
        cout << "Invalid input!" << endl;
        return 1;
    }

    for (int i = 1; i <= 10; i++)
        cout << n << " x " << i << " = " << n * i << endl;

    return 0;
}
