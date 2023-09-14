#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <locale.h>
// Варіант 19(4)
int main()
{
	setlocale(LC_ALL, "Ukr");
	double x;
	double a = 12.5, b = 1.3, c = 14.1, d = 2.7;
	double ax, reverce_a, sin_ax, half_ax, reverse_sin_ax, tan_half_ax;
	double t1, t2;
	reverce_a = 1 / a;
	printf("Введіть х > "); scanf_s("%lf", &x);
	ax = a * x;
	sin_ax = sin(ax);
	half_ax = ax / 2;
	reverse_sin_ax = 1 / sin_ax;
	tan_half_ax = tan(half_ax);
	t1 = (b / ((a - b) * (b + x))) - (a / pow(a - b, 2) * log((a + x) / (b + x)));
	printf("t1=%lf \n", t1);
	reverce_a = 1 / a;
	printf("Введіть х від 0 до 90 і від 270 до 360 > "); scanf_s("%lf", &x);
	if (tan_half_ax > 0)
	{
		ax = a * x;
		sin_ax = sin(ax);
		half_ax = ax / 2;
		reverse_sin_ax = 1 / sin_ax;
		tan_half_ax = tan(half_ax);
		t2 = reverce_a * (log(tan_half_ax) - reverse_sin_ax);
		printf("t2=%lf \n", t2);
	}
	else
	{
		printf("Не допустимий x.");
	}
	printf("Введіть х > 0 > "); scanf_s("%lf", &x);

	if(x > 0)
	{
		t1 = (2 / (3 * 5 * pow(a, 2))) * (5 * sqrt(pow(x, 5)) - 7 * b * sqrt(pow(x, 7)));
		printf("t1=%lf \n", t1);

	}
	else
	{
		printf("Не допустимий x. \n");
	}
	printf("Введіть х від 0 до 90 і від 270 до 360. Також x не дорівнює %lf, %lf, %lf, %lf > ", 270 / a, 0, -180 / a, 360 / a); scanf_s("%lf", &x);
	ax = a * x;
	sin_ax = sin(ax);
	reverce_a = 1 / a;
	half_ax = ax / 2;
	tan_half_ax = tan(half_ax);
	if (1)
	{
		t2 = (sin_ax / (2 * pow(cos(ax), 2))) + (reverce_a * log(tan_half_ax));
		printf("t2=%lf", t2);
	}
	else
	{
		printf("Не допустимий x. \n");
	}
	return 0;
}