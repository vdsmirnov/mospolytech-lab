using namespace std;

void lab_9_4() {
	int user_input = 1;
	while (user_input != 0) {
		system("cls");

		cout << "������������ ������ �9. ������ �4" << endl;
		cout << "���� ����� ������������� ����� A, B, C. �� �������������� ������� A � B ��������� ����������� ��������� ���������� ��������� �� �������� C (��� ���������). ����� ���������� ���������, ����������� �� ��������������, � ����� ������� ��������� ����� ��������������." << endl << endl;
		cout << "������� �� ������� �������� �, �, �:" << endl;
		int a, b, c;
		cin >> a >> b >> c;
		if (a > 0 && b > 0 && c > 0) {
			int square = a * b;
			int count_c = (a / c) * (b / c);
			cout << "�� �������������� �������� A x B ����� ������������ " << count_c << " �������� �, ��������� ������� = " << square - count_c * c * c << endl << endl;
		}
		else {
			cout << "!! ������ !!\n A, B, C ������ ���� ��������������, ��������� ��������� ������." << endl;
		}

		cout << "������� 0 ��� ������ �� ������ ��� ����� ������ ����� ��� ������� ���� ������ ������: ";
		cin >> user_input;
	}
}