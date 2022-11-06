#ifndef CELL_H
#define CELL_H

enum State {
	ALIVE = 0,
	DEAD = 1,
	WILL_BORN = 2,
	WILL_DIE = 3
};

class Cell
{
private:
	State state;
	/*
	CellBehaviour behaviour;
	Gen genA;
	Gen genB;
	Gen genC;
	*/
public:
	Cell() {state = ALIVE;}
	Cell(State newState);
	~Cell();
	void setState( State newState );
	State getState();
	bool isAlive();
};	

#endif


