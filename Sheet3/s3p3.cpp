#include<iostream>
using namespace std;
class Distance{
    private:
    int feet;
    int inches;
    public:
    void input(){
        cout<<"enter feet: ";
        cin>>feet;
        cout<<"enter inches: ";
        cin>>inches;
    }
    void display(){
        cout<<"Distance is "<<feet<<" feet and "<<inches<<" inches."<<endl;
    }
    Distance add(Distance d1,Distance d2){
        Distance d3;
        d3.feet=d1.feet+d2.feet;
        d3.inches=d1.inches+d2.inches;
        if(d3.inches>=12){
            d3.feet+=d3.inches/12;
            d3.inches=d3.inches%12;
        }
        return d3;
    }
};
int main(){
    Distance d1,d2,d3;
    d1.input();
    d2.input();
    d3=d3.add(d1,d2);
    d3.display();
    return 0;
}