#ifndef CHESS_H
#define CHESS_H

#include "Board.h"
#include <iostream>

class Chess
{
private:
	Board board;

public:
	Chess();
	Chess(const Chess& c);
	Chess& operator =(const Chess& c);
	friend std::ostream& operator <<(std::ostream& out, const Chess& c);	
};

#endif /* CHESS_H */
