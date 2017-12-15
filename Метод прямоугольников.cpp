#include "Header.h"
double int2(double E, double n, double a, double b)
{
	double x, s;
	double S = 0;
	double dx = fabs((b - a) / n);
	while ((a + dx) <= b)
	{
		x = a + dx;
		if (f(a) > f(x))
		{
			s = f(a)*(x - a);
		}
		if (f(a) <= f(x))
		{
			s = f(x)*(x - a);
		}
		a = x;
		S += s;
	}
	return S;
}