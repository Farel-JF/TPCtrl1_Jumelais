/**
 * @file livre.cpp
* @author Farrell jumelais bakoufarel@gmail.com
* @date 2026-10-16
* @brief recupere et affiche la descrption d'objet creer livre
* @details
 * */
#ifndef LIVRE_H
#define LIVRE_H
#include <iostream>
#include "media.h"

//Question 10
/**
 *@file livre.h
* @author Farrel Jumelais bakoufarel@gmail.com
* @date 2026-10-16
* @version 1.0
* @brief Déclaration de la classe livre.
*
* @details Ce fichier contient l'interface de la classe livre,
* permettant d'afficher le catalogue des livres  d'une médiathèque .
* Elle prend en charge le Titre, Réalisateur, Année de sortie,  Nbre de pages.
 * @brief The Livre class
 */
class Livre : public Media
{

private:
    int nombreDePages; // nombres de pages du livre
public:
    Livre(const int _identifiant, const string &_titre, const string &_auteur, int _annee, int _nombreDePages);
    ~Livre();
    void Afficher();


};

#endif // LIVRE_H
