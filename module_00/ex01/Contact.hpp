#ifndef CONTACT_HPP
# define CONTACT_HPP

#define DATA_COLUNM_W 15

#include <iostream>
#include <string>
#include <iomanip>

class Contact {
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string secret;

    public:
        Contact();
        void    show_data(void);
        std::string get_first_name(void);
        std::string get_last_name(void);
        std::string get_nickname(void);
        std::string get_phone_number(void);
        std::string get_secret(void);

        void set_first_name(std::string input);
        void set_last_name(std::string input);
        void set_nickname(std::string input);
        void set_phone_number(std::string input);
        void set_secret(std::string input);
};

#endif