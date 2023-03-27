#pragma once
/**
* Repr�sente une coordonn�es du le plateau de jeu
*/
class Coordonnee
{
private:
	//Coordonn�e en abscisse
	int x;

	//Coordonn�es en ordonn�e
	int y;

public:
	/**
	* Constructeur
	* @param {int} x Valeur d'initialisation de la coordonn�e en abscisse
	* @param {int} y Valeur d'initialisation de la coordonn�e en ordonn�e
	*/
	Coordonnee(int x, int y);

	/**
	* Getter de l'attribut x
	* @return La valeur de la coordonn�e en abscisse
	*/
	int getX() const;

	/**
	* Getter de l'attribut y
	* @return La valeur de la coordonn�e en ordonn�e
	*/
	int getY() const;
};

