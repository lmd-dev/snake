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

	/**
	* Operateur testant l'égalité entre deux coordonnées
	* @param {const Coordonnee&} coordonnee Coordonnée à comparer avec l'instance courante
	* @return { bool } retourn le résultat de la comparaison entre les deux coordonnées
	*/
	bool operator==(const Coordonnee& coordonnee) const;

	/**
	* Operateur affectant les propriétés de la coordonnée donnée en paramètre à l'instance courante
	* @param { const Coordonnee&} Coordonnée à copier
	* @return { const Coordonnee& } Référence sur l'instance courante permettant le chainage a = b = c
	*/
	const Coordonnee& operator=(const Coordonnee& coordonnee);
};

