using namespace std;

void lab_9_1() {
	int user_input = 1;
	while (user_input != 0) {
		system("cls");
		cout << "������������ ������ �9. ������ �1" << endl;
		cout << "� ������ ����� ������ N ������ (N � �����). ����� ���������� ������, ��������� � ������ ��������� ������." << endl << endl;
		int n;
		cout << "������� N: ";
		cin >> n;
		cout << "� ������ ��������� ������ ������ " << n % 60 << " ������(�/�)" << endl << endl;
		cout << "������� 0 ��� ������ �� ������ ��� ����� ������ ����� ��� ������� ���� ������ � ������: ";
		cin >> user_input;
	}
}