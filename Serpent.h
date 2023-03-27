#pragma once
#include <vector>
#include "Coordonnee.h"

/**
* Repr�sente le serpent d'un joueur
*/
class Serpent
{
private:
	//De combient de case le serpent doit il encore croitre
	int croissance;

	//Liste des coordonn�es par lesquelles passe le corps du serpent
	std::vector<Coordonnee> parcours;

	//Direction dans laquelle se dirige le serpent
	Coordonnee direction;

public:
	/**
	* Constructeur
	* @param { const Coordonnee& } depart Point de d�part du serpent au d�but de la partie
	*/
	Serpent(const Coordonnee& depart);

	/**
	* Getter sur l'attribut parcours du serpent
	* @return { const vector<Coordonnee>& } Coordonn�es par lesquelles passe le corps du serpent
	*/
	const std::vector<Coordonnee>& getParcours() const;

	/**
	* Met � jour les coordonn�es du serpent
	*/
	void update();
};

