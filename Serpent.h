#pragma once
#include <vector>
#include "Coordonnee.h"

/**
* Représente le serpent d'un joueur
*/
class Serpent
{
private:
	//De combient de case le serpent doit il encore croitre
	int croissance;

	//Liste des coordonnées par lesquelles passe le corps du serpent
	std::vector<Coordonnee> parcours;

	//Direction dans laquelle se dirige le serpent
	Coordonnee direction;

public:
	/**
	* Constructeur
	* @param { const Coordonnee& } depart Point de départ du serpent au début de la partie
	*/
	Serpent(const Coordonnee& depart);

	/**
	* Getter sur l'attribut parcours du serpent
	* @return { const vector<Coordonnee>& } Coordonnées par lesquelles passe le corps du serpent
	*/
	const std::vector<Coordonnee>& getParcours() const;

	/**
	* Met à jour les coordonnées du serpent
	*/
	void update();
};

