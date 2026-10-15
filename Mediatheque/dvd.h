/**
 * @file dvd.cpp
* @author Farrell jumelais bakoufarel@gmail.com
* @date 2026-10-16
* @brief Implémentation de la classe DVD
* @details recupere et affiche la descrption d'objet creer dvd
 * */
#ifndef DVD_H
#define DVD_H

#include <iostream>
#include "media.h"

using namespace std;
//Question 10
/**
* @file dvd.h
* @author Farrel Jumelais bakoufarel@gmail.com
* @date 2026-10-16
* @version 1.0
* @brief Déclaration de la classe dvd.
*
* @details Ce fichier contient l'interface de la classe dvd,
* permettant d'afficher le catalogue catalogue DVD d'une médiathèque .
* Elle prend en charge le Titre, Réalisateur, Année de sortie,  Durée (min).
 * @brief The DVD class
 */
class DVD : public Media
{
private:
    int duree; // duree du film
public:
    DVD(const int _identifiant, const string &_titre, const string &_auteur, const int _annee,  const int _duree);
    ~DVD();
    void Afficher();

};

#endif // DVD_H
