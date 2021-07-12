/*
Program to print 5 times “Hello World” on screen.
*/

import java.lang.*;


class StringX
{
	void Display()
	{
		int i = 1;

		do
		{
			System.out.println("Hello World");
			i += 1;
		}while(i <= 5);
	}
}

class Main
{
	public static void main(String Arg[])
	{
		StringX sobj = new StringX();
		sobj.Display();
	}
}
