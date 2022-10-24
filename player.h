#include <string>

class Player;

Player player;

class Player
{
public:
    int hp;
    int defence;
    void playerInit(){
        this->hp = 20;
        this->defence = 0;
    }
    void sufferDamage(int damage){
        this->hp -= damage;
    }
};