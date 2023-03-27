#include "Plateau.h"

Plateau::Plateau(int l, int h)
	: largeur(l), hauteur(h), bonus(nullptr)
{
}

int Plateau::getLargeur() const
{
	return largeur;
}

int Plateau::getHauteur() const
{
	return hauteur;
}
