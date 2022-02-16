#include <string>

class Weapon
{
    private :
        std::string name;
        Weapon();

    public :
        Weapon(std::string type);
        void    setType(std::string type);
        const std::string& getType(void);
};