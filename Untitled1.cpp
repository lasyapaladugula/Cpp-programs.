#include<iostream>
#include<cmath>
using namespace std;
int main() {
	double a,b,c;
	double discriminant,root1,root2,realpart,imaginarypart;
    cout<<"Enter coefficients a, b, and c: ";
	cin>>a>>b>>c;
	discriminant=b*b-4*a*c;
	if (discriminant>0) {
		cout<<"The roots are real and different"<<endl;
		root1=-b+sqrt(discriminant)/(2*a);
		root2=-b-sqrt(discriminant)/(2*a);
		cout<<"Root1= "<<root1<<endl;
		cout<<"Root2= "<<root2<<endl;
	} else if (discriminant==0) {
		cout<<"The roots are real and equal"<<endl;
		root1=-b/(2*a);
		root2=-b/(2*a);
		cout<<"Root1= "<<root1<<endl;
		cout<<"Root2= "<<root2<<endl;
	} else {
		cout<<"The roots are complex and imaginary"<<endl;
		realpart=-b/(2*a);
		imaginarypart=sqrt(-discriminant)/(2*a);
		cout<<"Root1= "<<realpart<<"+"<<imaginarypart<<"i"<<endl;
		cout<<"Root2= "<<realpart<<"-"<<imaginarypart<<"i"<<endl;
		
	}
	return 0;
}
