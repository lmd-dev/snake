#include "SerpentConsole.h"

SerpentConsole::SerpentConsole(const Coordonnee& depart, ZoneDessinConsole& zoneDessin)
	: Serpent(depart), zoneDessin(zoneDessin)
{
}

void SerpentConsole::dessiner() const
{
	for (auto itParcours = parcours.begin(); itParcours < parcours.end(); ++itParcours)
	{
		zoneDessin.setChar(itParcours->getX(), itParcours->getY(), 'S');
	}
}