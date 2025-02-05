#pragma once
#include "BoardEntities.hpp"
using namespace std;

class Snake : public BoardEntities {
public:
    Snake(int start, int end);

    string getType() override;
    int getStart() override;
    int getEnd() override;
    bool isSnake(int start,int end);
};