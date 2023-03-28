#pragma once
#include<vector>
/**
* Représente la surface de dessin dans le terminal utilisée pour afficher le jeu
*/
class ZoneDessinConsole
{
private:
	//Matrice de caractères représentée par un tableau à une dimension
	std::vector<char> contexte;

	//Largeur de la matrice
	int largeur;

	//Hauteur de la matrice
	int hauteur;

public:
	/**
	* Constructeur
	* @param {int} l Largeur de la zone de dessin
	* @param {int} h Hauteur de la zone de dessin
	*/
	ZoneDessinConsole(int l, int h);

	/**
	* Getter de l'attribut largeur
	* @return {int} la largeur de la zone de dessin
	*/
	int getLargeur() const;

	/**
	* Getter de l'attribut hauteur
	* @return {int} la hauteur de la zone de dessin
	*/
	int getHauteur() const;

	/**
	* Retourne le caractère situé aux coordonnées donnée dans la matrice d'affichage
	* @param {int} x Coordonnée en abscisse du caractère recherché
	* @param {int} y Coordonnée en ordonnée du caractère recherché
	* @return {char} Le caractère trouvé
	*/
	char getChar(int x, int y) const;

	/**
	* Modifie la matrice d'affichage avec le catactère donnée
	* @param {int} x Coordonnée en abscisse du caractère à modifier
	* @param {int} y Coordonnée en ordonnée du caractère à modifier
	* @parem {char} valeur La nouvelle valeur du caractère à modifier
	* 
	*/
	void setChar(int x, int y, char valeur);

	/**
	* Affiche la matrice d'affichage dans le terminal
	*/
	void afficher();
};

