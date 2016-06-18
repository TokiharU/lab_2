#include <stdio.h>
#include <math.h>

void quad ( float a, float b, float c, float d )
{
	float x1, x2;
	
	if (d > 0) 
	{
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);
		printf("x1 = %2.2f, x2 = %2.2f", x1, x2);
	}
	if (d == 0) 
	{
		x1 = -b / (2 * a);
		printf("x1 = x2 = %2.2f", x1);
	}
	if (d < 0)
		printf("no roots");
}

int main ()
{
	float a, b, c, D;
	
	printf ("Enter the variable value: ");
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
	
	D = (b * b) - (4 * a * c);
	quad (a, b, c, D);

	return 0;
}
