#pragma once
#include <string>

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

struct new_subscriber {} new1;
void update_info(new_subscriber& N) {};
void show_subscriber(new_subscriber N) {};










