#include "List.h"
#define TYPE std::string

int main()
{
	setlocale(LC_ALL, "Rus");
	int sw = 0;
	bool exit = false;
	int index;
	TYPE value;
	List<TYPE> list;
	List<TYPE>::Iterator it;
	std::exception outOfList("����� �� ������� ������!");

	while (!exit) {
		std::cout << "\n\t������ ��������\n";
		std::cout << "\t1. �������� ������ ������\n";
		std::cout << "\t2. ������� ������\n";
		std::cout << "\t3. �������� ������ �� �������\n";
		std::cout << "\t4. �������� �� ������ �������� ��������\n";
		std::cout << "\t5. ������ �������� ��� �������� ��������\n";
		std::cout << "\t6. ��������� �������� ��� �������� ��������\n";
		std::cout << "\t7. ��������� ������� � ������ ��� ��������� ��������\n";
		std::cout << "\t8. �������� ����� ��������\n";
		std::cout << "\t9. ��������� ������ �������� � �������� ��������\n";
		std::cout << "\t10. �������� �������� �� ������\n";
		std::cout << "\t11. �������� �������� �� ��������� �������\n";
		std::cout << "\t12. ����� ������ � �������\n";
		std::cout << "\t13. ����� ���������� ������������� ��������� ������\n";
		std::cout << "\t14. ��������� begin() ���������\n";
		std::cout << "\t15. ��������� end() ���������\n";
		std::cout << "\t16. ��������� � ��������� �������� ++\n";
		std::cout << "\t17. ��������� � ��������� �������� --\n";
		std::cout << "\t18. ���������, ����� �� �������� ��������� begin()\n";
		std::cout << "\t19. ���������, ����� �� �������� ��������� end()\n";
		std::cout << "\t20. ���������, �� ����� �� �������� ��������� begin()\n";
		std::cout << "\t21. ���������, �� ����� �� �������� ��������� end()\n";
		std::cout << "\t22. ����� �� ���������\n";
		std::cout << "\n������� ����� ��������: ";
		std::cin >> sw;
		try {
			switch (sw) {
			case 1:
				std::cout << "������ ������ " << list.getSize() << std::endl;
				break;
			case 2:
				list.clear();
				break;
			case 3:
				std::cout << list.isEmpty();
				break;
			case 4:
				std::cout << "������� ��������, ������� �������� ������ ���������\n";
				std::cin >> value;
				std::cout << list.isContain(value);
				break;
			case 5:
				std::cout << "������� ������: ";
				std::cin >> index;
				if (index <= list.getSize() - 1) {
					std::cout << list.getValue(index) << std::endl;
				}
				else {
					throw outOfList;
				}
				break;
			case 6:
				std::cout << "������� ������: ";
				std::cin >> index;
				if (index <= list.getSize() - 1) {
					std::cout << "������� ��������: ";
					std::cin >> value;
					list.changeValue(index, value);
				}
				else {
					throw outOfList;
				}
				break;
			case 7:
				std::cout << "������� ��������: ";
				std::cin >> value;
				std::cout << list.getIndex(value) << std::endl;
				break;
			case 8:
				std::cout << "������� ��������: ";
				std::cin >> value;
				list.add(value);
				break;
			case 9:
				std::cout << "������� ������: ";
				std::cin >> index;
				if (index <= list.getSize() - 1) {
					std::cout << "������� ��������: ";
					std::cin >> value;
					list.addAtIndex(index, value);
				}
				else {
					throw outOfList;
				}
				break;
			case 10:
				std::cout << "������� ��������: ";
				std::cin >> value;
				list.deleteValue(value);
				break;
			case 11:
				std::cout << "������� ������: ";
				std::cin >> index;
				if (index <= list.getSize() - 1) {
					list.deleteAtIndex(index);
				}
				else {
					throw outOfList;
				}
				break;
			case 12:
				list.print();
				break;
			case 13:
				list.viewed();
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
				std::cout << (it == list.begin());
				break;
			case 19:
				std::cout << (it == list.end());
				break;
			case 20:
				std::cout << (it != list.begin());
				break;
			case 21:
				std::cout << (it != list.end());
				break;
			case 22:
				exit = true;
				break;
			default:
				throw std::exception("������ �������� �� ����������");
				break;
			}
		}
		catch (const std::exception& ex) {
			std::cout << ex.what() << std::endl;
		}
	}
	return 1;
}