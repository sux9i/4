#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "RUS");
	char c;
	int i;
	float f;
	double d;
	printf("Введите символ:\n");
	scanf_s("%c", &c);
	printf("Введите целое число:\n");
	scanf_s("%d", &i);
	printf("Введите float:\n");
	scanf_s("%f", &f);
	printf("Введите double:\n");
	scanf_s("%lf", &d);
	printf("c = %c\n", c);
	printf("i = %d\n", i);
	printf("f = %f\n", f);
	printf("d = %lf\n", d);
}
