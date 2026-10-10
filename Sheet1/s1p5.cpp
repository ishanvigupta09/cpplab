#include<iostream>
using namespace std;
int main() {
	int n,original_num,rev=0,rem;
	cout<<"enter a number:  ";
	cin>>n;
	original_num=n;
	while(n!=0) {
		rem= n%10;
		rev= rev* 10+ rem;
		n= n/10;
	}
	if(original_num==rev) {
		cout<<"Number is Palindrome!!";
	}
	else {
		cout<<"Number is not Palindrome";
	}
	return 0;

}
