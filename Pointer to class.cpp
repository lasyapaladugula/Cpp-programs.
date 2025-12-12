#include<iostream>
using namespace std;
class number{
	private:
		int value;
	public:
		void set(int v){
			value = v;
		}
		void show(){
		cout<<"value:"<<value<<endl;	
		}
};
int main(){
	number n;
	number * ptr=&n;
	ptr->set(100);
	ptr->show();
	return 0;
}
