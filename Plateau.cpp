#include "Plateau.h"
#include "Coordonnee.h"

Plateau::Plateau(int l, int h)
	: largeur(l), hauteur(h)
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

bool Plateau::estHorsPlateau(const Coordonnee& coordonnee)
{
	return
		coordonnee.getX() <= 0 ||
		coordonnee.getX() >= largeur - 1 ||
		coordonnee.getY() <= 0 ||
		coordonnee.getY() >= hauteur - 1;
}
