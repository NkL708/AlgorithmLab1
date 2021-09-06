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
		cout << "1. Получить размер списка" << endl;
		cout << "2. Очистка списка" << endl;
		cout << "3. Проверка списка на пустоту" << endl;
		cout << "4. Содержит ли список заданное значение" << endl;
		cout << "5. Чтение значения под заданным индексом" << endl;
		cout << "6. Изменение значения под заданным индексом" << endl;
		cout << "7. Получение позиции в списке для заданного значения" << endl;
		cout << "8. Добавить новое значение" << endl;
		cout << "9. Включение нового значения с заданным индексом" << endl;
		cout << "10. Удаление значения из списка" << endl;
		cout << "11. Удаление значения из заданного индекса" << endl;
		cout << "12. Вывод списка в консоль" << endl;
		cout << "13. Вывод количество просмотренных элементов списка" << endl;
		cout << "14. Присвоить begin() итератору" << endl;
		cout << "15. Присвоить end() итератору" << endl;
		cout << "16. Выполнить к итератору операцию ++" << endl;
		cout << "17. Выполнить к итератору операцию --" << endl;
		cout << "18. Проверить, равен ли итератор итератору begin()" << endl;
		cout << "19. Проверить, равен ли итератор итератору end()" << endl;
		cout << "20. Проверить, не равен ли итератор итератору begin()" << endl;
		cout << "21. Проверить, не равен ли итератор итератору end()" << endl;
		cout << "22. Выход из программы" << endl;
		cout << endl;
		cout << "Введите номер операции: ";
		cin >> sw;
		switch (sw) {
		case 1:
			cout << "Размер списка " << list.GetSize() << endl;
			break;
		case 2:
			list.Clear();
			break;
		case 3:
			cout << list.IsEmpty();
			break;
		case 4:
			cout << "Введите значение, наличие которого хотите проверить" << endl;
			cin >> value;
			cout << list.IsContain(value);
			break;
		case 5:
			cout << "Введите индекс: " << endl;
			cin >> index;
			cout << list.GetValue(index) << endl;
			break;
		case 6:
			cout << "Введите индекс: " << endl;
			cin >> index;
			cout << "Введите значение: " << endl;
			cin >> value;
			list.ChangeValue(index, value);
			break;
		case 7:
			cout << "Введите значение: " << endl;
			cin >> value;
			cout << list.GetIndex(value) << endl;
			break;
		case 8:
			cout << "Введите значение: " << endl;
			cin >> value;
			list.Add(value);
			break;
		case 9:
			cout << "Введите индекс: " << endl;
			cin >> index;
			cout << "Введите значение: " << endl;
			cin >> value;
			list.AddAtIndex(index, value);
			break;
		case 10:
			cout << "Введите значение: " << endl;
			cin >> value;
			list.DeleteValue(value);
			break;
		case 11:
			cout << "Введите индекс: " << endl;
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
			cout << "Данного индекса не существует" << endl;
			break;
		}
	}
	return 1;
}