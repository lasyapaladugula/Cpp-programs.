#include<iostream>
using namespace std;
int main()
{
	int a,reversed=0;
	cout<<"Enter a number"<<endl;
	cin>>a;
	while(a!=0)
	{
		int digit = a%10;
		reversed = reversed*10+digit;
		a/=10;
	}
	cout<<"Reverse a number"<< reversed<<endl;
	return 0;
}
