#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
void SD(int *ary) {
	double aver;
	double sum = 0;
	double sd;
	aver = (ary[0] + ary[1] + ary[2] + ary[3] + ary[4]) / 5;
	for (int i = 0; i < 5; i++) {
		sum += pow((ary[i] - aver), 2);
	}
	sd = sqrt(sum / 5);
	printf("%f", sd);
}
int main() {
	int arr[5];

	printf("Enter 5 real numbers:");
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}
	SD(arr);
}