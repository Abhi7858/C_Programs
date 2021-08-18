/*
Que : write a c program to print sum of first and last digit of a number
Owner : Abhishek Anil Dhekane
Batch : PPA9
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int i, n, first, last;
	printf("enter a number:");
	scanf_s("%d", &n);
	i = n;
	last = n % 10;
	while (n > 0)
	{
		first = n % 10;
		n = n / 10;
	}
	printf("sum of first and last digit of %d : \n%d", i, first + last);

}
