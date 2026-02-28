#include<iostream>
using namespace std;
class number {
	private:
		int value;
		public:
		//constructor
		number(int v = 0) {
			value = v;
		}
		//Friend function to overload unary minus(-)
		friend number operator-(number n);
		//Friend function to overload binary plus(+)
		friend number operator+(number n1, number n2);
		void display() const {
		cout<<"Value="<<value<<endl;
		} 	
};
//Unary minus operator using friend function
number operator-(number n) {
	return number(-n.value);
}
//Binary addition operator using friend function
number operator+(number n1, number n2) {
	return number(n1.value + n2.value);
}
int main() {
	number a(15),b(5),result;
	cout<<"Original values:"<<endl;
	a.display();
	b.display();
	result = a + b;
	cout<<"After Binary + Operator(a + b):"<<endl;
	result.display();
	result = -a;
	cout<<"After Unary-Operator(-a):"<<endl;
	result.display();
	return 0;
}
