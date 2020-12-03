#include "Board.h"

Board::Board()
:board()
{
	for(int i = 0; i < 8; i++)
	{
		for(int j = 0; j < 8; j++)
		{
			board[i][j] = '-';
		}
	}
}

Board::Board(const Board& b)
:board()
{
	for(int i = 0; i < 8; i++)
	{
		for(int j = 0; j < 8; j++)
		{
			board[i][j] = b.board[i][j];
		}
	}
}

Board& Board::operator =(const Board& b)
{
	for(int i = 0; i < 8; i++)
	{
		for(int j = 0; j < 8; j++)
		{
			board[i][j] = b.board[i][j];
		}
	}

	return *this;
}

std::ostream& operator <<(std::ostream& out, const Board& b)
{
	for(int i = 0; i < 8; i++)
	{
		for(int j = 0; j < 8; j++)
		{
			out<<' '<<b.board[i][j]<<' ';
		}

		out<<std::endl;
	}

	return out;
}
