#pragma once
#include<bits/stdc++.h>
using namespace std;
#include "Player.hpp"
#include "BoardEntities.hpp"

class Board
{
    int size;
    vector<Player*> players;
    map<int,BoardEntities*> boardmap;

    public:
    Board(int size,vector<Player*> players,vector<BoardEntities*> snl);
    void play();
};