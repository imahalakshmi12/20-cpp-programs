#include <iostream>
using namespace std;

int main() {
    int n;
    unsigned long long factorial = 1;

    cout << "Enter a number (0-20): ";
    if (!(cin >> n) || n < 0 || n > 20) {
        cout << "Enter an integer between 0 and 20." << endl;
        return 1;
    }

    for (int i = 1; i <= n; i++)
        factorial *= i;

    cout << "Factorial = " << factorial << endl;

    return 0;
}
