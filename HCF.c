/*
Que : Write a C program to find HCF of two numbers.
Owner : Abhishek Anil Dhekane
Batch : PPA9
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int n1, n2, min, i, gcd;
	printf("enter first value:");
	scanf_s("%d", &n1);
	printf("enter second value:");
	scanf_s("%d", &n2);

	min = (n1 < n2) ? n1 : n2;


	for (i = 1; i <= min; i++)
	{
		if (n1 % i == 0 && n2 % i == 0)
		{
			gcd = i;

		}
	}
	printf("GCD of two numbers is:%d", gcd);
}