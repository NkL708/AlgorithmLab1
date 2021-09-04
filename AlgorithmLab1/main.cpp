#include "List.h"

int main()
{
	setlocale(LC_ALL, "Rus");
	int sw;
	bool exit = false;
	List<string> arr;
	List<string>::Iterator it;

	while (!exit) {
		sw = NULL;
		int index;
		string value;
		cout << endl;
		cout << "1. �������� ������ ������" << endl;
		cout << "2. ������� ������" << endl;
		cout << "3. �������� ������ �� �������" << endl;
		cout << "4. �������� �� ������ �������� ��������" << endl;
		cout << "5. ������ �������� ��� �������� ��������" << endl;
		cout << "6. ��������� �������� ��� �������� ��������" << endl;
		cout << "7. ��������� ������� � ������ ��� ��������� ��������" << endl;
		cout << "8. �������� ����� ��������" << endl;
		cout << "9. ��������� ������ �������� � �������� ��������" << endl;
		cout << "10. �������� �������� �� ������" << endl;
		cout << "11. �������� �������� �� ��������� �������" << endl;
		cout << "12. ����� ������ � �������" << endl;
		cout << "13. ����� ���������� ������������� ��������� ������" << endl;
		cout << "14. ��������� begin() ���������" << endl;
		cout << "15. ��������� end() ���������" << endl;
		cout << "16. ��������� � ��������� �������� ++" << endl;
		cout << "17. ��������� � ��������� �������� --" << endl;
		cout << "18. ���������, ����� �� �������� ��������� begin()" << endl;
		cout << "19. ���������, ����� �� �������� ��������� end()" << endl;
		cout << "20. ���������, �� ����� �� �������� ��������� begin()" << endl;
		cout << "21. ���������, �� ����� �� �������� ��������� end()" << endl;
		cout << "22. ����� �� ���������" << endl;
		cout << endl;
		cout << "������� ����� ��������: ";
		cin >> sw;
		switch (sw) {
		case 1:
			cout << "������ ������ " << arr.GetSize() << endl;
			break;
		case 2:
			arr.Clear();
			cout << "������ ������" << endl;
			break;
		case 3:
			if (arr.IsEmpty())
				cout << "true" << endl;
			else
				cout << "false" << endl;
			break;
		case 4:
			cout << "������� ��������, ������� �������� ������ ���������" << endl;
			cin >> value;
			if (arr.IsContain(value))
				cout << "true" << endl;
			else
				cout << "false" << endl;
			break;
		case 5:
			cout << "������� ������: " << endl;
			cin >> index;
			cout << arr.GetValue(index) << endl;
			break;
		case 6:
			cout << "������� ������: " << endl;
			cin >> index;
			cout << "������� ��������: " << endl;
			cin >> value;
			arr.ChangeValue(index, value);
			cout << "�������� ��������" << endl;
			break;
		case 7:
			cout << "������� ��������: " << endl;
			cin >> value;
			cout << arr.GetIndex(value) << endl;
			break;
		case 8:
			cout << "������� ��������: " << endl;
			cin >> value;
			arr.Add(value);
			cout << "�������� ���������" << endl;
			break;
		case 9:
			cout << "������� ������: " << endl;
			cin >> index;
			cout << "������� ��������: " << endl;
			cin >> value;
			arr.AddAtIndex(index, value);
			cout << "�������� ���������" << endl;
			break;
		case 10:
			cout << "������� ��������: " << endl;
			cin >> value;
			arr.DeleteValue(value);
			cout << "�������� �������" << endl;
			break;
		case 11:
			cout << "������� ������: " << endl;
			cin >> index;
			arr.DeleteAtIndex(index);
			cout << "�������� �������" << endl;
			break;
		case 12:
			arr.Print();
			break;
		case 13:
			arr.Viewed();
			break;
		case 14:
			it = arr.begin();
			cout << "�������� begin() ��������� ���������" << endl;
			break;
		case 15:
			it = arr.end();
			cout << "�������� end() ��������� ���������" << endl;
			break;
		case 16:
			it++;
			cout << "�������� ���������" << endl;
			break;
		case 17:
			it--;
			cout << "�������� ���������" << endl;
			break;
		case 18:
			if (it == arr.begin())
				cout << "true" << endl;
			else
				cout << "false" << endl;
			break;
		case 19:
			if (it == arr.end())
				cout << "true" << endl;
			else
				cout << "false" << endl;
			break;
		case 20:
			if (it != arr.begin())
				cout << "true" << endl;
			else
				cout << "false" << endl;
			break;
		case 21:
			if (it != arr.end())
				cout << "true" << endl;
			else
				cout << "false" << endl;
			break;
		case 22:
			exit = true;
			cout << "����� �� ���������.." << endl;
			break;
		default:
			cout << "������� ������� �� ����������" << endl;
			break;
		}
	}
	return 1;
}