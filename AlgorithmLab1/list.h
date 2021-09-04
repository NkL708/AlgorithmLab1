#pragma once
#include <iostream>
#include <string>

using namespace std;

template <typename T>
class List
{
	class Element
	{
	public:
		Element(Element* next, T data = T());
		T data;
		Element* next;
	};

	int viewed = 0;
	Element* head;
	int size;

public:
	List();		// �-��
	~List();	// �-��
	List(const List& obj);		// �-�� �����������
	int GetSize();		// ������ ������
	void Clear();		// ������� ������
	bool IsEmpty();		// �������� �� �������
	bool IsContain(T value);		// �������� �� �������� �������� 
	T GetValue(int index);		// ������ �������� ��� ��������
	void ChangeValue(int index, T value);		// ��������� �������� ��� ��������
	int GetIndex(T value);		// ��������� ������� � ������ ��� ��������� ��������
	void Add(T value);		// ��������� ������ ��������
	void AddAtIndex(int index, T value);		// ��������� ������ �������� � ��������
	void DeleteValue(T value);		// �������� �������� �� ������
	void DeleteAtIndex(int index);		// �������� �������� �� ��������� �������
	void Print();		// ����� ������
	void Viewed();		// ����� ���-�� ������������� �-�� ������

	class Iterator
	{
	public:
		Element* obj;

		T& operator*();
		Iterator operator++(int);
		Iterator operator--(int);
		bool operator ==(const Iterator& it);
		bool operator !=(const Iterator& it);
	};
	Iterator begin();
	Iterator end();
};

template<typename T>
inline List<T>::Element::Element(Element* next, T data)
{
	this->data = data;
	this->next = next;
}

template<typename T>
inline List<T>::List()
{
	size = 0;
	head = nullptr;
}

template<typename T>
inline List<T>::~List()
{
	Clear();
}

template<typename T>
inline List<T>::List(const List& obj)
{
	Element* current = obj.head;
	do
	{
		this->Add(current->data);
		current = current->next;
	} while (current != obj.head);
}

template<typename T>
inline int List<T>::GetSize()
{
	return this->size;
}

template<typename T>
inline void List<T>::Clear()
{
	while (size > 0)
	{
		Element* temp = head;
		head = head->next;
		delete temp;
		size--;
	}
}

template<typename T>
inline bool List<T>::IsEmpty()
{
	if (size == 0 || head == nullptr)
		return true;
	else
		return false;
}

template<typename T>
inline bool List<T>::IsContain(T value)
{
	viewed = 1;
	Element* current = head;
	do
	{
		if (current->data == value)
			return true;
		current = current->next;
		viewed++;
	} while (current != head);

	return false;
}

template<typename T>
inline T List<T>::GetValue(int index)
{
	viewed = 1;
	int i = 0;
	Element* current = head;
	while (i != index)
	{
		current = current->next;
		viewed++;
		i++;
	}
	return current->data;
}

template<typename T>
inline void List<T>::ChangeValue(int index, T value)
{
	viewed = 1;
	int i = 0;
	Element* current = head;
	while (i != index)
	{
		current = current->next;
		viewed++;
		i++;
	}
	current->data = value;
}

template<typename T>
inline int List<T>::GetIndex(T value)
{
	viewed = 1;
	int index = 0;
	Element* current = head;
	do
	{
		if (current->data == value)
			return index;
		current = current->next;
		viewed++;
		index++;
	} while (current != head);
	return -1;
}

template<typename T>
inline void List<T>::Add(T value)
{
	viewed = 1;
	if (head != nullptr)
	{
		Element* current = head;
		while (current->next != head)
		{
			current = current->next;
			viewed++;
		}
		current->next = new Element(head, value);
	}
	else
	{
		head = new Element(nullptr, value);
		head->next = head;
	}
	size++;
}

template<typename T>
inline void List<T>::AddAtIndex(int index, T value)
{
	viewed = 1;
	if (index == 0)
	{
		viewed = 0;
		Element* temp = head;
		head = new Element(temp, value);
		Element* current = temp;
		while (current->next != temp)
		{
			current = current->next;
			viewed++;
		}
		current->next = head;
		size++;
		return;
	}
	int i = 0;
	Element* current = head;
	while (i < index - 1)
	{
		current = current->next;
		viewed++;
		i++;
	}
	Element* temp = current->next;
	current->next = new Element(temp, value);
	size++;
}

template<typename T>
inline void List<T>::DeleteValue(T value)
{
	viewed = 1;
	int index = 0;
	Element* current = head;
	do
	{
		if (current->data == value)
		{
			DeleteAtIndex(index);
			return;
		}
		current = current->next;
		viewed++;
		index++;
	} while (current != head);
}

template<typename T>
inline void List<T>::DeleteAtIndex(int index)
{
	viewed = 1;
	if (index == 0)
	{
		Element* temp = head;
		Element* current = head;
		while (current->next != head)
		{
			current = current->next;
			viewed++;
		}
		head = temp->next;
		current->next = head;
		delete temp;
		size--;
		return;
	}
	int i = 0;
	Element* current = head;
	while (i < index - 1)
	{
		current = current->next;
		viewed++;
		i++;
	}
	Element* temp = current->next;
	current->next = temp->next;
	delete temp;
	size--;
}

template<typename T>
inline void List<T>::Print()
{
	cout << "������:\n";
	if (GetSize() == 0) cout << "����" << endl;
	for (int i = 0; i < GetSize(); i++)
	{
		cout << GetValue(i) << endl;
	}
	cout << endl;
}

template<typename T>
inline void List<T>::Viewed()
{
	cout << "����������� ��������� � ������� ��������: " << viewed << " \n";
}

template<typename T>
inline List<T>::Iterator List<T>::begin()
{
	Iterator it;
	it.obj = head;
	return it;
}

template<typename T>
inline List<T>::Iterator List<T>::end()
{
	if (!IsEmpty())
	{
		Iterator it;
		it.obj = head;
		while (it.obj->next != head)
		{
			it.obj = it.obj->next;
		}
		return it;
	}
	else {
		Iterator it;
		it.obj = head;
		return it;
	}
}

template<typename T>
inline T& List<T>::Iterator::operator*()
{
	return obj->data;
}

template<typename T>
inline List<T>::Iterator List<T>::Iterator::operator++(int)
{
	Iterator it = *this;
	obj = obj->next;
	return it;
}

template<typename T>
inline List<T>::Iterator List<T>::Iterator::operator--(int)
{
	Iterator it = *this;
	Element* target = obj;
	while (obj->next != target)
	{
		obj = obj->next;
	}
	return it;
}

template<typename T>
inline bool List<T>::Iterator::operator==(const Iterator& it)
{
	if (obj->next == it.obj->next) return true;
	else return false;
}

template<typename T>
inline bool List<T>::Iterator::operator!=(const Iterator& it)
{
	if (obj->next != it.obj->next) return true;
	else return false;
}