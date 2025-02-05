#include "Ladder.hpp"
#include <iostream>
using namespace std;

Ladder::Ladder(int start, int end) {
    this->type = "Ladder";
    this->start = start;
    this->end = end;
}

string Ladder::getType() 
{
    return this->type;
}

int Ladder::getStart() {
    return this->start;
}

int Ladder::getEnd() {
    return this->end;
}

bool Ladder::isLadder(int start,int end){
    return start<end;
}