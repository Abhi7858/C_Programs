

/*
Que : Write a c program to print sum of all prime numbers from 1 to n
Owner : Abhishek Anil Dhekane
Batch : PPA9
*/
#include<stdio.h>
int main()
{
	int n, count = 0, i, temp, sum = 0, j;
	printf("Enter a number :");
	scanf_s("%d", &n);
	printf("All prime numbers between 1 to %d are=\n", n);
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
		{
			printf("%d\n", j);
			sum = sum + j;
		}
	}
	printf("sum of prime number between 1 to %d:\n%d", n, sum);
}