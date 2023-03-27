#pragma once
/**
* Représente une coordonnées du le plateau de jeu
*/
class Coordonnee
{
private:
	//Coordonnée en abscisse
	int x;

	//Coordonnées en ordonnée
	int y;

public:
	/**
	* Constructeur
	* @param {int} x Valeur d'initialisation de la coordonnée en abscisse
	* @param {int} y Valeur d'initialisation de la coordonnée en ordonnée
	*/
	Coordonnee(int x, int y);

	/**
	* Getter de l'attribut x
	* @return La valeur de la coordonnée en abscisse
	*/
	int getX() const;

	/**
	* Getter de l'attribut y
	* @return La valeur de la coordonnée en ordonnée
	*/
	int getY() const;
};

