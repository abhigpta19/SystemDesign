#include<bits/stdc++.h>
#include "Board.hpp"
#include "BoardEntities.hpp"
#include "Snake.hpp"
#include "Ladder.hpp"
#include "Player.hpp"

using namespace std;
int main()
{
    int size=100;

    vector<BoardEntities*> snl;
    while(1)
    {
        cout<<"Enter 1 to enter snake or ladder and 2 to exit\n";
        int x;
        cin>>x;

        if(x==2)
        break;

        char ch;
        int st,en;

        cin>>ch>>st>>en;

        if(ch=='S')
        snl.push_back(new Snake(st,en));
        else
        snl.push_back(new Ladder(st,en));
    }

    vector<Player*> players;
    while(1)
    {
        cout<<"Enter 1 to enter the players and 2 to exit\n";
        int x;
        cin>>x;

        if(x==2)
        break;

        string name;
        cin>>name;
        players.push_back(new Player(name,0));
    }
    
    Board* board = new Board(size,players,snl);

    board->play();

    return 0;
}