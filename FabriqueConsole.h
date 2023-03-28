#pragma once
#include "Fabrique.h"
#include "ZoneDessinConsole.h"
/**
* Fabrique utilisée pour afficher le jeu dans un terminal
*/
class FabriqueConsole : public Fabrique
{
private:
	//Zone de dessin à utiliser
	ZoneDessinConsole& zoneDessin;

public:
	/**
	* Constructeur
	* @param {ZonneDessinConsole&} Zone de dessin à utiliser pour afficher les éléments du jeu
	*/
	FabriqueConsole(ZoneDessinConsole& zd);

	/**
	* Crée un platau dont les dimensions sont définies par la zone de dessin
	* @return {Plateau*} Retourne le plateau créé dynamiquement
	*/
	virtual Plateau* creerPlateau() const;

	/**
	* Crée un serpent qui démarrera sa progression à partir des coordonnées fournies
	* @param { const Coordonnee&} depart Coordonnée de départ du serpent
	* @return { Serpent* } retourne le Serpent créé dynamiquement
	*/
	virtual Serpent* creerSerpent(const Coordonnee& depart) const;
};

