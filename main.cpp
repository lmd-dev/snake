#include "Jeu.h"
#include <iostream>
#include <thread>
#include <chrono>
#include <cassert>

/**
* Dessine le jeu dans son état actuel dans la console
*/
void dessinerPlateau(const Jeu& jeu)
{
	int largeur = jeu.getPlateau().getLargeur();
	int hauteur = jeu.getPlateau().getHauteur();

	std::vector<char> tableau;
	tableau.reserve(hauteur * largeur);
	
	//Dessin du plateau
	for (int iLigne = 0; iLigne < hauteur; ++iLigne)
	{
		for (int iColonne = 0; iColonne < largeur; ++iColonne)
		{
			if (iLigne == 0 || iLigne == hauteur - 1 || iColonne == 0 || iColonne == largeur - 1)
				tableau.push_back('X');
			else
				tableau.push_back(' ');
		}
	}

	//Dessin des serpents
	auto serpents = jeu.getSerpents();

	for (auto itSerpent = serpents.begin(); itSerpent < serpents.end(); ++itSerpent)
	{
		auto parcours = (*itSerpent).getParcours();
		for (auto itParcours = parcours.begin(); itParcours < parcours.end(); ++itParcours)
		{
			const int index = (*itParcours).getY() * largeur + (*itParcours).getX();

			if (tableau.at(index) == ' ')
				tableau.at(index) = 'S';
			else {
				assert(false); //Fin de la partie
			}
		}
	}

	//Affichage du plateau
	for (int iLigne = 0; iLigne < hauteur; ++iLigne)
	{
		for (int iColonne = 0; iColonne < largeur; ++iColonne)
		{
			std::cout << tableau[iLigne * largeur + iColonne];
		}

		std::cout << std::endl;
	}
}

/**
* Point d'entrée du programme
*/
int main()
{
	Jeu jeu(50, 30);

	while (1)
	{
		dessinerPlateau(jeu);

		jeu.update();

		std::this_thread::sleep_for(std::chrono::milliseconds(1000));
	}

	return 0;
}