#include "List.h"
#define TYPE string

int main()
{
	setlocale(LC_ALL, "Rus");
	int sw;
	bool exit = false;
	List<TYPE> list;
	List<TYPE>::Iterator it;

	while (!exit) {
		sw = NULL;
		int index;
		TYPE value;
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
			cout << "������ ������ " << list.GetSize() << endl;
			break;
		case 2:
			list.Clear();
			break;
		case 3:
			cout << list.IsEmpty();
			break;
		case 4:
			cout << "������� ��������, ������� �������� ������ ���������" << endl;
			cin >> value;
			cout << list.IsContain(value);
			break;
		case 5:
			cout << "������� ������: " << endl;
			cin >> index;
			cout << list.GetValue(index) << endl;
			break;
		case 6:
			cout << "������� ������: " << endl;
			cin >> index;
			cout << "������� ��������: " << endl;
			cin >> value;
			list.ChangeValue(index, value);
			break;
		case 7:
			cout << "������� ��������: " << endl;
			cin >> value;
			cout << list.GetIndex(value) << endl;
			break;
		case 8:
			cout << "������� ��������: " << endl;
			cin >> value;
			list.Add(value);
			break;
		case 9:
			cout << "������� ������: " << endl;
			cin >> index;
			cout << "������� ��������: " << endl;
			cin >> value;
			list.AddAtIndex(index, value);
			break;
		case 10:
			cout << "������� ��������: " << endl;
			cin >> value;
			list.DeleteValue(value);
			break;
		case 11:
			cout << "������� ������: " << endl;
			cin >> index;
			list.DeleteAtIndex(index);
			break;
		case 12:
			list.Print();
			break;
		case 13:
			list.Viewed();
			break;
		case 14:
			it = list.begin();
			break;
		case 15:
			it = list.end();
			break;
		case 16:
			it++;
			break;
		case 17:
			it--;
			break;
		case 18:
			cout << (it == list.begin());
			break;
		case 19:
			cout << (it == list.end());
			break;
		case 20:
			cout << (it != list.begin());
			break;
		case 21:
			cout << (it != list.end());
			break;
		case 22:
			exit = true;
			break;
		default:
			cout << "������� ������� �� ����������" << endl;
			break;
		}
	}
	return 1;
}