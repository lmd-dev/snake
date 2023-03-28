#pragma once
#include "Serpent.h"
#include <vector>
#include "ZoneDessinConsole.h"
/**
* Repr�sent un serpent pouvant etre dessiner dans un terminal
*/
class SerpentConsole : public Serpent
{
private:
    //Zone de dessin � utiliser pour afficher le serpent
    ZoneDessinConsole& zoneDessin;

public:
    /**
    * Constructeur
    * @param {const Coordonnee&} depart Coordonnee de depart du serpent
    * @param {ZoneDessinConsole&} zondeDessin Zone de dessin � utiliser
    */
    SerpentConsole(const Coordonnee& depart, ZoneDessinConsole& zoneDessin);

    /**
    * Dessin le serpent
    */
    virtual void dessiner() const override;
};

