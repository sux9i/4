#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "RUS");
	char c = '!';
	int i = 2;
	float f = 3.14f;
	double d = 5e-12;
	printf("char c = %c\n", c);
	printf("int i = %i\n", i);
	printf("float f = %f\n", f);
	printf("double d = %d\n", d);
	printf("Введите значения с консоли:");
	puts("Введите char:");
	scanf_s("%c", &c);
	puts("Введите int:");
	scanf_s("%i", &i);
	puts("Введите float:");
	scanf_s("%f", &f);
	puts("Введите double:");
	scanf_s("%d", &d);
}
