#include<iostream>
using namespace std;
class Area{
    public:
    
    void Calculate(int side){
        cout<<"Area of square is: "<<side*side<<endl;
    }
    void Calculate(int length,int breadth){
        cout<<"Area of rectangle is: "<<length*breadth<<endl;
    }
    void Calculate(double radius){
        cout<<"Area of circle is: "<<3.14*radius*radius<<endl;
    }
};
int main(){
    Area a1,a2,a3;
    a1.Calculate(5);
    a2.Calculate(5,10);
    a3.Calculate(7.5);
    return 0;
}