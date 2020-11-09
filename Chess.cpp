#include "Chess.h"

Chess::Chess()
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

Chess::Chess(const Chess& c)
:board()
{
	for(int i = 0; i < 8; i++)
	{
		for(int j = 0; j < 8; j++)
		{
			board[i][j] = c.board[i][j];
		}
	}
}

Chess& Chess::operator =(const Chess& c)
{
	for(int i = 0; i < 8; i++)
	{
		for(int j = 0; j < 8; j++)
		{
			board[i][j] = c.board[i][j];
		}
	}

	return *this;
}

std::ostream& operator <<(std::ostream& out, const Chess& c)
{
	for(int i = 0; i < 8; i++)
	{
		for(int j = 0; j < 8; j++)
		{
			out<<' ';
			out<<c.board[i][j];
			out<<' ';
		}

		out<<std::endl;
	}

	return out;
}
