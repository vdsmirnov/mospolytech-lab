#include <cmath>

using namespace std;

void lab_5_1() {
	double x1, x2, y1, y2, distance;
	cout << "������� ���������� ���������� ����� A" << endl;
	cin >> x1 >> y1;
	cout << "������� ���������� ���������� ����� B" << endl;
	cin >> x2 >> y2;
	cout << endl << "A (" << x1 << ";" << y1 << ")  " << "B (" << x2 << ";" << y2 << ")" << endl;
	distance = sqrt((x2 * x2 - 2 * x2 * x1 + x1 * x1) + (y2 * y2 - 2 * y2 * y1 + y1 * y1)); // �������������� ���������� ����� ��������� �������� ������� sqrt((x2-x1)^2+(y2-y1)^2), ������, ��� ���� ������� ��������������� �������� �������� ��������
	cout << "���������� ����� ������� A � B = " << distance << endl;
}