#include "Cell.h"

Cell::Cell( State newState)
{
    this->state = newState;
}

Cell::~Cell(){}

void Cell::setState( State newState )
{
    this->state = newState;
}

State Cell::getState()
{
    return this->state;
}

bool Cell::isAlive()
{
    return this->getState() == ALIVE ? true: false;
}