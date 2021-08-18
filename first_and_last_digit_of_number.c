/*
Que : Write a C program to find first and last digit of a number.
Owner : Abhishek Anil Dhekane
Batch : PPA9
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int n, last, first, i;
	printf("enter a number:");
	scanf_s("%d", &n);
	i = n;
	last = n % 10;
	while (n > 0)
	{
		first = n % 10;
		n = n / 10;
	}
	printf("%d is first digit and %d is last digit of %d", first, last, i);

}