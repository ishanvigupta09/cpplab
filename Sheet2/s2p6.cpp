#include<iostream>
using namespace std;
class ArraySum{
    private:
    int arr[10];
    public:
    ArraySum(){
        cout<<"enter the 10 elements of array:  ";
        for(int i=0;i<10;i++)
        cin>>arr[10];
    }
    void findSum(){
        int sum=0;
        for(int i=0;i<10;i++)
        sum= sum+arr[i];
        cout<<"sum="<<sum<<endl;
    }
    
};
int main(){
    ArraySum a;
    a.findSum();
    return 0;
}
