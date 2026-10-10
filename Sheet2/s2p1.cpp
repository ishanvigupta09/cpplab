#include<iostream>
using namespace std;

class Student {
private:
	string name;
	int rollno;
public:
	void setData() {
		cout<<"enter student name: ";
		cin>>name;

		cout<<"enter student roll no: ";
		cin>>rollno;
	}
	void displayData() {
		cout<<"Student name: "<<name<<endl;
		cout<<"Student rollno: "<<rollno<<endl;
	}
};
int main() {
	Student s;
	s.setData();
	s.displayData();

	return 0;
}