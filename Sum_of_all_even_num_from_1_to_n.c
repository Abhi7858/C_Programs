/*
QUE: write c program to print sum of all even values between 1 to n using while loop.
Owner: Abhishek Anil Dhekane
Batch: PPA9
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int i, n;
	i = 1;
	int sum;
	sum = 0;
	printf("enter n value(only integer):");
	scanf_s("%d", &n);
	while (i <= n)
	{
		if (i % 2 == 0)
		{
			sum = sum + i;
		}
		i++;

	}
	printf("sum of all even values between 1 to %d is:%d", n, sum);
	


}
