#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
void main()
{
	int a;
	setlocale (LC_ALL, "RUS");
	srand((unsigned int)time(0));
	printf ("Выберите режим (введите 1, если загадывает компьтер; введите 2, если загадываете вы ");
	do
	{
		scanf ("%d ", &a);
	} while ((a != 1) && (a != 2));
	if (a == 1)
	{
		int x = 1002;
		int k = 0;
		int n;
		n = (1000-1)/RAND_MAX*rand()+1;
		printf("Введите число ");
		while (n != x)
		{
			scanf("%d", &x);
			if (n > x)
			{
				printf("Загаданное число больше ");
				++k;
			}
			if (n < x)
			{
				printf("загаданное число меньше ");
				++k;
			}
		}
		++k;
		printf("Угадали");
		printf("Количество попыток - %d ", &k);
	}
	else
	{
		int n,a;
		char x;
		int k = 0;
		printf ("Введите загаданное число ");
		scanf("%d", &n);
		printf("Начинаем отгадывать: ");
		a = (1000 - 1) / RAND_MAX * rand() + 1;
		printf("%d", a);
		scanf ("%d", &x);
		while (x != '=')
		{
			if (x == '>')
			{
				a = (a - 1) / RAND_MAX * rand() + 1;; 
				++k;
			}
			if (x == '<')
			{
				a = (1000 - a) / RAND_MAX * rand() + a;; 
				++k;
			}
			printf("%d", a);
			scanf("%d", &x);
		}
		++k;
		printf("Угадали");
		printf("Количество попыток - %d ", &k);
	}
}