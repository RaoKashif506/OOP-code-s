//Program 16.1
//Write a class with an integer data member, a function to input and
//a function to display it Creates an object of the class using pointer and 
//calls its member functions.
#include<iostream>
using namespace std;
class test{
	private:
		int n;
		public:
			void in()
			{
				cout<<"Enter Number: ";
				cin>>n;
			}
			void out()
			{
				cout<<"The Value of n= "<<n;
			}
};
int main()
{
	test*ptr;
	ptr=new test;
	ptr->in();
	ptr->out();
}