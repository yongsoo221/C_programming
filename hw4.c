#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int num1;
	int i = 2;

	printf("Please enter a number : ");
	scanf("%d", &num1);

	while (i < num1)
	{
		if (num1 % i == 0)
		{
			printf("It is not a prime number");
			return 0;
		}
		i++;
	}
	printf("It is a prime number");
	return 0;
}