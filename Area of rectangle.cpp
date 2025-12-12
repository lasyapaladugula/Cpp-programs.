#include<iostream>
using namespace std;
class rectangle{
private:
		int width;
		int length; 
public:
			rectangle (int l,int w)
			{
				length=1;
				width=w;
			}
			friend int calculatearea(rectangle r);
};
int calculatearea(rectangle r)
{
	return r.length * r.width;
}
int main()
{
	rectangle rect(10,5);
	int area=calculatearea(rect);
	cout<<"Area of rectangle= "<<area<<endl;
	return 0;
}
