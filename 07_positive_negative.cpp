#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number: ";
    if (!(cin >> number)) {
        cout << "Invalid input!" << endl;
        return 1;
    }

    if (number > 0)
        cout << "Positive number" << endl;
    else if (number < 0)
        cout << "Negative number" << endl;
    else
        cout << "Zero" << endl;

    return 0;
}
