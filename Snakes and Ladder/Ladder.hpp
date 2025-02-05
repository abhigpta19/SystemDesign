#pragma once
#include "BoardEntities.hpp"
using namespace std;

class Ladder : public BoardEntities {
public:
    Ladder(int start, int end);

    string getType() override;
    int getStart() override;
    int getEnd() override;
    bool isLadder(int start,int end);
};
