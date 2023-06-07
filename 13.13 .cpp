//Program 13.13
//Write a class Travel that has the attributes of kilometers and hours. 
//A constructor with no parameter initializes both data members to 0.
//A member function get() inputs the values and function show) displays the values. 
//It has a member function add() that takes an object of type Travel to add the kilometers and 
//hours of calling object and the parameter.

#include<iostream>
using namespace std;
class travel{
	private:
		int km,hr;
		public:
		travel()
		{
			km=hr=0;
		}
		void get()
		{
			cout<<"Enter Kilometers traveled";
			cin>>km;
			cout<<"Enter Hours Traveled: ";
			cin>>hr;
		}
		void show()
		{
			cout<<"You Traveled "<<km<<" in "<<hr<<" Hours"<<endl;		
		}
		void add(travel p)
		{
			travel t;
			t.km=km+p.km;
			t.hr=hr+p.hr;
			cout<<"Total Traveling is "<<t.km<<" kilometers in "<<t.hr<<" Hours"<<endl;
		}		
};
int main()
{
	travel my,your;
	my.get();
	my.show();
	your.get();
	your.show();
	my.add(your);
}