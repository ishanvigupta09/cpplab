#include<iostream>
using namespace std;
class Marks{
    private:
    int arr[5];
    public:
    Marks(){
        cout<<"enter marks of 5 students: ";
        for (int i=0;i<5;i++)
        cin>>arr[i];
    }
    int findHighest(){
        int highest= arr[0];
        for (int i=1;i<5;i++){
            if(arr[i]>highest){
                highest=arr[i];
            }
        }
        return highest;
    }
        void displayResult(){
            cout<<"highest marks="<< findHighest();
        }
        
    };

int main(){
    Marks m;
    m.displayResult();
    return 0;
} 