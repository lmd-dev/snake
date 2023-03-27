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
