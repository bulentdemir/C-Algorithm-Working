#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

struct StudentRecord {
	char Name[30];
	char Surname[30];
	char Specialization[30];
	int ID;
};

typedef struct StudentRecord SR;
void ReadStRecord(SR StArray[30], int i);
void PrintStRecord(SR StArray[30], int i);
void SortStArray(SR StArray[30], int i);
int FindRecord(SR StArray[30], int i);

int main() {
	int n, i=0;
	SR StArray[30];
	do {
		printf("Please enter 1 to add a new record of students\n");
		printf("Please enter 2 to search for a student\n");
		printf("Please enter 3 to sort the records of students\n");
		printf("Please enter 4 to show the information of all students\n");
		printf("Please enter 5 to exit the program\n");
		scanf("%d", &n);

		switch (n) {
			case 1:
				ReadStRecord(StArray, i);
				i++;
				break;

			case 2:
				FindRecord(StArray, i);
				break;

			case 3:
				SortStArray(StArray, i);
				break;

			case 4:
				PrintStRecord(StArray, i);
				break;
		}
	} while (n != 5);
	return 0;
}

void ReadStRecord(SR StArray[30], int i) {
	printf("Please enter Student name: ");
	scanf("%s", StArray[i].Name);

	printf("Please enter Student surname: ");
	scanf("%s", StArray[i].Surname);

	printf("Please enter Student Specialization: ");
	scanf("%s", StArray[i].Specialization);

	printf("Please enter Student ID: ");
	scanf("%d", &StArray[i].ID);
	return ReadStRecord;
}

void PrintStRecord(SR StArray[], int i) {
	printf("Name \t Sname \t Spec. \t ID\n");
	for (int j = 0; j < i; j++) {
		printf("%s \t %s \t %s \t %d\n", StArray[j].Name, StArray[j].Surname, StArray[j].Specialization, StArray[j].ID);
	}
	return PrintStRecord;
}

void SortStArray(SR StArray[], int i) {
	SR temp;
	for (int j = 0; j < i; j++) {
		for (int y = j + 1; y < i; y++) {
			if (StArray[j].ID > StArray[y].ID) {
				temp = StArray[j];
				StArray[j] = StArray[y];
				StArray[y] = temp;
			}
		}
	}
	PrintStRecord(StArray, i);
	return SortStArray;
}

int FindRecord(SR StArray[], int i) {
	int ID, n=-1;
	printf("Please enter the student ID number: ");
	scanf("%d", &ID);

	for (int j = 0; j < i; j++) {
		if (ID == StArray[j].ID) {
			n = j;
			break;
		}
	}
	if (n == -1) {
		printf("It is did not find\n");
	}
	else {
		printf("%s \t %s \t %s \t %d\n", StArray[n].Name, StArray[n].Surname, StArray[n].Specialization, StArray[n].ID);
	}
	return FindRecord;
}
