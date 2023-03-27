#include "Serpent.h"

Serpent::Serpent(const Coordonnee& depart)
	: croissance(0), direction(1, 0)
{
	parcours.push_back(depart);
}

const std::vector<Coordonnee>& Serpent::getParcours() const
{
	return parcours;
}

void Serpent::update()
{
	const Coordonnee& lastCoordonnee = parcours.at(parcours.size() - 1);
	
	parcours.push_back(Coordonnee(
		lastCoordonnee.getX() + direction.getX(),
		lastCoordonnee.getY() + direction.getY()
	));

	parcours.erase(parcours.begin(), parcours.begin() + 1);
}
