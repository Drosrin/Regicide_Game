#ifndef CARD_H
#define CARD_H

#include <string>
#include "enemy.h"
#include "deckAndHand.h"
#include "player.h"

class card;
class MeleeAttack;
class Defend;
class ClearMind;

card cards;
MeleeAttack allMeleeAttack;
Defend allDefend;
ClearMind allClearMind;

class card
{
public:
    int iter = 0;
    int id;
    int atk;
    std::string type;
    std::string description;
    std::string name;
    virtual void effect(){};
    virtual card addtoDeck(){};
};

class MeleeAttack : public card
{
public:
    int id = 1;
    int atk = 3;
    std::string type = "Melee";
    std::string description = "Deal 3 Damage";
    std::string name = "Melee Attack";
    void effect(){};
    card addtoDeck(){
        return allMeleeAttack;
    };
};

class Defend : public card
{
public:
    int id = 2;
    int atk = 0;
    std::string type = "Melee";
    std::string description = "Defence add by 3";
    std::string name = "Defend";
    void effect(){
        player.defence += 3;
    };
    card addtoDeck(){
        return allDefend;
    }
};

class ClearMind : public card
{
public:
    int id = 3;
    int atk = 0;
    std::string type = "Spell";
    std::string description = "Draw 1 card";
    std::string name = "Clear Mind";
    void effect(){};
    card addtoDeck(){
        return allClearMind;
    }
};


#endif