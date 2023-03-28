#include "Jeu.h"


Jeu::Jeu(const Fabrique& fab)
	: fabrique(fab)
{
	plateau = fabrique.creerPlateau();

	serpents.push_back(
		fabrique.creerSerpent(
			Coordonnee(10, 10)
		)
	);

	perdu = false;
}

void Jeu::update()
{
	size_t joueursRestants = serpents.size();

	for (auto itSerpent = serpents.begin(); itSerpent < serpents.end(); ++itSerpent)
	{
		auto serpent = (*itSerpent);

		serpent->update();

		if (plateau->estHorsPlateau(serpent->getTete()))
			serpent->setPerdu(true);

		for (auto itAdversaire = serpents.begin(); !serpent->getPerdu() && itAdversaire < serpents.end(); ++itAdversaire)
		{
			if ((*itAdversaire)->contient(serpent->getTete(), itAdversaire == itSerpent))
				serpent->setPerdu(true);
		}

		if (serpent->getPerdu())
			--joueursRestants;
	}

	if (serpents.size() > 1 && joueursRestants == 1 || joueursRestants == 0)
		perdu = true;
}


void Jeu::dessiner() const
{
	plateau->dessiner();

	for (auto it = serpents.begin(); it < serpents.end(); ++it)
		(*it)->dessiner();
}

bool Jeu::estPerdu() const
{
	return perdu;
}

void Jeu::setDirection(int iSerpent, const Coordonnee& direction)
{
	if (iSerpent >= 0 && iSerpent < serpents.size())
		serpents.at(iSerpent)->setDirection(direction);
}
