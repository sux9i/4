#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "RUS");
	int N;
	scanf_s("%d", &N);
	int x = N / 100;
	int y = (N % 100) / 10;
	int z = N % 10;
	printf("Последняя цифра числа N: %d\n", z);
	printf("Первая цифра числа N: %d\n", x);
	printf("Сумма цифр числа N: %d\n", x+y+z);

}