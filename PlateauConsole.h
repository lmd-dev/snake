#pragma once
#include "Plateau.h"
#include "ZoneDessinConsole.h"

/**
* Représente un plateau pouvant s'afficher dans le terminal
*/
class PlateauConsole : public Plateau
{
private:
	//Zonne de dessin à utiliser pour afficher le plateau
	ZoneDessinConsole& zoneDessin;

public:
	/**
	* Constructeur
	* @param {ZoneDessinConsole&} zoneDessin Zone de dessin à utiliser pour afficher le plateau
	*/
	PlateauConsole(ZoneDessinConsole& zoneDessin);

	/**
	* Dessine le plateau
	*/
	virtual void dessiner() const override;
};

