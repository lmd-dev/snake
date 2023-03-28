#pragma once
#include "Fabrique.h"
#include "ZoneDessinConsole.h"
/**
* Fabrique utilis�e pour afficher le jeu dans un terminal
*/
class FabriqueConsole : public Fabrique
{
private:
	//Zone de dessin � utiliser
	ZoneDessinConsole& zoneDessin;

public:
	/**
	* Constructeur
	* @param {ZonneDessinConsole&} Zone de dessin � utiliser pour afficher les �l�ments du jeu
	*/
	FabriqueConsole(ZoneDessinConsole& zd);

	/**
	* Cr�e un platau dont les dimensions sont d�finies par la zone de dessin
	* @return {Plateau*} Retourne le plateau cr�� dynamiquement
	*/
	virtual Plateau* creerPlateau() const;

	/**
	* Cr�e un serpent qui d�marrera sa progression � partir des coordonn�es fournies
	* @param { const Coordonnee&} depart Coordonn�e de d�part du serpent
	* @return { Serpent* } retourne le Serpent cr�� dynamiquement
	*/
	virtual Serpent* creerSerpent(const Coordonnee& depart) const;
};

