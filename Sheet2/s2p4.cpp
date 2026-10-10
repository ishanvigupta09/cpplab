#include <iostream>
using namespace std;

class Book
{
private:
	string title;
	string author;

public:
	Book(string t, string a)
	{
		title = t;
		author = a;
	}

	void display()
	{
		cout << "Title: " << title << endl;
		cout << "Author: " << author << endl;
	}
};

int main()
{
	Book b("Harry Potter", "J.K. Rowling");
	b.display();

	return 0;
}