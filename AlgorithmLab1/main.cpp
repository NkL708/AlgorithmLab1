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
			cout << "Размер списка " << arr.GetSize() << endl;
			break;
		case 2:
			arr.Clear();
			cout << "Список очищен" << endl;
			break;
		case 3:
			if (arr.IsEmpty())
				cout << "true" << endl;
			else
				cout << "false" << endl;
			break;
		case 4:
			cout << "Введите значение, наличие которого хотите проверить" << endl;
			cin >> value;
			if (arr.IsContain(value))
				cout << "true" << endl;
			else
				cout << "false" << endl;
			break;
		case 5:
			cout << "Введите индекс: " << endl;
			cin >> index;
			cout << arr.GetValue(index) << endl;
			break;
		case 6:
			cout << "Введите индекс: " << endl;
			cin >> index;
			cout << "Введите значение: " << endl;
			cin >> value;
			arr.ChangeValue(index, value);
			cout << "Значение изменено" << endl;
			break;
		case 7:
			cout << "Введите значение: " << endl;
			cin >> value;
			cout << arr.GetIndex(value) << endl;
			break;
		case 8:
			cout << "Введите значение: " << endl;
			cin >> value;
			arr.Add(value);
			cout << "Значение добавлено" << endl;
			break;
		case 9:
			cout << "Введите индекс: " << endl;
			cin >> index;
			cout << "Введите значение: " << endl;
			cin >> value;
			arr.AddAtIndex(index, value);
			cout << "Значение добавлено" << endl;
			break;
		case 10:
			cout << "Введите значение: " << endl;
			cin >> value;
			arr.DeleteValue(value);
			cout << "Значение удалено" << endl;
			break;
		case 11:
			cout << "Введите индекс: " << endl;
			cin >> index;
			arr.DeleteAtIndex(index);
			cout << "Значение удалено" << endl;
			break;
		case 12:
			arr.ShowList();
			break;
		case 13:
			arr.Viewed();
			break;
		case 14:
			it = arr.begin();
			cout << "Значение begin() присвоено итератору" << endl;
			break;
		case 15:
			it = arr.end();
			cout << "Значение end() присвоено итератору" << endl;
			break;
		case 16:
			++it;
			cout << "Операция выполнена" << endl;
			break;
		case 17:
			--it;
			cout << "Операция выполнена" << endl;
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
			cout << "Выход из программы.." << endl;
			break;
		default:
			cout << "Данного индекса не существует" << endl;
			break;
		}
	}
	return 1;
}