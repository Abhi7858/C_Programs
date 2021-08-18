/*
QUE: write c program to print multiplication table of any number using while loop.
Owner: Abhishek Anil Dhekane
Batch: PPA9
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int i, n;
	i = 1;
	printf("enter n value(only integer):");
	scanf_s("%d", &n);
	printf("multiplicaion table of %d is:\n", n);

	while (i <= 10)
	{
		printf("%d\n", n * i);


		i++;

	}

	


}