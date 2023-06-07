//Program 14.4
//Write a program that overloads binary addition operator +.

#include<iostream>
using namespace std;
class add{
	private:
		int a,b;
		public:
			add()
			{
				a=b=0;
			}
			void in()
			{
				cout<<"Enter a: ";
				cin>>a;
				cout<<"Enter b: ";
				cin>>b;
			}
			void show()
			{
				cout<<"a= "<<a<<endl;
				cout<<"b= "<<b<<endl;
			}
			add operator +(add p)
			{
				add temp;
				temp.a=p.a+a;
				temp.b=p.b+b;
				return temp;
			}
};
int main()
{
	add x,y,z;
	x.in();
	y.in();
	z=x+y;
	x.show();
	y.show();
	z.show();
}