#include <iostream>
using namespace std;

int main() {
    int n, key;
    cout << "Enter size of array: ";
    cin >> n;

    int a[n];

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    for(int i = 0; i < n; i++) {
        if(a[i] == key) {
            cout << "Element found at index " << i;
            return 0;
        }
    }

    cout << "Element not found";

    return 0;
}