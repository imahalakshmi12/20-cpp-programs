#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter an integer: ";
    if (!(cin >> number)) {
        cout << "Invalid input!" << endl;
        return 1;
    }

    if (number % 2 == 0) {
        cout << number << " is even." << endl;
    } else {
        cout << number << " is odd." << endl;
    }

    return 0;
}
