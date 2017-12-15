#include "Header.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b, E, n, n1, n2;
	int i = 0;
	int j = 0;
	cout << "Введите нижнюю границу a" << endl;
	cin >> a;
	cout << "Введите верхнюю границу b" << endl;
	cin >> b;
	cout << "Введите число разбиений n" << endl;
	cin >> n;
	n1 = n;
	n2 = n;
	cout << "Введите точность E" << endl;
	cin >> E;
	while (fabs(int1(E, n1*2, a, b) - int1(E, n1, a, b)) >= E)
	{
		n1 = n1 * 2;
		i++;
	}
	cout << "Метод трапеций:" << int1(E, n1, a, b) << endl;
	cout << "Кол-во шагов для достижения точности:" << i << endl;
	cout << "Разность интегалов на последней итерации:" << fabs(int1(E, n1 * 2, a, b) - int1(E, n1, a, b)) << endl;
	while (fabs(int2(E, n2*2, a, b) - int2(E, n2, a, b)) >= E)
	{
		n2 = n2 * 2;
		j++;
	}
	
	cout <<"Метод прямоугольников:"<<int2(E, n2, a, b) << endl;
	cout << "Разность интегалов на последней итерации:" << fabs(int2(E, n2 * 2, a, b) - int2(E, n2, a, b)) << endl;
	cout << "Кол-во шагов для достижения точности:" << j << endl;
	system("pause");
	return 0;
}
