#include "FabriqueConsole.h"
#include "PlateauConsole.h"
#include "SerpentConsole.h"

FabriqueConsole::FabriqueConsole(ZoneDessinConsole& zd)
	:zoneDessin(zd)
{

}

Plateau* FabriqueConsole::creerPlateau() const
{
	return new PlateauConsole(zoneDessin);
}

Serpent* FabriqueConsole::creerSerpent(const Coordonnee& depart) const
{
	return new SerpentConsole(depart, zoneDessin);
}