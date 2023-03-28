#pragma once
#include<vector>
/**
* Repr�sente la surface de dessin dans le terminal utilis�e pour afficher le jeu
*/
class ZoneDessinConsole
{
private:
	//Matrice de caract�res repr�sent�e par un tableau � une dimension
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
	* Retourne le caract�re situ� aux coordonn�es donn�e dans la matrice d'affichage
	* @param {int} x Coordonn�e en abscisse du caract�re recherch�
	* @param {int} y Coordonn�e en ordonn�e du caract�re recherch�
	* @return {char} Le caract�re trouv�
	*/
	char getChar(int x, int y) const;

	/**
	* Modifie la matrice d'affichage avec le catact�re donn�e
	* @param {int} x Coordonn�e en abscisse du caract�re � modifier
	* @param {int} y Coordonn�e en ordonn�e du caract�re � modifier
	* @parem {char} valeur La nouvelle valeur du caract�re � modifier
	* 
	*/
	void setChar(int x, int y, char valeur);

	/**
	* Affiche la matrice d'affichage dans le terminal
	*/
	void afficher();
};

