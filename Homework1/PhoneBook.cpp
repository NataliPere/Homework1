#include "PhoneBook.h"
#include <iostream>

PhoneBook::PhoneBook() {
	_name = "DefaultName";
	_homePhoneNumber = "365-55-44";
	_mobilePhone = "8-953-053-78-98";
	_yearOfBirth = 1987;
}

PhoneBook::PhoneBook(std::string name, std::string homePhoneNumber, std::string mobilePhone, int yearOfBirth) : _name(name), _homePhoneNumber(homePhoneNumber), _mobilePhone(mobilePhone), _yearOfBirth(yearOfBirth) {}

	std::string& PhoneBook::getName() {
	return _name;
}

	void PhoneBook::setName(std::string& name) {
	_name = name;
}

	std::string& PhoneBook::getHomePhoneNumber() {
		return _homePhoneNumber;
	}

	void PhoneBook::setHomePhoneNumber(std::string& homePhoneNumber) {
		_homePhoneNumber = homePhoneNumber;
	}

	std::string& PhoneBook::getMobilePhone() {
		return _mobilePhone;
	}

	void PhoneBook::setMobilePhone(std::string& mobilePhone) {
		_mobilePhone = mobilePhone;
	}
	
	int& PhoneBook::getYearOfBirth() {
		return _yearOfBirth;
	}

	void PhoneBook::setYearOfBirth(int& yearOfBirth) {
		_yearOfBirth = yearOfBirth;
	}


Subscriber::Subscriber() {
		_sername = "DefaultName";
		_patronymic = "DefaultName";
		
	}

	Subscriber::Subscriber(std::string sername, std::string patronymic) : _sername(sername), _patronymic(patronymic) {}

	std::string& Subscriber::getSername() {
		return _sername;
	}

	void Subscriber::setSername(std::string& sername) {
		_sername = sername;
	}

	std::string& Subscriber::getPatronymic() {
		return _patronymic;
	}

	void Subscriber::setPatronymic(std::string& patronymic) {
		_patronymic = patronymic;
	}
	struct new_subscriber {
		std::string new_name;
		std::string new_sername;
		std::string new_patronymic;
		std::string new_homePhoneNumber;
		std::string new_mobilePhone;
		int new_year;
		
	} new1;

	void update_info(new_subscriber& N) {

		int info;
		std::cout << "Укажите следующую информацию об абоненте: " << "\n";
		std::cout << "1. Имя." << "\n";
		std::cout << "2. Фамилия." << "\n";
		std::cout << "3. Отчество." << "\n";
		std::cout << "4. Домашний телефон." << "\n";
		std::cout << "5. Мобильный телефон." << "\n";
		std::cout << "6. Год рождения." << "\n";


		std::cin >> info;
		if (info <= 0 || info > 6)
			std::cout << "Ошибка ввода" << "\n";

		for (int i = 0; i < info; i++) {

			switch (info) {
			case 1: std::cout << "Введите имя абонента: "; std::cin >> N.new_name; break; return;
			case 2: std::cout << "Введите фамилию абонента: "; std::cin >> N.new_sername; break; return;
			case 3: std::cout << "Введите отчество абонента: "; std::cin >> N.new_patronymic; break; return;
			case 4: std::cout << "Введите домашний телефон абонента: "; std::cin >> N.new_homePhoneNumber; break; return;
			case 5: std::cout << "Введите мобильный телефон абонента: "; std::cin >> N.new_mobilePhone; break; return;
			case 6: std::cout << "Введите год рождения абонента: "; std::cin >> N.new_year; break; return;

			default: break; return;
			}
		}
		std::cout << "\n";
	}

		void show_subscriber(new_subscriber N) {

			std::cout << "Имя:" << N.new_name << "\n";
			std::cout << "Фамилия:" << N.new_sername << "\n";
			std::cout << "Отчество:" << N.new_patronymic << "\n";
			std::cout << "Домашний телефон:" << N.new_homePhoneNumber << "\n";
			std::cout << "Мобильный телефон:" << N.new_mobilePhone << "\n";
			std::cout << "Год рождения:" << N.new_year << "\n";

		}
		

