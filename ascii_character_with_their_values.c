/*
Que: write c program to print all ascii characters with Their values
Owner: Abhishek Anil Dhekane
Batch: PPA9
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int i = 0;
	printf("all ascii characters with their values:\n");
	while (i <= 255)
	{
		printf("the ascii value of %c is:%d\n", i, i);
		i++;
	}
	
}