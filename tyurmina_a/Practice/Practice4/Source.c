#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#define N 10
void main()
{
	int n, i, k, d, c;
	char *prod[N] = { "Молоко", "Сыр", "Хлеб","Колбаса", "Яйца", "Шоколад", "Сок", "Йогурт", "Апельсины", "Пирог" };
	setlocale(LC_ALL, "RUS");
	printf("Сканировать? (1-да, 2-выход)");
	scanf("%d ", &c);
	if (c == 2)
		return;
	if (c == 1)
	{

	}
}