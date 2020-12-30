#include<stdio.h>
#include<math.h>
#pragma warning(disable:4996)

void ReadArray(int Array[1000], int n);
void SortArray(int Array[1000], int n);
float StDev(int Array[1000], int n);
int SpecificValue(int Array[1000], int n);
int main(void) {
	int n, Array[1000], x;

	printf("Please enter the array size: ");
	scanf("%d", &n);
	ReadArray(Array, n);

	printf("After sorting the array: ");
	SortArray(Array, n);

	printf("\nStandard Deviation: %.2f\n", StDev(Array, n));

	printf("Please enter the value: ");
	scanf("%d", &x);
	SpecificValue(Array, n, x);

	system("pause");
}

void ReadArray(int Array[1000], int n) {
	for (int i = 0; i < n; i++) {
		scanf("%d", &Array[i]);
	}
	return ReadArray;
}

void SortArray(int Array[1000], int n) {
	int temp = 0, i, j;
	for (i = 0; i<n; i++) {
		for (j = i + 1; j<n; j++) {
			if (Array[i]>Array[j]) {
				temp = Array[i];
				Array[i] = Array[j];
				Array[j] = temp;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		printf("%d  ", Array[i]);
	}
	return SortArray;
}

float StDev(int Array[1000], int n) {
	int i;
	float sum = 0, middle, result = 0, stdev;
	for (i = 0; i < n; i++) {
		sum = sum + Array[i];
	}
	middle = sum / n;

	for (i = 0; i < n; i++) {
		result = result + pow((Array[i] - middle), 2);
	}
	stdev = sqrt(result / n);
	return stdev;
}

int SpecificValue(int Array[1000], int n, int x) {
	int index = -1;
	for (int i = 0; i < n; i++) {
		if (x == Array[i]) {
			index=i;
		}
	}

	if (index == -1) {
		printf("The value %d was not found.\n", x);
	}
	else {
		printf("The value %d was found at %d. index\n", x, index);
	}
	return SpecificValue;
}
