#include<iostream>
using namespace std;
class base{
	public:
		virtual void show(){
			cout<<"base class show() called"<<endl;
		}
};
class derived : public base{
	public:
		void show() override{
		cout<<"derived class show() called "<< endl;
	}
};
int main(){
	base*baseptr;
	derived d;
	baseptr=&d;
	baseptr->show();
	return 0;
}
