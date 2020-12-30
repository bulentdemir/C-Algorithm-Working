#include<stdio.h>
#include<math.h>
#pragma warning(disable:4996)

int main(void) {
	float size[1000];
	int i, n;
	float sum = 0, middle, result = 0, result2 = 0, result3, stdev;

	do {
		printf("Please enter the limit\n");
		scanf("%d", &n);
	}

	while(!(n>=2 && n<=1000));
	printf("Please enter %d numbers\n", n);

	for (i = 0; i < n; i++) {
		scanf("%f", &size[i]);
	}

	for (i = 0; i < n; i++) {
		sum = sum + size[i];
	}
	middle = sum / (float)n;

	for (i = 0; i < n; i++) {
		result = size[i] - middle;
		result2 = result2 + result * result;
	}
	result3 = result2 / (float)n;
	stdev = sqrt(result3);

	printf("Standard Deviation is %.2f\n", stdev);
	system("pause");
}