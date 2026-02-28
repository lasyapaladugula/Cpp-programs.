#include<iostream>
using namespace std;
class a{
	public:
		void display(){
			cout<<"class a display()"<<endl;
		}
};
class b:virtual public a{
	void show(){
		cout<<"class b show()"<<endl;
	}
};
class c:virtual public a{
	void show(){
		cout<<"class c show()"<<endl;
	}
};
class d:public b,public c{
	void show(){
		cout<<"class d show()"<<endl;
	}
};
int main(){
	d d;
	d.display();
	return 0;
}
