#include "ZoneDessinConsole.h"
#include <iostream>

ZoneDessinConsole::ZoneDessinConsole(int l, int h)
	:largeur(l), hauteur(h)
{
	contexte.reserve(sizeof(char) * l * h);

	for (int i = 0; i < l * h; ++i)
		contexte.push_back(' ');
}

int ZoneDessinConsole::getLargeur() const
{
	return largeur;
}

int ZoneDessinConsole::getHauteur() const
{
	return hauteur;
}

char ZoneDessinConsole::getChar(int x, int y) const
{
	return contexte.at(y * largeur + x);
}

void ZoneDessinConsole::setChar(int x, int y, char valeur)
{
	contexte.at(y * largeur + x) = valeur;
}

void ZoneDessinConsole::afficher()
{
	//Efface l'écran (Windows only et pas ouf)
	system("CLS");

	//Affichage de la zone de dessin
	for (int iLigne = 0; iLigne < hauteur; ++iLigne)
	{
		for (int iColonne = 0; iColonne < largeur; ++iColonne)
		{
			std::cout << getChar(iColonne, iLigne);
		}

		std::cout << std::endl;
	}
}
