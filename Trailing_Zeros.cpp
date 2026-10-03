#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long ceros = 0;

    while (n >= 5) {
        n /= 5;
        ceros += n;
    }

    cout << ceros << endl;

    return 0;
}

