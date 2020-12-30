#include<stdio.h>
#pragma warning(disable:4996)

int main(void) {
	signed int a;
	signed int b;
	int counter=0;

	printf("Please enter A\n");
	scanf("%d", &a);

	printf("Please enter B\n");
	scanf("%d", &b);

	if (a > 0 && b >= 0) {
		if (b != 0) {
			while (a >= b) {
				a = a - b;
				counter = counter + 1;
			}
			printf("Quotient: %d\n", counter);
			printf("Remainder: %d\n", a);
			system("pause");
		}
		else {
			printf("Do not enter 0 in B\n");
			system("pause");
		}
	}
	else {
		printf("A or B can not be negattive.\n");
		system("pause");
	}
}