#include "Coordonnee.h"

Coordonnee::Coordonnee(int x, int y)
	:x(x), y(y)
{
}

int Coordonnee::getX() const
{
	return x;
}

int Coordonnee::getY() const
{
	return y;
}

bool Coordonnee::operator==(const Coordonnee& coordonnee) const
{
	return coordonnee.x == x && coordonnee.y == y;
}

const Coordonnee& Coordonnee::operator=(const Coordonnee& coordonnee)
{
	x = coordonnee.x;
	y = coordonnee.y;

	return *this;
}
