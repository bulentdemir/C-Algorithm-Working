#include <stdio.h>
#pragma warning(disable:4996)

int main(void){
	int X, Xcoun, Ycoun;

	printf("Please enter the number of Triangle Size: \n");
	scanf("%d", &X);

	for (Xcoun = 1; Xcoun <= X; Xcoun++){
		for (Ycoun = 1; Ycoun <= Xcoun; Ycoun++){
			printf("*");
		}
		printf("\n");
	}

	for (Xcoun = 1; Xcoun <= X; Xcoun++){
		for (Ycoun = X; Ycoun >= Xcoun; Ycoun--){
			printf("*");
		}
		printf("\n");
	}

	for (Xcoun = 1; Xcoun <= X; Xcoun++){
		for (Ycoun = 1; Ycoun < Xcoun; Ycoun++){
			printf(" ");
		}
		for (Ycoun = X; Ycoun >= Xcoun; Ycoun--){
			printf("*");
		}
		printf("\n");
	}

	for (Xcoun = 1; Xcoun <= X; Xcoun++){
		for (Ycoun = X; Ycoun > Xcoun; Ycoun--){
			printf(" ");
		}
		for (Ycoun = 1; Ycoun <= Xcoun; Ycoun++){
			printf("*");
		}
		printf("\n");
	}
	system("pause");
}