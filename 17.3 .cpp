//Program 17.3
//Write a template for finding minimum value in an arrary.
#include<iostream>
using namespace std;
template <class T>
T findMin(T arr[],int n)
{
	int i;
	T min;
	min=arr[i];
	for(i=0;i<n;i++)
	{
		if(min>arr[i])
		min=arr[i];
	}
	return (min);
}
int main()
{
	int iarr[]={5,4,3,2,1};
	char carr[]={'z','y','c','b','a'};
	double darr[]={3.3,5.5,2.2,1.1,4.4};
	cout<<"Generic Function to find Minimun from Array "<<endl;
	cout<<"Integer Minimum is: "<<findMin(iarr,5)<<"\n";
	cout<<"Character Minimum is: "<<findMin(carr,5)<<"\n";
	cout<<"Double Minimum is: "<<findMin(darr,5)<<"\n";
}