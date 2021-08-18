/*
Que : Write a c program to check wheather number is palindrome or not
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
	while (n > 0)
	{
		rem = n % 10;
		rev = rev * 10 + rem;
		n = n / 10;
	}

	if (i == rev)
	{
		printf("given number %d is palindrome", i);
	}
	else
	{
		printf("given no %d is not a palindrome", i);
	}


}
