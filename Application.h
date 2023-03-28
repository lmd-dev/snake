#pragma once
#include "ZoneDessinConsole.h"
#include "FabriqueConsole.h"
/**
* Représente l'application
*/
class Application
{
private:
	//zone de dessin à utiliser
	ZoneDessinConsole zoneDessin;

	//Fabrique d'éléments à utiliser
	FabriqueConsole fabrique;

public:
	/**
	* Constructeur
	*/
	Application();

	/**
	* Boucle d'éxécution du jeu
	*/
	void run();
};

