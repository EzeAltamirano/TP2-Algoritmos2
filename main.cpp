#include "Lista.h"
#include "Board.h"
#include "Box.h"
#include <iostream>
#include "Cell.h"
#include "bitmap_image.hpp"

using namespace std;

int main() {
    // Cell * cell = new Cell(ALIVE);
    int numero = 5;

    Board<Cell>* newBoard = new Board<Cell>(5, 5, 5);
    Lista<Cell>* elements = new Lista<Cell>();
    Cell auxCell;
    for (int i = 1; i <= 125; i++)
    {
        i%2 == 0 ? auxCell.setState(ALIVE) : auxCell.setState(DEAD);
        elements->add(auxCell);
    }
    newBoard->fillWith(elements);

    auxCell = newBoard->getBox(5,5,5)->getData() ;
    if ( auxCell.isAlive())
    {
        cout <<"element in newBoard: " << "ALIVE" << endl;
    }
    else
    {
        cout <<"element in newBoard: " << "DEAD" << endl;

    }
    

    /*
    Board<Cell> * cellBoard = new Board<Cell>(3,3,3);
    cout<< "cell board: " << cellBoard->getBox(1, 1, 1) << endl;
    */
    return 0;
}