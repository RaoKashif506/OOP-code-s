//Program 13.6
//Write a class Array that contains an array of integers to store five values.
//It contains the following member functions:
//.The fill() function is used to fill the array with values from the user.
//.The display() function is used to display the values of array.
//.The max() function shows the maximum value in the array.
//.The min() function shows the minimum value in the array.
//.All member function should be defined outside the class.
#include<iostream>
using namespace std;
class array{
	public:
	int a[5];
	public:
	void fill();
	void display();
	int max();
	int min();	
};
void array::fill()
{
	for(int i=0;i<5;i++)
	{
		cout<<"Enter a["<<i<<"]";
		cin>>a[i];
	}
}
void array::display()
{
	for(int i=0;i<5;i++)
	cout<<"a["<<i<<"]"<<a[i]<<endl;
}
int array::max()
{
	int m=a[0];
	for(int i=0;i<5;i++)
		if(a[i]>m)
			m=a[i];
	return m;
}
int array::min()
{
	int m=a[0];
	for(int i=0;i<5;i++)
		if(a[i]<m)
			m=a[i];
	return m;
}
int main()
{
	array arr;
	arr.fill();
	cout<<"You Enter the following values:"<<endl;
	arr.display();
	cout<<"Maximum value="<<arr.max()<<endl;
	cout<<"Minimum value="<<arr.min();
	
}