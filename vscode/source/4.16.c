#include <stdio.h>

int main() {
	int i, j, k ;

	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");

	for (i = 10; i >= 1; i--)
	{
		for (j = 1; j <= i; j++) 
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");

	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j < i; j++)
		{
			printf(" ");
		}
		for (k = i; k <= 10; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");

	for (i = 1; i <= 10; i++)
	{
		for (j = i; j < 10; j++)
		{
			printf(" ");
		}
		for (k = 1; k <= i; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");

	return 0;
}