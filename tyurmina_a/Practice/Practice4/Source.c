#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#define N 10
void main()
{
	int n, i, k, d, c;
	char *prod[N] = { "������", "���", "����","�������", "����", "�������", "���", "������", "���������", "�����" };
	setlocale(LC_ALL, "RUS");
	printf("�����������? (1-��, 2-�����)");
	scanf("%d ", &c);
	if (c == 2)
		return;
	if (c == 1)
	{

	}
}