#pragma once
#include "Plateau.h"
#include "Serpent.h"
/**
* Interface de fabrique à utiliser pour créer les éléments du jeu
*/
class Fabrique
{
public:

	/**
	* Crée un platau 
	* @return {Plateau*} Retourne le plateau créé dynamiquement
	*/
	virtual Plateau* creerPlateau() const = 0;

	/**
	* Crée un serpent qui démarrera sa progression à partir des coordonnées fournies
	* @param { const Coordonnee&} depart Coordonnée de départ du serpent
	* @return { Serpent* } retourne le Serpent créé dynamiquement
	*/
	virtual Serpent* creerSerpent(const Coordonnee& depart) const = 0;
};

