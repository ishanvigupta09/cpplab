#include<iostream>
using namespace std;
int main() {
	int arr[4]= {1,3,5,7};
	int smallest=arr[0];
	for(int i=0; i<5; i++) {
		if (arr[i]<smallest) {
			smallest=arr[i];
		}
	}
	cout<<"Smallest Number is "<<smallest;
	return 0;
}