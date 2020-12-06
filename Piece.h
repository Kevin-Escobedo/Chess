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
	virtual std::vector<std::pair <int, int>> availableMoves() = 0;
	virtual ~Piece() = default;
	std::pair <int, int> getCoordinates();
	void setCoordinates(const int& x, const int& y);
};

#endif /* PIECE_H */
