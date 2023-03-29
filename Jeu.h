#pragma once
#include <vector>
#include "Plateau.h"
#include "Serpent.h"
#include "Fabrique.h"

/**
* Repr�ente le Jeu du Snake
*/

class Jeu
{
private:
	//Plateau de jeu
	std::shared_ptr<Plateau> plateau;

	//Serpents des joueurs pr�sents dans la partie
	std::vector<std::shared_ptr<Serpent> > serpents;

	//Fabrique � utiliser pour cr�er les �l�ments du jeu
	const Fabrique& fabrique;

	//Infique que la partie est termin�e
	bool perdu;

public:
	/**
	* Constructeur
	* @param {int} largeurPlateau : Largeur du plateau pour cette partie
	* @param {int} hauteurPlateau : Hauteur du plateau pour cette partie
	*/
	Jeu(const Fabrique& fab);

	/**
	* Met � jour les �l�ments du jeu
	*/
	void update();

	/**
	* Met � jour la sc�ne
	*/
	void dessiner() const;

	/**
	* Indique si la partie est perdue
	* @return {bool} True si tous les serpents ont perdu ou qu'il n'en reste qu'un seul.
	*/
	bool estPerdu() const;

	/**
	* Modifie la direction d'un serpent
	* @param {int} iSerpent Indice du serpent dans la liste
	* @param {const Coordonnee&} direction dans laquelle le serpent doit se diriger
	*/
	void setDirection(int iSerpent, const Coordonnee& direction);
};

