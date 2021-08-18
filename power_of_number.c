/*
Que : write a c program to find power of number using while loop.
Owner : Abhishek Anil Dhekane
Batch : PPA9
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int a, b, ans = 1, i;

	printf("enter base value:");
	scanf_s("%d", &a);
	printf("enter power:");
	scanf_s("%d", &b);
	for (i = 1; i <= b; i++)
	{
		ans = ans * a;

	}
	printf("the answer is:%d", ans);
}