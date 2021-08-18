/*
Que : Write a c program to check wheather number is perfect or not.
Owner : Abhishek Anil Dhekane
Batch : PPA9
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int i, n, sum = 0;
	printf("enter a number:");
	scanf_s("%d", &n);
	for (i = 1; i < n; i++)
	{
		if (n % i == 0)
		{
			sum = sum + i;
		}

	}

	if (n == sum)
		printf("%d is perfect number", n);
	else
		printf("%d is not a perfect number", n);
}

