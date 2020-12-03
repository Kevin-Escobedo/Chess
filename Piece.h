#ifndef PIECE_H
#define PIECE_H

#include <vector>
#include <utility>

class Piece
{
protected:
	std::pair <int, int> coordinates;
public:
	Piece();
	Piece(const Piece& p);
	Piece& operator =(const Piece& p);
	virtual std::vector<std::pair <int, int>> availableMoves() = 0;
};

#endif /* PIECE_H */
