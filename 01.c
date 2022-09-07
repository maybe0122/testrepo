#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define standard 3

void print_matrix(int matrix[][standard], int row, int column);
int random_matrix(int matrix[][standard]);
void matrix_mul();
void matrix_add();
void matrix_sub();
int matrix_det();
void matrix_trans();

int matrix1[3][3] = { 0 };
int matrix2[3][3] = { 0 };
int matrix3[3][3] = { 0 };

int main()
{
	

	char command;
	while (1)
	{
		int matrix1 = random_matrix(matrix);
		int matrix2 = random_matrix(matrix);
		print_matrix(matrix1, standard, standard);
		printf("\n");
		print_matrix(matrix2, standard, standard);
		printf("\n");

		scanf("%c", &command);

		switch (command)
		{
		case 'm':
			matrix_mul();
			break;
		case 'a':
			matrix_add();
			break;
		case 'd':
			matrix_sub();
			break;
		case 'r':
			matrix_det();
			break;
		case 't':
			break;
		case 'h':
			break;
		case 's':
			random_matrix(matrix1);
			random_matrix(matrix2);
			print_matrix(matrix1, standard, standard);
			printf("\n");
			print_matrix(matrix2, standard, standard);
			printf("\n");
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
		printf("|\n\n");
	}
}

int random_matrix(int matrix[][standard])
{
	srand((unsigned int)time(NULL));
	for (int i = 0; i < standard; i++)
	{
		for (int j = 0; j < standard; j++)
			matrix[i][j] = rand() % 3;
	}
	return (int*) matrix;
}

void matrix_mul()
{
	int size = 0;
	size = (standard * standard + 1) / 2;
	for (int i = 0; i < standard; i++)
	{
		for (int j = 0; j < standard; j++)
			for (int k = 0; k < standard; k++)
			{
				matrix3[i][j] = matrix1[i][k] * matrix2[k][j];
			}
	}
	print_matrix(matrix1, standard, standard);
	for (int i = 0; i < size; i++) printf(" ");
	printf("X\n");
	print_matrix(matrix2, standard, standard);
	for (int i = 0; i < size; i++) printf(" ");
	printf("=\n");
	print_matrix(matrix3, standard, standard);


}
void matrix_add()
{

}
void matrix_sub()
{

}

int matrix_det()
{

}

void matrix_trans()
{
	matrix_det();
}