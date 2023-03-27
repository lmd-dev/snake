#pragma once
#include <memory>
#include "Bonus.h"

/**
* Représente le plateau de jeu
*/
class Plateau
{
private:
	//Largeur du plateau
	int largeur;

	//Hauteur du plateau
	int hauteur;

	//Bonus à récupérer
	std::shared_ptr<Bonus> bonus;

public:
	/**
	* Constructeur
	* @param {int} l Largeur du plateau
	* @param {int} h Hauteur du plateau
	*/
	Plateau(int l, int h);

	/**
	* Getter sur l'attribut largeur du plateau
	* @return {int} La largeur du plateau
	*/
	int getLargeur() const;

	/**
	* Getter sur l'attribut hauteur du plateau
	* @return {int} La jhauteur du plateau
	*/
	int getHauteur() const;
};

