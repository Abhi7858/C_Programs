/*
QUE : write a c program to check wheather no is strong or not
Owner : Abhishek Anil Dhekane
Batch : PPA9
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int i, n, rem, fact = 1, m, sum = 0;
	printf("enter a number:");
	scanf_s("%d", &n);
	m = n;
	while (n > 0)
	{
		rem = n % 10;
		fact = 1;
		for (i = 1; i <= rem; i++)
		{
			fact = fact * i;
		}
		sum = sum + fact;
		n = n / 10;

	}

	if (m == sum)
	{

		printf("%d is strong number", m);

	}
	else
	{
		printf("%d is not a strong number", m);
	}

}