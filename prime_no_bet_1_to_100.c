/*
Que : Write a c program to print all prime numbers from 1 to n
Owner : Abhishek Anil Dhekane
Batch : PPA9
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int n, count = 0, i, temp, j;
	printf("Enter a number :");
	scanf_s("%d", &n);
	printf("All prime numbers between 1 to %d are=", n);
	for (j = 1; j <= n; j++)
	{
		count = 0;
		for (i = 1; i <= j; i++)
		{
			temp = j % i;
			if (temp == 0)
				count++;
		}
		if (count == 2)
			printf("\n%d", j);
	}	
}
