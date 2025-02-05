#pragma once
#include<bits/stdc++.h>
using namespace std;

class Player
{
    string name;
    int position;

    public:
    Player(string name,int position);
    string getName();
    void setName(string name);
    int getPosition();
    void setPosition(int position);
};