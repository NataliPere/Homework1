#include <iostream>
#include "PhoneBook.h"


int main() {

	setlocale(LC_ALL, "Russian");

	std::cout << "Телефонная книга\n";
	std::cout << "=================\n";

	PhoneBook p1("Stanislav", "374-98-78", "8-985-987-75-78", 1986);

	std::cout << "Имя абонента: " << p1.getName() << "\n" << "Домашний телефон абонента: " << p1.getHomePhoneNumber() << "\n"
		<< "Мобильный телефон абонента: " << p1.getMobilePhone() << "\n" << "Год рождения абонента: " << p1.getYearOfBirth() << "\n\n\n";


	Subscriber s1("Ivanov", "Vladimirovich");

	std::cout << "Личные данные абонента " << p1.getName() << ": \n";
	std::cout << "=================\n";

	std::cout << "Фамилия абонента: " << s1.getSername() << "\n" << "Имя абонента: " << p1.getName() << "\n"
		<< "Отчество абонента: " << s1.getPatronymic() << "\n" << "Год рождения абонента: " << p1.getYearOfBirth() << "\n";
	std::cout << "\n\n";

	PhoneBook p2("Ekaterina", "541-97-58", "8-953-654-78-32", 1982);

	std::cout << "Имя абонента: " << p2.getName() << "\n" << "Домашний телефон абонента: " << p2.getHomePhoneNumber() << "\n"
		<< "Мобильный телефон абонента: " << p2.getMobilePhone() << "\n" << "Год рождения абонента: " << p2.getYearOfBirth() << "\n\n\n";


	Subscriber s2("Panova", "Pavlovna");

	std::cout << "Личные данные абонента " << p2.getName() << ": \n";
	std::cout << "=================\n";

	std::cout << "Фамилия абонента: " << s2.getSername() << "\n" << "Имя абонента: " << p2.getName() << "\n"
		<< "Отчество абонента: " << s2.getPatronymic() << "\n" << "Год рождения абонента: " << p2.getYearOfBirth() << "\n";
	std::cout << "\n\n";

	std::cout << "Вывод всех имён телефонной книги: \n";
	std::cout << p1.getName() << "  " << p2.getName() << "  \n";

	std::cout << "Добавьте нового абонента в телефонную книгу:\n";
	int info;
	std::cout << "Введите _1_, чтобы добавить запись в телефонную книгу: " << "\n";
	std::cin >> info;

	if (info <= 0 || info > 1)
		std::cout << "Ошибка ввода";

	new_subscriber new1;
	new1.new_name = "exampleName";
	new1.new_patronymic = "examplePatronymic";

	switch (info) {
	case 1: std::cout << "Введите информацию о новом абоненте: " << "\n"; update_info(new1); show_subscriber(new1); break;

	default: break;
	}
}