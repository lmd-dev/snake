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

	/**
	* Operateur testant l'�galit� entre deux coordonn�es
	* @param {const Coordonnee&} coordonnee Coordonn�e � comparer avec l'instance courante
	* @return { bool } retourn le r�sultat de la comparaison entre les deux coordonn�es
	*/
	bool operator==(const Coordonnee& coordonnee) const;

	/**
	* Operateur affectant les propri�t�s de la coordonn�e donn�e en param�tre � l'instance courante
	* @param { const Coordonnee&} Coordonn�e � copier
	* @return { const Coordonnee& } R�f�rence sur l'instance courante permettant le chainage a = b = c
	*/
	const Coordonnee& operator=(const Coordonnee& coordonnee);
};

