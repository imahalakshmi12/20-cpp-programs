#include <iostream>
using namespace std;

int main() {
    int n;
    unsigned long long a = 0, b = 1;

    cout << "Enter number of terms (1-94): ";
    if (!(cin >> n) || n < 1 || n > 94) {
        cout << "Invalid input!" << endl;
        return 1;
    }

    for (int i = 0; i < n; i++) {
        cout << a;

        if (i < n - 1) {
            cout << " ";
        }

        if (i < n - 1) {
            unsigned long long next = a + b;
            a = b;
            b = next;
        }
    }

    cout << endl;
    return 0;
}
