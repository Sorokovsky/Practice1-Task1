#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <locale.h>
// варіант 19(4)
int main()
{
	setlocale(LC_ALL, "Ukr");
	double x; // variable from input
	double a = 12.5, b = 1.3, c = 14.1, d = 2.7; // variable from program
	double ax, reverce_a, sin_ax, half_ax, reverse_sin_ax, tan_half_ax, cos_ax; // variable from program
	double t1, t2; // result
	reverce_a = 1 / a;
	int i = 0;
	do
	{
		if (i > 0)
		{
			printf_s("\n Try again");
		}
		printf_s("\n Enter the x(positive): "); scanf_s("%lf", &x); //Entering x
		i++;
	} while (!(x >= 0));
	t1 = (b / ((a - b) * (b + x))) - ((a / pow(a - b, 2)) * log((a + x) / (b + x))); // calculating
	printf_s("\n t1=%lf", t1);
	i = 0;
	do
	{
		if(i > 0)
		{ 
			printf_s("\n Try again");
		}
		printf_s("\n Enter the x: "); scanf_s("%lf", &x); //Entering x
		ax = a * x;
		reverce_a = 1 / a;
		half_ax = ax / 2;
		tan_half_ax = tan(half_ax);
		sin_ax = sin(ax);
		reverse_sin_ax = 1 / (sin_ax);
		i++;
	} while (!(tan_half_ax > 0) || !(sin_ax != 0));
	t2 = reverce_a * (log(tan_half_ax) - reverse_sin_ax); // calculating
	printf_s("\n t2=%lf", t2);
	i = 0;
	do
	{
		if (i > 0)
		{
			printf_s("\n Try again");
		}
			printf_s("\n Enter the x(positive): "); scanf_s("%lf", &x);
			ax = a * x;
			reverce_a = 1 / a;
			half_ax = ax / 2;
			tan_half_ax = tan(half_ax);
			sin_ax = sin(ax);
			reverse_sin_ax = 1 / (sin_ax);
		i++;
	} while (!(x >= 0));
	t1 = (2 / (3 * 5 * pow(a, 2))) * (5 * sqrt(pow(x, 5)) - 7 * b * sqrt(pow(x, 7))); //calc
	printf_s("\n t1=%lf", t1);
	i = 0;
	do
	{
		if (i > 0) 
		{
			printf_s("\n Try again");
		}
		printf("\n Enter the x:"); scanf_s("%lf", &x); //input
		ax = a * x;
		reverce_a = 1 / a;
		half_ax = ax / 2;
		tan_half_ax = tan(half_ax);
		sin_ax = sin(ax);
		reverse_sin_ax = 1 / (sin_ax);
		cos_ax = cos(ax);
	} while (!(cos_ax != 0) || !(tan_half_ax > 0));
	t2 = (sin_ax / (2 * pow(cos_ax, 2))) + reverce_a * log(tan_half_ax);
	printf_s("t2=%lf", t2);
	return 0;
}