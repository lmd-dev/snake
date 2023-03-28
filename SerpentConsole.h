#pragma once
#include "Serpent.h"
#include <vector>
#include "ZoneDessinConsole.h"
/**
* Représent un serpent pouvant etre dessiner dans un terminal
*/
class SerpentConsole : public Serpent
{
private:
    //Zone de dessin à utiliser pour afficher le serpent
    ZoneDessinConsole& zoneDessin;

public:
    /**
    * Constructeur
    * @param {const Coordonnee&} depart Coordonnee de depart du serpent
    * @param {ZoneDessinConsole&} zondeDessin Zone de dessin à utiliser
    */
    SerpentConsole(const Coordonnee& depart, ZoneDessinConsole& zoneDessin);

    /**
    * Dessin le serpent
    */
    virtual void dessiner() const override;
};

