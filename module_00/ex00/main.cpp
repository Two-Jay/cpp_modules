#include <iostream>
#include <string>

std::string makeSoundRoudly(std::string str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = static_cast<char>(toupper(str[i]));
	}
	return (str);
}

int main(int argc, char **argv)
{
    std::string targetString;
 
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
	else
	{
		for (int i = 1; argv[i]; i++)
		{
			targetString = argv[i];
			std::cout << makeSoundRoudly(targetString);
		}
		std::cout << std::endl;
	}
    return (0);
}