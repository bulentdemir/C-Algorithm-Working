#include <stdio.h>
#pragma warning(disable:4996)

int main(void){
	int n;
	int j;
	int i;
	int sum;

	printf("Please enter the limit\n");
	scanf("%d", &n);

	printf("Perfect numbers are between 1 to %d\n", n);

	for (j = 1; j <= n; j++){
		sum = 0;
		for (i = 1; i < j; i++) {
			if (j % i == 0){
				sum = sum + i;
			}
		}
		if (sum == j){
			printf("%d is perfect number\n", j);
		}
	}
	system("pause");
}