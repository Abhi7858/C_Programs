/*
QUE: write c program to print all even numbers between 1 to 100 using while loop
Owner: Abhishek Anil Dhekane
Batch: PPA9
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int i;
	i = 1;
	printf("All even values between 1 to 100 is:\n");
	while (i <= 100)
	{
		if (i % 2 == 0)
		{
			printf("%d\n", i);
		}

		i++;

	}

	


}