#include<iostream>
using namespace std;
#include <math.h>

void check_prime(int n)
{
    if(n<=1)
        cout<<"Number is not prime \n";
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<"Number is not prime \n";
            return;
        }
    }
    cout<<"Number is prime \n";
}

int main()
{
    int n,res;
    cout<<"Enter a number \n ";
    cin>>n;
    check_prime(n);
    return 0;
}