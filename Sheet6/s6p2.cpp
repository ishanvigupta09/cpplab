#include <iostream>
#include <cmath>
using namespace std;

class NegativeNumberException : public exception {
public:
    const char* what() const noexcept {
        return "This is a negative number exception";
    }
};

int main() {
    int n;
    cout << "enter a number: ";
    cin >> n;
    
    try {
        if (n < 0)
            throw NegativeNumberException();
        else
            cout << sqrt(n) << endl;
    }
    catch (NegativeNumberException& e) {
        cout << e.what() << endl;
    }
    
    return 0;
}