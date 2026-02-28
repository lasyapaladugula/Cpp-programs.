#include<iostream>
using namespace std;
int main()
{
	char op;
	float a,b;
	cout<<"Enter the operator(+,-,*,/):"<<endl;
	cin>>op;
	cout<<"Enter the values of a and b"<<endl;
	cin>>a>>b;
	switch(op){
		case '+':
			cout<<"a+b = "<<a+b<<endl;
			break;
			case '-':
				cout<<"a-b= "<<a-b<<endl;
				break;
				case '*':
					cout<<"a*b = "<<a*b<<endl;
					break;
					case'/':
						if (b!=0)
						cout<<"a/b = "<<a/b<<endl;
						else
						cout<<"Error"<<a/b<<endl;
						break;
						default:
							cout<<"Invalid operator"<<endl;
	}
	return 0;
}
