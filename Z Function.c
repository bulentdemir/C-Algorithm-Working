#include<stdio.h>
#pragma warning(disable:4996)

int main(void) {
	int x;
	int y;
	float z;
	float result2=1;
	float result1=1;
	int counter=0;

	printf("Plase enter X\n");
	scanf("%d/n", &x);

	printf("Plase enter Y\n");
	scanf("%d/n", &y);

	if (y >= 0) {
		while (counter < y) {
			result1 = result1 * x;
			counter = counter + 1;
		}
	}
	else{
		while (counter > y) {
			result1 = result1 * 1 / x;
			counter = counter - 1;
		}
	}
	counter = 0;
	while (counter < 3) {
		result2 = result2 * y;
		counter = counter + 1;
	}
	result2 = 2 * result2;

	z = result1 + result2;
	printf("Z: %.2f\n", z);
	system("pause");
}