#include <stdio.h>
#include <locale.h>
int main()
{ 
	int a = 11;
	int b = 3;
	int x;
	float y;
	double z;
	x = a / b;
	y = a / b;
	z = a / b;
	printf("int = %i\n", x);
	printf("float f = %f\n", y);
	printf("double d = %lf\n", z);
	printf("%f \n", (float)a/b);
	printf("%lf\n", (double)a / b);

}