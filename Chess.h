#ifndef CHESS_H
#define CHESS_H

#include <iostream>

class Chess
{
private:
	char board[8][8];

public:
	Chess();
	Chess(const Chess& c);
	Chess& operator =(const Chess& c);
	friend std::ostream& operator <<(std::ostream& out, const Chess& c);	
};

#endif /* CHESS_H */
