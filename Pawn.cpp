#include "Pawn.h"

Pawn::Pawn(const int& x, const int& y) : Piece()
{
	setCoordinates(x, y);
}

Pawn::Pawn(const Pawn& p) : Piece()
{
	const int x = p.coordinates.first;
	const int y = p.coordinates.second;

	setCoordinates(x, y);
}

Pawn::~Pawn()
{

}

Pawn& Pawn::operator =(const Pawn& p)
{
	coordinates = p.coordinates;
	return *this;
}

std::vector<std::pair<int, int>> Pawn::availableMoves()
{
	std::vector<std::pair<int, int>> V;
	return V;
}
