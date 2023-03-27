#include "Jeu.h"

Jeu::Jeu(int largeurPlateau, int hauteurPlateau)
	: plateau(largeurPlateau, hauteurPlateau)
{
	serpents.push_back(
		Serpent(
			Coordonnee(largeurPlateau / 2, hauteurPlateau / 2)
		)
	);
}

const Plateau& Jeu::getPlateau() const
{
	return plateau;
}

const std::vector<Serpent>& Jeu::getSerpents() const
{
	return serpents;
}

void Jeu::update()
{
	for (auto it = serpents.begin(); it < serpents.end(); ++it)
		(*it).update();
}
