#pragma once
#include<bits/stdc++.h>
using namespace std;

class BoardEntities
{
    public:
    string type;
    int start;
    int end;

    virtual string getType() = 0;
    virtual int getStart() = 0;
    virtual int getEnd() = 0;
};