#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "RUS");
	int A, B, C;
	printf("Вес груза А:");
	scanf_s("%d", &A);
	printf("Вес груза B:");
	scanf_s("%d", &B);
	printf("Вес груза C:");
	scanf_s("%d", &C);
	printf("\nУсловие для разрешения на погрузку:\n");
	printf("(%d%%5==0) && (%d%%5==0) && (%d%%5==0)", A, B, C);
}
