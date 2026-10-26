#include<iostream>
using namespace std;

class Number{
    public:
        int num;
        void input()
        {
            cout<<"enter  no: ";
            cin>>num;
        }
        void display()
        {
            cout<<"Number is : "<<num<<"\n";
        }
    };

int add(Number n1,Number n2)
{
    int res=n1.num+n2.num;
    return res;
}

int  main()
{
    Number n1,n2;
    n1.input();
    n2.input();
    n1.display();
    n2.display();
    cout<<"Sum of "<<n1.num<<" and "<<n2.num<<" is "<<add(n1,n2);
}