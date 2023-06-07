//Program 16.2
//Write a class that contains an attribute name, a function to input 
//and a function to display name. 
//Creates array of pointers in wich each element referes to an object of the class.
#include<iostream>
using namespace std;
class person{
	private:
		char name[50];
		public:
			void get()
			{
				cout<<"Enter your Name: ";
				cin>>name;
			}
			void show()
			{
				cout<<"Your Name= "<<name<<endl;
			}
			
};
int main()
{
	person*ptr[5];
	int i;
	for(i=0;i<5;i++)
	{
		ptr[i]=new person;
		ptr[i]->get();
	}
	for(i=0;i<5;i++)
	{
		ptr[i]->show();
	}
}