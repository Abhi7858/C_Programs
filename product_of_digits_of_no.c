/*
Que : Write a C program to calculate product of digits of a number.
Owner : Abhishek Anil Dhekane
Batch : PPA9
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int i, j, n, mul;
	mul = 1;
	printf("enter a number:");
	scanf_s("%d", &n);
	i = n;
	while (n > 0)
	{
		j = n % 10;
		mul = mul * j;
		n = n / 10;
	}
	printf("multiplication of digits of %d is: %d", i, mul);
}