
#include "pch.h"
#include <stdio.h>
#include <math.h>
#include <Windows.h>
#define n 5
int main()
{
	int massif[n][n];
	int line, column, element_comparison;
	for (line = 0; line < n; line++)
	{
		for (column = 0; column < 5; column++)
		{
			scanf_s("%d", &massif[line][column]);

		}
	}
}
void InsertSort()
{
	int massif[n][n];
	for (int element_comparison = 1; element_comparison <= n; element_comparison++)
	{
		for (int line = 0; line < 4; line++)
		{
			for (int column = 0; column < 5; column++)
			{
				if (massif[line][column] < massif[line + 1][column])
				{
					int x;
					x = massif[line][column];
					massif[line][column] = massif[line + 1][column];
					massif[line + 1][column] = x;
				}
			}
		}
	}


	for (int line = 0; line < n; line++)
	{
		for (int column = 0; column < n; column++)
		{
			printf("%d\t", massif[line][column]);
		}
		printf("\n");

	}
}
void additional_actions()
{
	int massif[n][n];
	int massive[n];
	for (int max_element_in_line = 0, line = 0; line < n; line++)
	{
		for (int max_element_in_line = massif[line][1], column = 0; column < n; column++)
		{
			if (max_element_in_line < massif[line][column])
			{
				max_element_in_line = massif[line][column];
			}
		}
		massive[line] = max_element_in_line;
		printf("max%d=%d\n ", line + 1, max_element_in_line);
		max_element_in_line = 0;
	}
	int sum_of_max_elements = 0;
	for (int line = 0; line < n; line++)
	{
		sum_of_max_elements += massive[line];
	}
	printf("Summ of max elements is: %d\n", sum_of_max_elements);
	system("pause");
}

