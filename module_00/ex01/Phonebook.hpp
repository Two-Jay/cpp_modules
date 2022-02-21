
#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>

# define MAX_SIZE 8
# define TABLE_COULUMN_LEN 10
# define HEAD_LEN 44

class Phonebook {
    private:
        int saved_count;
        Contact saved[MAX_SIZE];

    public:
        Phonebook();
        ~Phonebook();
        void create_data(void);
        void show_saved_data(void);
        void show_saved_table(void);
        bool is_valid_input_number(std::string str, int Contact_index);
        bool is_valid_input(std::string str);
};

std::string string_checker(std::string str);

#endif