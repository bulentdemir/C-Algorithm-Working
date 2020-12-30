#include<stdio.h>
#pragma warning(disable:4996)

int main(void) {
	int NUM[1000], SNUM[1000], n, i, j, num, rem, sum, main;

	printf("Enter the number [2-1000]\n");
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		printf("Please enter written numbers: ");
		scanf("%d", &NUM[i]);
	}
	int x = 0;
	for (i = 0; i < n; i++) {
		sum = 0;
		for (main = NUM[i]; NUM[i] > 0; NUM[i] = NUM[i] / 10) {
			num = 1;
			rem = NUM[i] % 10;
			for (j = 1; j <= rem; j++) {
				num = num * j;
			}
			sum = sum + num;
		}
		if (sum == main) {
			SNUM[x] = main;
			x++;
		}
	}
	for (i = 0; i < x; i++) {
		printf("%d is strong number\n", SNUM[i]);
	}
	system("pause");
}