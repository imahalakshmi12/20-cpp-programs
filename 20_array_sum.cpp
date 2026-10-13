#include <iostream>
using namespace std;

int main() {
    int n;
    long long sum = 0;

    cout << "Enter array size (1-100): ";

    if (!(cin >> n) || n < 1 || n > 100) {
        cout << "Invalid array size!" << endl;
        return 1;
    }

    int arr[100];

    cout << "Enter " << n << " integers: ";

    for (int i = 0; i < n; i++) {
        if (!(cin >> arr[i])) {
            cout << "Invalid input!" << endl;
            return 1;
        }

        sum += arr[i];
    }

    cout << "Array sum = " << sum << endl;
    return 0;
}
