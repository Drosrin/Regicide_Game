#include <string>

class Enemy;
class Slime;

Slime slime;

class Enemy
{
public:
        int id;
        int atk;
        std::string name;
        std::string description;
        virtual void specialAttack(){};
};

class Slime : public Enemy
{
public:
        int id = 1;
        int atk = 3;
        std::string name = "Slime";
        std::string description = "Weak creature.Deal 3 Damage per turn.";
        void specialAttack(){};
}
