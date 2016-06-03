#include <stdio.h>
#include <math.h>

int main ()
{
	float a, b, c, D, d, x1, x2;
	printf ("Enter the variable value: ");
	scanf ("%f %f %f", &a, &b, &c);
	printf ("(%.1f)x^2+(%.1f)x+(%.1f)=0", a, b, c);
	D=pow(b,2)-4*a*c;
	printf("\nDiscriminant is %.1f", D);
	return 0;
}
