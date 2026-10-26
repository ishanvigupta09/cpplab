#include<iostream>
using namespace std;
int main(){
    int numerator,denominator;
    cout<<"enter numerator: ";
    cin>>numerator;
    cout<<"enter denominator: ";
    cin>>denominator;
    try{
        if(denominator==0)
        {
            throw" division by zero is not accepted";
        }
        cout<<"result:"<<numerator/denominator;
    }
    catch(const char*e){
        cout<<"error"<<e<<"\n";
    cout<<*e;
    }
    return 0;
    }
