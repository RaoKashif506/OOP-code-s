//Program 15.6
//Write a program that declare two classes and defines a relationship between them
//using public inheritance.
#include<iostream>
using namespace std;
class parent{
	public:
		int a,b;
		
};
class child: public parent{
	public:
		void in()
		{
			cout<<"Enter a value of A: ";
			cin>>a;
			cout<<"Enter a value of B: ";
			cin>>b;
		}
		void out()
		{
			cout<<"A= "<<a<<endl;
			cout<<"B= "<<b<<endl;
		}
};
int main()
{
	child obj;
	obj.in();
	obj.out();
}