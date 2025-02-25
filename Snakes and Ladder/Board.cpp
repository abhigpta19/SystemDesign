#include "Board.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

Board::Board(int size, vector<Player*> players, vector<BoardEntities*> snl) {
    this->size = size;
    this->players = players;
    
    for (auto entity : snl) {
        boardmap[entity->getStart()] = entity; 
    }
}

void Board::play() {
    srand(time(0));  
    
    bool gameOver = false;
    while (!gameOver) {
        for (auto player : players) {
            // Roll the dice (random number between 1 and 6)
            int diceRoll = rand() % 6 + 1;
            cout << player->getName() << " rolled a " << diceRoll << endl;
            player->setPosition(diceRoll+player->getPosition());

            // Check if the player encounters a snake or ladder
            if (boardmap.find(player->getPosition()) != boardmap.end()) {
                BoardEntities* entity = boardmap[player->getPosition()];
                cout << player->getName() << " encountered a " << entity->getType() << "!" << endl;
                player->setPosition(entity->getEnd());  // Move the player to the end of the snake or ladder
            }

            cout<<"The final position of "<<player->getName()<<" is : "<<player->getPosition()<<endl;

            // Check if the player has reached the end
            if (player->getPosition() >= size) {
                cout << player->getName() << " has won the game!" << endl;
                gameOver = true;
                break;
            }
        }
    }
}
