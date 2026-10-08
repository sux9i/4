#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int gruz(int A, int B, int C)
{
int res;
res = ((A % 5 == 0) && (B % 5 == 0) && (C % 5 == 0));
}
int main()
{
	setlocale(LC_ALL, "RUS");
	int A, B, C, res;
	printf("Вес груза А:");
	scanf_s("%d", &A);
	printf("Вес груза B:");
	scanf_s("%d", &B);
	printf("Вес груза C:");
	scanf_s("%d", &C);
    res=gruz(A,B,C);
	printf("Условие для разрешения на погрузку, 1-да, 0-нет: %d\n",res);
	system("pause");
}
