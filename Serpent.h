#pragma once
#include <vector>
#include "Coordonnee.h"

/**
* Repr�sente le serpent d'un joueur
*/
class Serpent
{
protected:
	//De combient de case le serpent doit il encore croitre
	int croissance;

	//Liste des coordonn�es par lesquelles passe le corps du serpent
	std::vector<Coordonnee> parcours;

	//Direction dans laquelle se dirige le serpent
	Coordonnee direction;

	//Indique si le serpent  a perdu la partie
	bool perdu;

public:
	/**
	* Constructeur
	* @param { const Coordonnee& } depart Point de d�part du serpent au d�but de la partie
	*/
	Serpent(const Coordonnee& depart);

	/**
	* Getter sur l'attribut perdu
	*/
	bool getPerdu() const;

	/**
	* Setter de l'attribut perdu
	* @param {bool} value Nouvelle valeur � affecter � l'attribut perdu
	*/
	void setPerdu(bool value);

	void setDirection(const Coordonnee& valeur);

	/**
	* Retourne les coordonn�es de la t�te du serpent
	* @return { const Coordonnee& } Les coordonn�es de la t�te du serpent
	*/
	const Coordonnee& getTete() const;

	/**
	* Indique si le corps du serpent contient la coordonn�e donn�e en param�tre
	* @param { const Coordonnee& } coordonn�e � tester
	* @param { bool } Faut il exclure la t^te du serpent des coordonn�es � tester (cas du test de la collision d'un serpent avec lui-m�me)
	* @return {bool} Retourne vrai si la coordonn�e est pr�sente dans la liste des coordonn�es composant le corps du serpent
	*/
	bool contient(const Coordonnee& coordonnee, bool exclureTete = false) const;

	/**
	* Met � jour les coordonn�es du serpent
	*/
	void update();

	/**
	* Dessine le serpent
	*/
	virtual void dessiner() const = 0;
};

