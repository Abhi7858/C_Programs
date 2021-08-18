/*
QUE: write c program to print all alphabates a to z using while loop
Owner: Abhishek Anil Dhekane
Batch: PPA9
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int n = 97;
	printf("all alphabates from a to z is:\n");

	while (n <= 122)
	{
		printf("%c\n", n);
		n++;

	}

}