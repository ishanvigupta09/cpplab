#include<iostream>
using namespace std;
class Student {
public:
    int marks;
    int rollno;
    void input() {
        cout << "Enter roll number: ";
        cin >> rollno;
        cout << "Enter marks: ";
        cin >> marks;
    }
    void display() {
        cout << "Roll number: " << rollno << endl;
        cout << "Marks: " << marks << endl;
    }
};
Student findTopper(Student s1, Student s2) {
    if (s1.marks > s2.marks) {
        return s1;
    } else {
        return s2;
    }
}
int main() {
    Student s1, s2, topper;
    s1.input();
    s2.input();
    topper = findTopper(s1, s2);
    cout << "Topper details:" << endl;
    topper.display();
    return 0;
}