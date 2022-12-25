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
		std::cout << "������� ��������� ���������� �� ��������: " << "\n";
		std::cout << "1. ���." << "\n";
		std::cout << "2. �������." << "\n";
		std::cout << "3. ��������." << "\n";
		std::cout << "4. �������� �������." << "\n";
		std::cout << "5. ��������� �������." << "\n";
		std::cout << "6. ��� ��������." << "\n";


		std::cin >> info;
		if (info <= 0 || info > 6)
			std::cout << "������ �����" << "\n";

		for (int i = 0; i < info; i++) {

			switch (info) {
			case 1: std::cout << "������� ��� ��������: "; std::cin >> N.new_name; break; return;
			case 2: std::cout << "������� ������� ��������: "; std::cin >> N.new_sername; break; return;
			case 3: std::cout << "������� �������� ��������: "; std::cin >> N.new_patronymic; break; return;
			case 4: std::cout << "������� �������� ������� ��������: "; std::cin >> N.new_homePhoneNumber; break; return;
			case 5: std::cout << "������� ��������� ������� ��������: "; std::cin >> N.new_mobilePhone; break; return;
			case 6: std::cout << "������� ��� �������� ��������: "; std::cin >> N.new_year; break; return;

			default: break; return;
			}
		}
		std::cout << "\n";
	}

		void show_subscriber(new_subscriber N) {

			std::cout << "���:" << N.new_name << "\n";
			std::cout << "�������:" << N.new_sername << "\n";
			std::cout << "��������:" << N.new_patronymic << "\n";
			std::cout << "�������� �������:" << N.new_homePhoneNumber << "\n";
			std::cout << "��������� �������:" << N.new_mobilePhone << "\n";
			std::cout << "��� ��������:" << N.new_year << "\n";

		}
		

