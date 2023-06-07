//Example
#include<iostream>
using namespace std;
class parent{
	public:
		virtual void show()=0;
};
class child1: public parent{
	public: 
	void show()
	{
		cout<<"Child1 class.. "<<endl;
	}
};
class child2: public parent{
	public:
		void show()
		{
			cout<<"Child2 class... "<<endl;
		}
};
int main()
{
	parent*ptr[2];
	ptr[0]=new child1;
	ptr[1]=new child2;
	ptr[0]->show();
	ptr[1]->show();
}