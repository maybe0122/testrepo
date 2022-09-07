#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define standard 3

void print_matrix(int matrix[][standard], int row, int column);
int random_matrix(int matrix[][standard]);

int main()
{
	int matrix1[3][3] = { 0 };
	int matrix2[3][3] = { 0 };
	int matrix3[3][3] = { 0 };

	int command;
	while (1)
	{
		scanf("%d", &command);
	
		//print_matrix(matrix1, standard, standard);
		switch (command)
		{
		case 'm':
			break;
		case 'a':
			break;
		case 'd':
			break;
		case 'r':
			break;
		case 't':
			break;
		case 'h':
			break;
		case 's':
			random_matrix(matrix1);
			break;
		case 'q':
			return 0;
			break;
		default:
			printf("Enter accurate command\n");
			break;
		}
		while ((command = getchar() != '\n')) continue; // 버퍼제거
	}

	return 0;
}

void print_matrix(int matrix[][standard], int row, int column)
{
	for (int i = 0; i < row; i++)
	{
		printf("| ");
		for (int j = 0; j < column; j++)
			printf("%d ", matrix[i][j]);
		printf("|\n");
	}
}

int random_matrix(int matrix[][standard])
{
	srand(time(NULL));
	for (int i = 0; i < standard; i++)
	{
		for (int j = 0; j < standard; j++)
			matrix[i][j] = rand() % 3;
	}
	return matrix;
}