#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int convert_bin(int n)
{
	if (n > 1)
		convert_bin(n / 2);
	printf("%d", n%2);

}
int main()
{
	int num;

	printf("Please enter a number : ");
	scanf("%d", &num);
	convert_bin(num);
	
	return 0;
}