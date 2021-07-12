/*
2. Program to print 5 times “Marvellous” on screen.
*/

#include<stdio.h>

void Display()
{
	static int i = 1;

	if(i <= 5)
	{
		printf("Hello World\n");
		i++;

		Display();
	}
}

int main()
{
	Display();

	return 0;
}