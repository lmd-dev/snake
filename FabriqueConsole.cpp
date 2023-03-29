#include "FabriqueConsole.h"
#include "PlateauConsole.h"
#include "SerpentConsole.h"

FabriqueConsole::FabriqueConsole(ZoneDessinConsole& zd)
	:zoneDessin(zd)
{

}

std::shared_ptr<Plateau> FabriqueConsole::creerPlateau() const
{
	return std::make_shared<PlateauConsole>(zoneDessin);
}

std::shared_ptr<Serpent> FabriqueConsole::creerSerpent(const Coordonnee& depart) const
{
	return std::make_shared<SerpentConsole>(depart, zoneDessin);
}