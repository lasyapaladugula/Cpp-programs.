#include<iostream>
using namespace std;
int factorial(int n) {
	if (n<=1) {
		return 1;
	} else {
		return n*(n-1);
	}
}
	int main() {
		int number;
		cout<<"Enter a number:"<<endl;
		cin>>number;
		if (number < 0) {
			cout<<"The factorial of a negative numbers is not defined"<<endl;
		} else {
	       int result=factorial(number);
	       cout<<"Factorial of"<<number<<"="<<result<<endl;
		}
			return 0;
	}

   
