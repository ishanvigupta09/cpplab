#include<iostream>
using namespace std;
class Number{
    private:
    int num;
    public:
    void input(){
        cout<<"enter  no: ";
        cin>>num;
    }
    void isEven(){
        if (num%2==0)
        cout<<"number is even"<<endl;
        else
        cout<<"number is odd"<<endl;
        
    }
    void displayResult()
    {
        isEven();
    }
};
int main(){
    Number n;
    n.input();
    n.displayResult();
    return 0;
}

