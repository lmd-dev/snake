#pragma once
#include <memory>
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
	* @return {std::shared_ptr<Plateau>} Retourne le plateau créé dynamiquement
	*/
	virtual std::shared_ptr<Plateau> creerPlateau() const = 0;

	/**
	* Crée un serpent qui démarrera sa progression à partir des coordonnées fournies
	* @param { const Coordonnee&} depart Coordonnée de départ du serpent
	* @return {std::shared_ptr<Serpent>} retourne le Serpent créé dynamiquement
	*/
	virtual std::shared_ptr<Serpent> creerSerpent(const Coordonnee& depart) const = 0;
};

