#include<iostream>
using namespace std;

class Teacher{
	protected:
		char name[50],address[50];
		int age;
	public:
		void in_T()
		{
			cout<<"Enter Name : ";
			cin>>name;
			cout<<"Enter Age : ";
			cin>>age;
			cout<<"Enter Address : ";
			cin>>address;
			
		}
		void show_T()
		{
			cout<<"Name : "<<name<<endl;
			cout<<"Age : "<<age<<endl;
			cout<<"Address : "<<address<<endl;
		}
};

class Writer{
	protected:
		char name[50],address[50];
		int no_books;
	public:
		void in_W()
		{
			cout<<"Enter Name : ";
			cin>>name;
			cout<<"Enter Number of books Witten : ";
			cin>>no_books;
			cout<<"Enter Address : ";
			cin>>address;
			
		}
		void show_W()
		{
			cout<<"Name : "<<name<<endl;
			cout<<"Number of books Witten : "<<no_books<<endl;
			cout<<"Address : "<<address<<endl;
		}
};

class Scholar:public Teacher, public Writer{
	
};

int main()
{
	Scholar s;
	s.in_T();
	s.show_T();
	s.in_W();
	s.show_W();
}