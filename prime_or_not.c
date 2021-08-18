/*
QUE : write a c program to check whether given number is prime or not.
Owner : Abhishek Anil Dhekane
Batch :PPA9
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int i, n, count = 0;
	printf("enter a number:");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			count++;
		}

	}
	if (count == 2)
		printf("%d is a prime number", n);
	else
		printf("%d is not a prime number", n);
}
