/*
Que : Write a C program to find LCM of two numbers.
Owner : Abhishek Anil Dhekane
Batch : PPA9
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int n1, n2, max;
	printf("enter first value:");
	scanf_s("%d", &n1);
	printf("enter second value:");
	scanf_s("%d", &n2);

	max = (n1 < n2) ? n2 : n1;


	while (1)
	{
		if (max % n1 == 0 && max % n2 == 0)
		{
			printf("LCM of two numbers is:%d", max);
			break;

		}
		max++;

	}
}