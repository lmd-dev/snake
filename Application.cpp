#include "Application.h"
#include "Jeu.h"
#include <thread>
#include <chrono>
#include "KeyManager.h"

Application::Application()
	: zoneDessin(40, 25), fabrique(zoneDessin)
{
}

void Application::run()
{
	Jeu jeu(fabrique);

	while (!jeu.estPerdu())
	{
		//Changement de direction du serpent (Window only)
		switch (KeyManager::getPressedKey())
		{
			case 'Z': jeu.setDirection(0, Coordonnee(0, -1)); break;
			case 'S': jeu.setDirection(0, Coordonnee(0, 1)); break;
			case 'Q': jeu.setDirection(0, Coordonnee(-1, 0)); break;
			case 'D': jeu.setDirection(0, Coordonnee(1, 0)); break;
		}

		//Mise à jour des éléments du jeu
		jeu.update();

		//Mise à jour de la scène
		jeu.dessiner();

		//Affichage de la scène
		zoneDessin.afficher();

		//Attend 500ms avant de continuer
		std::this_thread::sleep_for(std::chrono::milliseconds(500));
	}
}
