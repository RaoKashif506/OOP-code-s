//Program 18.3
//Write a program that reads the contents of the file test.txt and display or screen.
 #include<iostream>
 #include<fstream>
 using namespace std;
int main()
{
	int n;
	char ch;
	double d;
	ifstream file("test.txt");
	if(!file)
	{
		cout<<"File opening error: ";
		exit(1);
	}
	file>>n>>ch>>d;
	cout<<"The Contents of file are as follows: "<<endl;
	cout<<n<<endl<<ch<<endl<<d<<endl;
	file.close();
}