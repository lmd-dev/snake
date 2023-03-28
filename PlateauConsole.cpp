#include "PlateauConsole.h"

PlateauConsole::PlateauConsole(ZoneDessinConsole& zoneDessin)
	: Plateau(zoneDessin.getLargeur(), zoneDessin.getHauteur()), zoneDessin(zoneDessin)
{
}

void PlateauConsole::dessiner() const
{
	for (int iLigne = 0; iLigne < zoneDessin.getHauteur(); ++iLigne)
	{
		for (int iColonne = 0; iColonne < zoneDessin.getLargeur(); ++iColonne)
		{
			if (iLigne == 0 || iLigne == zoneDessin.getHauteur() - 1 || iColonne == 0 || iColonne == zoneDessin.getLargeur() - 1)
				zoneDessin.setChar(iColonne, iLigne, 'X');
			else
				zoneDessin.setChar(iColonne, iLigne, ' ');
		}
	}
}