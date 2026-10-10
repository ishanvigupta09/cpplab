#include<iostream>
using namespace std;
int main(){
int n;
   cout<<"Enter a Number: ";
   cin>>n;
   int fact=1;
   for(int i=1;i<=n;i++){
       fact= fact*i;
   }
   cout<<"factorial is "<<fact;
   return 0;
}
