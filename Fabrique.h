#pragma once
#include <memory>
#include "Plateau.h"
#include "Serpent.h"
/**
* Interface de fabrique � utiliser pour cr�er les �l�ments du jeu
*/
class Fabrique
{
public:

	/**
	* Cr�e un platau 
	* @return {std::shared_ptr<Plateau>} Retourne le plateau cr�� dynamiquement
	*/
	virtual std::shared_ptr<Plateau> creerPlateau() const = 0;

	/**
	* Cr�e un serpent qui d�marrera sa progression � partir des coordonn�es fournies
	* @param { const Coordonnee&} depart Coordonn�e de d�part du serpent
	* @return {std::shared_ptr<Serpent>} retourne le Serpent cr�� dynamiquement
	*/
	virtual std::shared_ptr<Serpent> creerSerpent(const Coordonnee& depart) const = 0;
};

