#include <iostream>

using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;

    long long* arr = new long long[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    long long movimientos = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            movimientos += (arr[i - 1] - arr[i]);
            arr[i] = arr[i - 1];
        }
    }

    cout << movimientos << "\n";

    delete[] arr;
    return 0;
}

