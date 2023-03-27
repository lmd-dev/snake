#pragma once
#include <vector>
#include "Plateau.h"
#include "Serpent.h"

/**
* Repr�ente le Jeu du Snake
*/
class Jeu
{
private:
	//Plateau de jeu
	Plateau plateau;

	//Serpents des joueurs pr�sents dans la partie
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
	* @return {const Plateau&} Le plateau de jeu utilis� pour la partie
	*/
	const Plateau& getPlateau() const;

	/**
	* Getter de l'attribut serpents
	* return { const vector<Serpent>& } La liste des serpents s'affrontant lors de cette partie
	*/
	const std::vector<Serpent>& getSerpents() const;

	/**
	* Met � jour les �l�ments du jeu
	*/
	void update();
};

