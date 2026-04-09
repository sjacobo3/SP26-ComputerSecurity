#include <stdio.h>

int main() {
	int rows;

	printf("Enter number of rows: ");
	scanf("%d", &rows);

	int triangle[rows][rows];

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j <= i; j++) {
			if (j == 0 || j == i) 
				triangle[i][j] = 1;
			else
				triangle[i][j] = triangle[i-1][j-1] + triangle[i-1][j];
		}
	}

	// print pascal triangle
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < rows - i - 1; j++) 
			printf("   ");
		for (int j = 0; j <= i; j++) 
			printf("%6d", triangle[i][j]);
		printf("\n");
	}

	return 0;
}
