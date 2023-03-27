#pragma once
#include <vector>
#include "Plateau.h"
#include "Serpent.h"

/**
* Repréente le Jeu du Snake
*/
class Jeu
{
private:
	//Plateau de jeu
	Plateau plateau;

	//Serpents des joueurs présents dans la partie
	std::vector<Serpent> serpents;

public:
	/**
	* Constructeur
	* @param {int} largeurPlateau : Largeur du plateau pour cette partie
	* @param {int} hauteurPlateau : Hauteur du plateau pour cette partie
	*/
	Jeu(int largeurPlateau, int hauteurPlateau);

	/**
	* Getter de l'attribut plateau
	* @return {const Plateau&} Le plateau de jeu utilisé pour la partie
	*/
	const Plateau& getPlateau() const;

	/**
	* Getter de l'attribut serpents
	* return { const vector<Serpent>& } La liste des serpents s'affrontant lors de cette partie
	*/
	const std::vector<Serpent>& getSerpents() const;

	/**
	* Met à jour les éléments du jeu
	*/
	void update();
};

