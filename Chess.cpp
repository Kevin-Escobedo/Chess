#include "Chess.h"

Chess::Chess()
:board(Board())
{

}

Chess::Chess(const Chess& c)
:board(c.board)
{
	
}

Chess& Chess::operator =(const Chess& c)
{
	board = c.board;
	return *this;
}

std::ostream& operator <<(std::ostream& out, const Chess& c)
{
	out<<c.board;
	return out;
}
