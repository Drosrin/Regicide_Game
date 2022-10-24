#include <iostream>
#include <iomanip>
#include "includer.h"

using namespace std;

void init(){
    deck.deckInit();
    hand.handInit();
    discard.deckInit();
    player.playerInit();
}

int main(){
    init();
    while(true){//gameplay
    //in turn
        //show enemy when necessary
        //play card
        //activate effect
        //deal damage
        //ensure validity
        //is dead
        //suffer damage
    //if defeat
    //if new enemy
    }
    return 0;
}