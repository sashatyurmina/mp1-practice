#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
void main()
{
	int a;
	setlocale (LC_ALL, "RUS");
	srand((unsigned int)time(0));
	printf ("�������� ����� (������� 1, ���� ���������� ��������; ������� 2, ���� ����������� �� ");
	do
	{
		scanf ("%d ", &a);
	} while ((a != 1) && (a != 2));
	if (a == 1)
	{
		int x = 1002;
		int k = 0;
		int n;
		n = rand() % 1001;
		printf("������� ����� ");
		while (n != x)
		{
			scanf("%d", &x);
			if (n > x)
			{
				printf("���������� ����� ������ ");
				++k;
			}
			if (n < x)
			{
				printf("���������� ����� ������ ");
				++k;
			}
		}
		++k;
		printf("�������");
		printf("���������� ������� - %d ", &k);
	}
	else
	{
		int n,a;
		char x;
		int k = 0;
		printf ("������� ���������� ����� ");
		scanf("%d", &n);
		printf("�������� ����������: ");
		a = rand() % 1001;
		printf ("%d", x);
		while (x != '=')
		{
			if (x == '>')
			{
				a = rand() % 1001; /*�����-�� ������� ���� ���������� ���� ����������*/
				++k;
			}
			if (x == '<')
			{
				a = rand() % 1001; /*�����-�� ������� ���� ���������� ���� ����������*/
				++k;
			}
		}
	}
	
}