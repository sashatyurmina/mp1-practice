#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>
void main()
{
	int i, j, x, m, z, k = 0, b = 0;
	int n, s, l;
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };;
	setlocale(LC_ALL, "RUS");
	srand((unsigned int)time(0));
	printf("Введите длину числа");
	scanf("%d", &n);
	for (i = 0, i < 10, i++);
	{
		a[i] = rand() % 10;
	}
	for (i = 0, i < 9, i++);
	{
		for (j = 1, j < 10, j++);
		{
			if (a[i] == a[i - 1])
			{
				a[i]= rand() % 10;
				++z;
			}
		}
	}
	x = 1;
	for (i = 0, i < n, i++)
	{
		s = s + a[i] * x;
		x = x * 10;
	}
	printf("Введите ваше предположение");
	scanf("%d", &m);
	for (i = 0, i < 9, i++)
	{
		if 
	}

}