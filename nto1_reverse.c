/*
QUE: write all natural values fromm n to 1 in reverse order using while loop
Owner: Abhishek Anil Dhekane
Batch: PPA9
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("enter value of n(only integer):");
	scanf_s("%d", &n);


	while (n >= 1)
	{
		printf("%d\n", n);
		n--;

	}

	//getch();


}