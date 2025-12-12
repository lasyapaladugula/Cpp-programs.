#include<iostream>
using namespace std;
class A{
	public:
		void displayA(){
			cout<<"class A"<<endl;
		}
};
class B{
	public:
		void displayB(){
			cout<<"class B"<<endl;
		}
};
class C:public A,public B {
	public:
	void displayC(){
		cout<<"class c(derived from A & B)"<<endl;
	}
};
int main(){
	cout<<"===Multiple inhertence ==="<<endl;
	C objC;
	objC.displayA();
	objC.displayB();
	objC.displayC();
	return 0;
}
