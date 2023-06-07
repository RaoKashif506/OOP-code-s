//Program 15.3
//Write a class Person that has the attributes of id, name and address.
//It has a constructor to initialize,
//a member function to input and a member function to display data members.
//Create another class Student that inherits Person class.
//It has additional attributes of roll number and marks. 
//It also has member function to input and display its data members.
#include<iostream>
using namespace std;
class person{
	protected:
		int id;
		char name[50],address[100];
		public:
			person()
			{
				id=0;
				name[0]='\0';
				address[0]='\0';
			}
			void Getinfo()
			{
				cout<<"Enter your id: ";
				cin>>id;
				cout<<"Enter your name: ";
				gets(name);
				cout<<"Enter your address: ";
				gets(address);
			}
			void showinfo()
			{
				cout<<"\nYour Personal information is as follows:\n ";
				cout<<"ID= "<<id<<endl;
				cout<<"Name="<<name<<endl;
				cout<<"Address="<<address<<endl;
			}
};
class student: public person{
	private:
		int rno,marks;
		public:
			student()
			{
				rno=marks=0;
			}
				void getedu()
				{
					cout<<"Enter your Roll No: ";
					cin>>rno;
					cout<<"Enter Your Marks: ";
					cin>>marks;
				}
				void showedu()
			{
				cout<<"\nYour Education Information is as Follows:\n ";
				cout<<"Roll No="<<rno<<endl;
				cout<<"Marks="<<marks<<endl;
			}
			
};
int main()
{
	student s;
	s.Getinfo();
	s.getedu();
	s.showinfo();
	s.showedu();
}
