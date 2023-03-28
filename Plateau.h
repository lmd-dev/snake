#pragma once
#include "Coordonnee.h"

/**
* Repr�sente le plateau de jeu
*/
class Plateau
{
private:
	//Largeur du plateau
	int largeur;

	//Hauteur du plateau
	int hauteur;

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

	/**
	* Indique si la coordonn�e donn�e en param�tre se trouve en dehors du plateau
	* @param {const Coordonnee&} La coordonn�e � tester
	* @return {bool} Retourne vrai si la coordonn�e est en dehors de la zone couverte par le plateau
	*/
	bool estHorsPlateau(const Coordonnee& coordonnee);

	/**
	* Actualise le dessin du plateau
	*/
	virtual void dessiner() const = 0;
};

