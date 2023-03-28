#include "Serpent.h"

Serpent::Serpent(const Coordonnee& depart)
	: croissance(4), direction(1, 0), perdu(false)
{
	parcours.push_back(depart);
}

bool Serpent::getPerdu() const
{
	return perdu;
}

void Serpent::setPerdu(bool value)
{
	perdu = value;
}

void Serpent::setDirection(const Coordonnee& valeur)
{
	direction = valeur;
}

const Coordonnee& Serpent::getTete() const
{
	return parcours.at(parcours.size() - 1);
}

bool Serpent::contient(const Coordonnee& coordonnee, bool exclureTete) const
{
	for (auto it = parcours.begin(); it < parcours.end() - (exclureTete ? 1 : 0); ++it)
	{
		if ((*it) == coordonnee)
			return true;
	}

	return false;
}

void Serpent::update()
{
	const Coordonnee& lastCoordonnee = parcours.at(parcours.size() - 1);
	
	parcours.push_back(Coordonnee(
		lastCoordonnee.getX() + direction.getX(),
		lastCoordonnee.getY() + direction.getY()
	));

	if (croissance > 0)
		--croissance;
	else
		parcours.erase(parcours.begin(), parcours.begin() + 1);
}
