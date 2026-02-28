#include<iostream>
using namespace std;
class Animal{
	public:
	void eat(){
		cout<<"Animal is eating."<<endl;
	}
};
class Dog : public Animal{
	public:
		void bark(){
			cout<<"Dog is barking."<<endl;
		}
};
int main(){
	cout<<"===single inhertence ==="<<endl;
	Dog d;
	d.eat();
	d.bark();
	return 0;
}
