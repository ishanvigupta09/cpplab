#include<iostream>
using namespace std;
class Maximum{
    public:
    int max(int a,int b){
        if(a>b)
        return a;
        else
        return b;
    }
    int max(int a,int b,int c){
        if(a>b && a>c)
        return a;
        else if(b>a && b>c)
        return b;
        else
        return c;
    }
    float max(float a,float b){
        if(a>b)
        return a;
        else
        return b;
    }
};
int main(){
    Maximum m;
    int a,b,c;
    float x,y;
    cout<<"Enter two integers: ";
    cin>>a>>b;
    cout<<"Maximum of "<<a<<" and "<<b<<" is: "<<m.max(a,b)<<endl;

    cout<<"Enter three integers: ";
    cin>>a>>b>>c;
    cout<<"Maximum of "<<a<<", "<<b<<" and "<<c<<" is: "<<m.max(a,b,c)<<endl;

    cout<<"Enter two floating-point numbers: ";
    cin>>x>>y;
    cout<<"Maximum of "<<x<<" and "<<y<<" is: "<<m.max(x,y)<<endl;

    return 0;
}