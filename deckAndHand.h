#ifndef DECKANDHAND_H
#define DECKANDHAND_H
#include <string>
#include "card.h"

class Deck;
class Hand;

Deck deck;
Deck discard;
Hand hand;

class Deck{
public:
    static const int MAX_SIZE = 50;
    card decks[MAX_SIZE];
    int nowSize;
    void deckInit(){
        this->nowSize = 10;
        for (int i = 0; i < 4;i++){
            this->decks[i] = allMeleeAttack.addtoDeck();
        }
        for (int i = 4; i < 8;i++){
            this->decks[i] = allDefend.addtoDeck();
        }
        for (int i = 8; i < 10;i++){
            this->decks[i] = allClearMind.addtoDeck();
        }
    }
};

class Hand{
public:
    static const int MAX_SIZE = 9;
    int nowSize;
    card hands[MAX_SIZE];
    void handInit(){
        this->nowSize = 4;
        this->hands[0] = allMeleeAttack.addtoDeck();
        this->hands[1] = allMeleeAttack.addtoDeck();
        this->hands[2] = allMeleeAttack.addtoDeck();
        this->hands[3] = allDefend.addtoDeck();
    };
    void drawCardFromDeck(){
        this->nowSize++;
    }
};

#endif