//15.4 Function Overriding
//Write a program that declares two classes. The parent class is called Simple that has
//two data members a and b to store two numbers. It also has four member functions: 
//The add()function adds two numbers and displays the result.
//The sub() function subtracts two numbers and displays the result.
//The mul() function multiplies two numbers and displays the result
//The div() function multiplies two numbers and displays the result
#include<iostream>
using namespace std;
class parent{
	public:
		int a,b;
		parent()
		{
			a=b=0;
		}
		void in()
		{
			cout<<"Enter a value of A: ";
			cin>>a;
			cout<<"Enter a value of B: ";
			cin>>b;
		}
		void add()
		{
			cout<<"A+B=: "<<a+b<<endl;
		}
		void sub()
		{
			cout<<"A-B=: "<<a-b<<endl;
		}
		void mul()
		{
			cout<<"A*B=: "<<a*b<<endl;
		}
		void div()
		{
			cout<<"A/B=: "<<a/b<<endl;
		}
};
class child: public parent{
	public:
		void add()
		{
			if(a<=0 || b<=0)
			cout<<"Invalide value: ";
			else
			parent::add();
		}
			void sub()
		{
			if(a<=0 || b<=0)
			cout<<"Invalide value: ";
			else
			parent::sub();
		}
			void mul()
		{
			if(a<=0 || b<=0)
			cout<<"Invalide value: ";
			else
			parent::mul();
		}
			void div()
		{
			if(a<=0 || b<=0)
			cout<<"Invalide value: ";
			else
			parent::div();
		}
};
int main()
{
	child obj;
	obj.in();
	obj.add();
	obj.sub();
	obj.mul();
	obj.div();
}
