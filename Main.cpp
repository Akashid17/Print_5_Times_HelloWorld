/*
Program to print 5 times “Hello World” on screen.
*/

#include<iostream>

using namespace std;

class StringX
{
	public:
		void Display();
};

void StringX::Display()
{
	int i = 0;

	for(i = 1; i <= 5; i++)
	{
		cout<<"Hello World\n";
	}	
}

int main()
{
	StringX sobj;

	sobj.Display();	

	return 0;
}
