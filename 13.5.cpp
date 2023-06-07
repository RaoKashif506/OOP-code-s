//Program 13.5
//Write a class Result that contains roll no, name and marks of three subjects. The marks
//are stored in an array of integers. The class also contains the following member functions:
//.The input() function is used to input the values in data members
//.The show() function is used to displays the value of data members
//.The total() function returns the total marks of a student. 
//The avg() function returns the average marks of a student.
//.The program should create an object of the class and call the member functions.
#include<iostream>
using namespace std;
class result{
	private:
		int rno, marks[3];
		char name[50];
		public:
			void input()
			{
				cout<<"Enter Roll No: ";
				cin>>rno;
				cout<<"Enter Name: ";
				cin>>name;
				for(int i=0; i<3; i++)
				{
					cout<<"Enter Marks["<<i<<"]";
					cin>>marks[i];
				}
			}
			void show()
			{
				cout<<"Roll No ="<<rno<<endl;
				cout<<"Name = "<<name<<endl;
				for(int i=0; i<3; i++)
				cout<<"Marks["<<i<<"];"<<marks[i]<<endl;
			}
			int total()
			{
				int t=0;
				for(int i=0;i<3;i++)
				t=t+marks[i];
				return t;
			}
			float avg()
			{
				int t=0;
				for(int i=0;i<3;i++)
				t=t+marks[i];
				return t/3.0;
			}
};
int main()
{
	result r;
	r.input();
	r.show();
	cout<<"\nTotal marks="<<r.total()<<endl;
	cout<<"Average marks="<<r.avg()<<endl;
}