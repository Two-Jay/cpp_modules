#include "Phonebook.hpp"

static int simple_stoi(std::string input)
{
    int ret = 0;
    for (int i = 0, len = input.length(); i < len; i++)
    {
        if (input[i] >= '0' && input[i] <= '9')
            ret = ret * 10 + (input[i] - '0');
        else
            return -1;
    }
    return ret;
}

Phonebook::Phonebook() : saved_count(0)
{
}

Phonebook::~Phonebook()
{
}

void Phonebook::create_data(void)
{
    std::string buf;
    int current_index = saved_count % MAX_SIZE;
    std::string old_first_name = saved[current_index].get_first_name();
    std::string old_last_name = saved[current_index].get_last_name();
    std::string old_phone_number = saved[current_index].get_phone_number();
    std::string old_nick_name = saved[current_index].get_nickname();
    std::string old_secret = saved[current_index].get_secret();

    std::cout << "< Enter your inform >" << std::endl;
    std::cout << "notice : press 'e' to cancel" << std::endl;
    do {
        std::cout << "firstname : " << std::ends;
        getline(std::cin, buf);
        if (buf == "e")
        {
            saved[current_index].set_first_name(old_first_name);
            return ;
        }
        saved[current_index].set_first_name(buf);
    }   while (is_valid_input(saved[current_index].get_first_name()) == false);
    do {
        std::cout << "lastname : " << std::ends;
        getline(std::cin, buf);
        if (buf == "e")
        {
            saved[current_index].set_first_name(old_first_name);
            saved[current_index].set_last_name(old_first_name);
            return ;
        }
        saved[current_index].set_last_name(buf);
    }   while (is_valid_input(saved[current_index].get_last_name()) == false);
    do {
        buf.empty();
        std::cout << "phone number : " << std::ends;
        getline(std::cin, buf);
        if (buf == "e")
        {
            saved[current_index].set_first_name(old_first_name);
            saved[current_index].set_last_name(old_first_name);
            saved[current_index].set_phone_number(old_phone_number);
            return ;
        }
        saved[current_index].set_phone_number(buf);
     }   while (is_valid_input_number(saved[current_index].get_phone_number(), current_index) == false);
    do {
        std::cout << "nickname : " << std::ends;
        getline(std::cin, buf);
        if (buf == "e")
        {
            saved[current_index].set_first_name(old_first_name);
            saved[current_index].set_last_name(old_first_name);
            saved[current_index].set_phone_number(old_phone_number);
            saved[current_index].set_nickname(old_nick_name);
            return ;
        }
        saved[current_index].set_nickname(buf);
    }   while (is_valid_input(saved[current_index].get_nickname()) == false);
    do {
        std::cout << "darkest secret : " << std::ends;
        getline(std::cin, buf);
        if (buf == "e")
        {
            saved[current_index].set_first_name(old_first_name);
            saved[current_index].set_last_name(old_first_name);
            saved[current_index].set_phone_number(old_phone_number);
            saved[current_index].set_nickname(old_nick_name);
            saved[current_index].set_secret(old_secret);
            return ;
        }
        saved[current_index].set_secret(buf);
    }   while (is_valid_input(saved[current_index].get_secret()) == false);
    this->saved_count++;
}

void Phonebook::show_saved_data(void)
{
    int index, max = saved_count > 8 ? MAX_SIZE : saved_count;
    std::string input;

    show_saved_table();
    if (saved_count == 0)
    {
        std::cout << "Phonebook : there is no data in Phonebook" << std::endl;
    }
    else
    {
        do {
            std::cout << "Enter an index (press 'e' to cancel): " << std::ends;
            getline(std::cin, input);
            if (input == "e")
            {
                return ;
            }
            index = simple_stoi(input);
        }   while (input.length() == 0 || index == -1 || index >= max);
        saved[index].show_data();
    }
}

void Phonebook::show_saved_table(void)
{
    int max = saved_count > 8 ? MAX_SIZE : saved_count;

    std::cout << "|" << std::setfill('-') << std::setw(HEAD_LEN) << "|" << std::endl << std::setfill(' ');
    std::cout
        << "|" << std::setw(TABLE_COULUMN_LEN) << "index" << "|"
        << std::setw(TABLE_COULUMN_LEN) << "first name" << "|"
        << std::setw(TABLE_COULUMN_LEN) << "last name" << "|"
        << std::setw(TABLE_COULUMN_LEN) << "nickname" << "|"
        << std::endl;
    std::cout << "|" << std::setfill('-') << std::setw(HEAD_LEN) << "|" << std::endl << std::setfill(' ');
    if (saved_count == 0)
    {
        std::cout
            << "|" << std::setw(TABLE_COULUMN_LEN) << saved_count << "|"
            << std::setw(TABLE_COULUMN_LEN) << "" << "|"
            << std::setw(TABLE_COULUMN_LEN) << "" << "|"
            << std::setw(TABLE_COULUMN_LEN) << "" << "|"
            << std::endl;
    }
    for (int i = 0; i < max ; i++)
    {
        std::cout
        << "|" << std::setw(TABLE_COULUMN_LEN) << i << "|"
        << std::setw(TABLE_COULUMN_LEN) << string_checker(saved[i].get_first_name()) << "|"
        << std::setw(TABLE_COULUMN_LEN) << string_checker(saved[i].get_last_name()) << "|"
        << std::setw(TABLE_COULUMN_LEN) << string_checker(saved[i].get_nickname()) << "|"
        << std::endl;
    }
    std::cout << "|" << std::setfill('-') << std::setw(HEAD_LEN) << "|" << std::endl << std::setfill(' ');
}

std::string string_checker(std::string str)
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

bool Phonebook::is_valid_input_number(std::string input, int Contact_index)
{
    int max = saved_count > MAX_SIZE ? MAX_SIZE : saved_count;
    int converted_input = simple_stoi(input);

    if (input.length() == 0) return false;
    if (converted_input == -1)
    {
        std::cout << "Error : invalid number" << std::endl;
        return false;
    }
    for (int i = 0; i < max; i++)
    {
        if (input == saved[i].get_phone_number()  i != Contact_index)
        {
            std::cout << "Error : duplicated number" << std::endl;
            return false;            
        }
    }
    return true;
};

bool Phonebook::is_valid_input(std::string str)
{
    if (str.length() == 0) return false;
    return true;
}
