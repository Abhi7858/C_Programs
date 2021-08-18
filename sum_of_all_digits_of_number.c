/*
Que : Write c program to calculate sum of digits of that number.
Owner : Abhishek Anil Dhekane
Batch : PPA9
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int i, j, n;
	int sum = 0;
	printf("enter a number:");
	scanf_s("%d", &n);
	i = n;
	while (n > 0)
	{
		j = n % 10;
		sum = sum + j;
		n = n / 10;

	}
	printf("sum of digits of %d:%d", i, sum);

}
