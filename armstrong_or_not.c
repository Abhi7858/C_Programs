/*
QUE : write c program to check wheather number is armstrong or not
Owner : Abhishek Anil Dhekane
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int a, n, rem1, m, count = 0, mul = 1, result = 0;
	printf("enter a number:");
	scanf_s("%d", &n);
	m = n;
	while (m > 0)
	{
		m = m / 10;
		count++;
	}
	a = count;
	m = n;
	while (m > 0)
	{
		rem1 = m % 10;
		a = count;
		mul = 1;

		while (a > 0)

		{

			mul = mul * rem1;
			a--;
		}

		result = result + mul;

		m = m / 10;

	}
	if (result == n)
		printf("%d is armstrong number", n);
	else
		printf("%d is not a armstrong number", n);
}