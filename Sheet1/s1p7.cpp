#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    
    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 0;
    }

    long long first = 0, second = 1, nextTerm = 0;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; ++i) {
       
        if (i == 1) {
            cout << first;
            continue;
        }
        
        if (i == 2) {
            cout << ", " << second;
            continue;
        }
        
       
        nextTerm = first + second;
        first = second;
        second = nextTerm;
        
        cout << ", " << nextTerm;
    }
    
    cout << endl;
    return 0;
}
