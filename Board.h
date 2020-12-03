#ifndef BOARD_H
#define BOARD_H

#include <iostream>

class Board
{
private:
	char board[8][8];

public:
	Board();
	Board(const Board& b);
	Board& operator =(const Board& b);
	friend std::ostream& operator <<(std::ostream& out, const Board& b);
};

#endif /* BOARD */
