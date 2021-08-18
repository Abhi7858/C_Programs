/*
Que : Write a c program to calculate frequency of digits of number
Owner : Abhishek Anil Dhekane
Batch : PPA9
*/
#include<stdio.h>
int main()
{
	int n, temp1, temp2, rem1, rem2, count = 0;
	printf("Enter a number:");
	scanf_s("%d", &n);
	temp1 = n;
	temp2 = n;
	printf("The frequency of digit in number %d is\n", n);
	while (temp1 != 0)
	{
		rem1 = temp1 % 10;
		temp2 = n;
		count = 0;
		while (temp2 != 0)
		{
			rem2 = temp2 % 10;

			if (rem1 == rem2)
			{
				count++;
			}
			temp2 = temp2 / 10;
		}
		printf("%d=%d\n", rem1, count);
		temp1 = temp1 / 10;
	}

}