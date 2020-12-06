#ifndef PAWN_H
#define PAWN_H
#include "Piece.h"

class Pawn : public Piece
{
private:
	bool firstTurn = true;
public:
	Pawn(const int& x, const int& y);
	Pawn(const Pawn& p);
	~Pawn();
	Pawn& operator =(const Pawn& p);
	std::vector<std::pair<int, int>> availableMoves();
};


#endif /* PAWN_H */
