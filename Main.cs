/*
Program to print 5 times “Hello World” on screen.
*/

using System;

class StringX
{
	public
	void Display()
	{
		int i = 1;

		do
		{
			Console.WriteLine("Hello World");
			i += 1;
		}while(i <= 5);
	}
}

class main
{
	static void Main(string[] Arg)
	{
		StringX sobj = new StringX();
		sobj.Display();
	}
}
