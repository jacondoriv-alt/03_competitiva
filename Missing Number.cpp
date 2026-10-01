#include <iostream>
#include <vector>

using namespace std;

int main() {
    long n;
    cin >> n;
    vector<long> arr(n - 1); 
    
    for(long i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }
	
    for (long i = 0; i < n - 1; i++) {
        for (long j = 0; j < n - i - 2; j++) { 
            if (arr[j] > arr[j + 1]) {
                long aux = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = aux;
            }
        }
    }
    
 
    for(long i = 0; i < n - 1; i++) {
        if (arr[i] != i + 1) {
            cout << i + 1; 
            return 0;      
        }
    }
    
    cout << n; 
    
    return 0;
}

