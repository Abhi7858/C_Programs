/*
QUE: write c program to print factorial of any number using while loop.
Owner: Abhishek Anil Dhekane
Batch: PPA9
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int i, n;
	i = 1;
	int facto = 1;
	printf("enter n value(only integer):");
	scanf_s("%d", &n);


	while (i <= n)
	{

		facto = facto * i;


		i++;

	}
	printf("factorial of %d is:%d",n,facto);
}