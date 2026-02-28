#include<iostream>
using namespace std;
class a{
	public:
		void displaya(){
		cout<<"class A"<<endl;
		}
};
class b:public a{
	public:
		void displayb(){
			cout<<"class b (derived a)"<<endl;
		}
};
class c:public a{
	public:
		void displayc(){
			cout<<"class c(derived a)"<<endl;
		}
};
int main(){
	cout<<"=== heirarical inhertence ==="<<endl;
	b objb;
	c objc;
	objb.displaya();
	objb.displayb();
	objc.displaya();
	objc.displayc();
}
