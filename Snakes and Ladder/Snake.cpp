#include "Snake.hpp"
#include <iostream>
using namespace std;

Snake::Snake(int start, int end) {
    this->type = "Snake";
    this->start = start;
    this->end = end;
}

string Snake::getType() {
    return this->type;
}

int Snake::getStart() {
    return this->start;
}

int Snake::getEnd() {
    return this->end;
}

bool Snake::isSnake(int start,int end){
    return start>end;
}