#include <iostream>
using namespace std;

int main() {
    long long n, original, reversed = 0;

    cout << "Enter a non-negative integer: ";
    if (!(cin >> n) || n < 0) {
        cout << "Invalid input!" << endl;
        return 1;
    }

    original = n;

    do {
        int digit = static_cast<int>(n % 10);
        reversed = reversed * 10 + digit;
        n /= 10;
    } while (n > 0);

    if (original == reversed)
        cout << original << " is a palindrome." << endl;
    else
        cout << original << " is not a palindrome." << endl;

    return 0;
}
