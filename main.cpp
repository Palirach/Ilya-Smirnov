#include "Header.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b, E, n, n1, n2;
	int i = 0;
	int j = 0;
	cout << "������� ������ ������� a" << endl;
	cin >> a;
	cout << "������� ������� ������� b" << endl;
	cin >> b;
	cout << "������� ����� ��������� n" << endl;
	cin >> n;
	n1 = n;
	n2 = n;
	cout << "������� �������� E" << endl;
	cin >> E;
	while (fabs(int1(E, n1*2, a, b) - int1(E, n1, a, b)) >= E)
	{
		n1 = n1 * 2;
		i++;
	}
	cout << "����� ��������:" << int1(E, n1, a, b) << endl;
	cout << "���-�� ����� ��� ���������� ��������:" << i << endl;
	cout << "�������� ��������� �� ��������� ��������:" << fabs(int1(E, n1 * 2, a, b) - int1(E, n1, a, b)) << endl;
	while (fabs(int2(E, n2*2, a, b) - int2(E, n2, a, b)) >= E)
	{
		n2 = n2 * 2;
		j++;
	}
	
	cout <<"����� ���������������:"<<int2(E, n2, a, b) << endl;
	cout << "�������� ��������� �� ��������� ��������:" << fabs(int2(E, n2 * 2, a, b) - int2(E, n2, a, b)) << endl;
	cout << "���-�� ����� ��� ���������� ��������:" << j << endl;
	system("pause");
	return 0;
}
