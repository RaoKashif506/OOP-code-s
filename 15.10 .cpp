//Program-15.10
//Write a class Person that has attributes of id, name and 
//a address has a constructor to mitialize, a member function to input and
//a member function to display data members. 
//Create 2nd class Student that inherits Person class.
//It has additional attributes of roll number and marks. 
//It also has member functions to input and display its data members.
//Create 3rd class Scholarship that inherits Student class.
//It has additional attributes of scholarship name and amount. 
//It also has member functions to input and display its data members.
#include<iostream>
using namespace std;
class person{
	public:
		int id;
		char name[50],address[100];
		parent()
		{
			id=0;
			name[0]='/0';
		}
		void input()
		{
			cout<<"Enter your id: ";
			cin>>id;
			cout<<"Enter your Name: ";
			cin>>name;
			cout<<"Enter your address: ";
			cin>>address;
		}
		void output()
		{
			cout<<"\nPersonal Information:\n ";
			cout<<"id= "<<id<<endl;
			cout<<"Name="<<name<<endl;
			cout<<"Address="<<address<<endl;
		}
};
class student: public person{
	public:
		int rno,marks;
		public:
			student()
			{
				rno=marks=0;
			}
			void input()
			{
				person::input();
				cout<<"Enter your Roll No: ";
				cin>>rno;
				cout<<"Enter your Marks: ";
				cin>>marks;
			}
			void output()
			{
				person::output();
				cout<<"\nEducational Information: \n";
				cout<<"Roll No="<<rno<<endl;
				cout<<"Marks="<<marks<<endl;
			}
};
class scholarship: public student{
	public:
		char sname[50];
		long amount;
		public:
			void input()
			{
				student::input();
				cout<<"Enter Scholarship Name: ";
				cin>>sname;
				cout<<"Enter scholarship Amount: ";
				cin>>amount;
			}
			void output()
			{
				student::output();
				cout<<"\nSchilarship Information:\n";
				cout<<"Scholarship Name: "<<sname<<endl;
				cout<<"Scholarship Amount: RS "<<amount<<endl;
			}
};
int main()
{
	scholarship obj;
	obj.input();
	obj.output();
}