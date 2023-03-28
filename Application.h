#pragma once
#include "ZoneDessinConsole.h"
#include "FabriqueConsole.h"
/**
* Repr�sente l'application
*/
class Application
{
private:
	//zone de dessin � utiliser
	ZoneDessinConsole zoneDessin;

	//Fabrique d'�l�ments � utiliser
	FabriqueConsole fabrique;

public:
	/**
	* Constructeur
	*/
	Application();

	/**
	* Boucle d'�x�cution du jeu
	*/
	void run();
};

