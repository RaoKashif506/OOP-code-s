//Program 14.2
//Write a program that overloads increment operator to work with user-defined objects.
//The overloaded function should return an object after incrementing the data member. 

#include<iostream>
using namespace std;
class count{
	private:
		int n;
		public:
			count()
			{
				n=0;
			}
			void show()
			{
				cout<<"n= "<<n<<endl;
			}
			count operator++()
			{
				count temp;
				n=+1;
				temp.n=n;
				return temp;
			}
};
int main()
{
	count x,y;
	x.show();
	y.show();
	y=++x;
	x.show();
	y.show();
}