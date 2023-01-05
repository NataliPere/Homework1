#pragma once
#ifndef _PhoneBook_h_
#define _PhoneBook_h_


#include <string>
#include <iostream>


class PhoneBook
{
public:
	PhoneBook();

	PhoneBook(std::string name, std::string homePhoneNumber, std::string mobilePhone, int yearOfBirth);

	std::string& getName();
	void setName(std::string& name);

	std::string& getHomePhoneNumber();
	void setHomePhoneNumber(std::string& homePhoneNumber);

	std::string& getMobilePhone();
	void setMobilePhone(std::string& mobilePhone);

	int& getYearOfBirth();
	void setYearOfBirth(int& YearOfBirth);


private:
	std::string _name;
	std::string _homePhoneNumber;
	std::string _mobilePhone;
	int _yearOfBirth;

};

class Subscriber : public PhoneBook

{
public:
	Subscriber();

	Subscriber(std::string sername, std::string patronymic);

	std::string& getSername();
	void setSername(std::string& sernamename);

	std::string& getPatronymic();
	void setPatronymic(std::string& patronymic);

private:
	std::string _sername;
	std::string _patronymic;

};


struct new_subscriber {
	std::string new_name;
	std::string new_sername;
	std::string new_patronymic;
	std::string new_homePhoneNumber;
	std::string new_mobilePhone;
	int new_year = 1965;
};

void update_info(new_subscriber& N);
void show_subscriber(new_subscriber N);


#endif // !_PhoneBook_h_







