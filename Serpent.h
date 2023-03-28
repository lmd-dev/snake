#pragma once
#include <vector>
#include "Coordonnee.h"

/**
* Représente le serpent d'un joueur
*/
class Serpent
{
protected:
	//De combient de case le serpent doit il encore croitre
	int croissance;

	//Liste des coordonnées par lesquelles passe le corps du serpent
	std::vector<Coordonnee> parcours;

	//Direction dans laquelle se dirige le serpent
	Coordonnee direction;

	//Indique si le serpent  a perdu la partie
	bool perdu;

public:
	/**
	* Constructeur
	* @param { const Coordonnee& } depart Point de départ du serpent au début de la partie
	*/
	Serpent(const Coordonnee& depart);

	/**
	* Getter sur l'attribut perdu
	*/
	bool getPerdu() const;

	/**
	* Setter de l'attribut perdu
	* @param {bool} value Nouvelle valeur à affecter à l'attribut perdu
	*/
	void setPerdu(bool value);

	void setDirection(const Coordonnee& valeur);

	/**
	* Retourne les coordonnées de la tête du serpent
	* @return { const Coordonnee& } Les coordonnées de la tête du serpent
	*/
	const Coordonnee& getTete() const;

	/**
	* Indique si le corps du serpent contient la coordonnée donnée en paramètre
	* @param { const Coordonnee& } coordonnée à tester
	* @param { bool } Faut il exclure la t^te du serpent des coordonnées à tester (cas du test de la collision d'un serpent avec lui-même)
	* @return {bool} Retourne vrai si la coordonnée est présente dans la liste des coordonnées composant le corps du serpent
	*/
	bool contient(const Coordonnee& coordonnee, bool exclureTete = false) const;

	/**
	* Met à jour les coordonnées du serpent
	*/
	void update();

	/**
	* Dessine le serpent
	*/
	virtual void dessiner() const = 0;
};

