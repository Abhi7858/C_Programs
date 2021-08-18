/*
Que : Write a c program to print reverse of that number.
Owner : Abhishek Anil Dhekane
Batch : PPA9
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int i, n, rem;
	int rev = 0;
	printf("enter a number:");
	scanf_s("%d", &n);
	i = n;
	while (n != 0)
	{
		rem = n % 10;
		rev = (rev * 10) + rem;
		n = n / 10;
	}

	printf("reverse of %d is:%d", i, rev);
}