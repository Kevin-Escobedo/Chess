#include "Piece.h"

Piece::Piece()
:coordinates()
{

}

std::pair <int, int> Piece::getCoordinates()
{
	return coordinates;
}

void Piece::setCoordinates(const int& x, const int& y)
{
	coordinates = std::make_pair(x, y);
}
