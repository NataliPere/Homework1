#include <iostream>
#include "PhoneBook.h"


int main() {

	setlocale(LC_ALL, "Russian");

	std::cout << "���������� �����\n";
	std::cout << "=================\n";

	PhoneBook p1("Stanislav", "374-98-78", "8-985-987-75-78", 1986);

	std::cout << "��� ��������: " << p1.getName() << "\n" << "�������� ������� ��������: " << p1.getHomePhoneNumber() << "\n"
		<< "��������� ������� ��������: " << p1.getMobilePhone() << "\n" << "��� �������� ��������: " << p1.getYearOfBirth() << "\n\n\n";


	Subscriber s1("Ivanov", "Vladimirovich");

	std::cout << "������ ������ �������� " << p1.getName() << ": \n";
	std::cout << "=================\n";

	std::cout << "������� ��������: " << s1.getSername() << "\n" << "��� ��������: " << p1.getName() << "\n"
		<< "�������� ��������: " << s1.getPatronymic() << "\n" << "��� �������� ��������: " << p1.getYearOfBirth() << "\n";
	std::cout << "\n\n";

	PhoneBook p2("Ekaterina", "541-97-58", "8-953-654-78-32", 1982);

	std::cout << "��� ��������: " << p2.getName() << "\n" << "�������� ������� ��������: " << p2.getHomePhoneNumber() << "\n"
		<< "��������� ������� ��������: " << p2.getMobilePhone() << "\n" << "��� �������� ��������: " << p2.getYearOfBirth() << "\n\n\n";


	Subscriber s2("Panova", "Pavlovna");

	std::cout << "������ ������ �������� " << p2.getName() << ": \n";
	std::cout << "=================\n";

	std::cout << "������� ��������: " << s2.getSername() << "\n" << "��� ��������: " << p2.getName() << "\n"
		<< "�������� ��������: " << s2.getPatronymic() << "\n" << "��� �������� ��������: " << p2.getYearOfBirth() << "\n";
	std::cout << "\n\n";

	std::cout << "����� ���� ��� ���������� �����: \n";
	std::cout << p1.getName() << "  " << p2.getName() << "  \n";

	std::cout << "�������� ������ �������� � ���������� �����:\n";
	int info;
	std::cout << "������� _1_, ����� �������� ������ � ���������� �����: " << "\n";
	std::cin >> info;

	if (info <= 0 || info > 1)
		std::cout << "������ �����";

	new_subscriber new1;
	new1.new_name = "exampleName";
	new1.new_patronymic = "examplePatronymic";

	switch (info) {
	case 1: std::cout << "������� ���������� � ����� ��������: " << "\n"; update_info(new1); show_subscriber(new1); break;

	default: break;
	}
}