/*
Que : Write a C program to count number of digits in a number.
Owner : Abhishek Anil Dhekane
Batch : PPA9
*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	int count = 0;
	printf("enter a number:");
	scanf_s("%d", &n);
	while (n > 0)
	{
		n = n / 10;
		count++;


	}
	printf("total digits is:%d", count);
}