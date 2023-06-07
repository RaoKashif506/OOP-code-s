//16.4 Virtual Functionsect.
//Virtual Means existing in effect but not in reality.
//A type of function that appeak to exist in some part of a program but does not 
//exist really is called virtual function.
//Virtual functions are used to implement polymorphism.
//They enable the user to execute completely different functions by the same function call.
//A virtual function is defined in the parent class and can be overridden in child classes.
//It is defined by using the keyword virtual.
#include<iostream>
using namespace std;
class A{
	public:
		virtual void show()
		{
			cout<<"Parent Class A.... "<<endl;
		}
};
class B: public A{
	public:
		void show()
		{
			cout<<"Child B.... "<<endl;
		}
};
class C: public A{
	public:
		void show()
		{
			cout<<"Child Class C.... "<<endl;
		}
};
int main()
{
	A obj1;
	B obj2;
	C obj3;
	A*ptr;
	ptr=&obj1;
	ptr->show();
	ptr=&obj2;
	ptr->show();
	ptr=&obj3;
	ptr->show();
}



