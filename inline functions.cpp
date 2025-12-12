#include<iostream>
using namespace std;
inline int add(int a,int b)
{
	return a+b;
}
inline double add(double a,double b)
{
	return a+b;
}
inline int add(int a,int b,int c)
{
	return a+b+c;
}
int main()
{
	cout<<"add(5,15)= "<<add(5,15)<<endl;
	cout<<"add(1.5,2.6)= "<<add(1.5,2.6)<<endl;
	cout<<"add(5,6,9)= "<<add(5,6,9)<<endl;
	return 0;
}
