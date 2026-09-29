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
	printf("¬ведите значени€ с консоли:");
	puts("¬ведите char:");
	scanf_s("%c", &c);


}