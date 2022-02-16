#include "Contact.hpp"
#include <string>
#include <iostream>
#include <iomanip>

Contact::Contact()
{
};

void Contact::show_data(void)
{
    std::cout.setf(std::ios::left);
    std::cout << std::setw(DATA_COLUNM_W) << "firstname" << " : " << this->first_name << std::endl;
    std::cout << std::setw(DATA_COLUNM_W) << "lastname" << " : " << this->last_name << std::endl;
    std::cout << std::setw(DATA_COLUNM_W) << "phone number" << " : " << this->phone_number << std::endl;
    std::cout << std::setw(DATA_COLUNM_W) << "nickname" << " : " << this->nickname << std::endl;
    std::cout << std::setw(DATA_COLUNM_W) << "darkest secret" << " : " << this->secret << std::endl;
    std::cout.unsetf(std::ios::left);
}

std::string Contact::get_first_name(void)
{
    return (this->first_name);
}

std::string Contact::get_last_name(void)
{
    return (this->last_name);
}

std::string Contact::get_nickname(void)
{
    return (this->nickname);
}

std::string Contact::get_phone_number(void)
{
    return (this->phone_number);
}

std::string Contact::get_secret(void)
{
    return (this->secret);
}

void    Contact::set_first_name(std::string input)
{
    this->first_name = input;
}

void    Contact::set_last_name(std::string input)
{
    this->last_name = input;
}

void    Contact::set_nickname(std::string input)
{
    this->nickname = input;
}

void    Contact::set_phone_number(std::string input)
{
    this->phone_number = input;
}

void    Contact::set_secret(std::string input)
{
    this->secret = input;
}