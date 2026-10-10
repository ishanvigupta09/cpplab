#include <iostream>
using namespace std;

int main() {
    int n, key, count = 0;

    cout << "Enter size of array: ";
    cin >> n;

    int a[n];

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Enter element to count: ";
    cin >> key;

    for(int i = 0; i < n; i++) {
        if(a[i] == key) {
            count++;
        }
    }

    cout << "Element occurs " << count << " times";

    return 0;
}