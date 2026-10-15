/**
* @file media.cpp
* @author Farrell jumelais bakoufarel@gmail.com
* @date 2026-10-16
* @brief Implémentation de la classe Me
* @details recupere et affiche la descrption d'objet creer dvd et livre
*/
#ifndef MEDIA_H
#define MEDIA_H

#include <iostream>
#include <iomanip>
#include <map>
using namespace std;
//Question 10
/**
*@file Media.h
* @author Farrel Jumelais bakoufarel@gmail.com
* @date 2026-10-16
* @version 1.0
* @brief Déclaration de la classe Media.
*
* @details Ce fichier contient l'interface de la classe Media abstraite,
* permettant d'afficher le catalogue catalogue en Livre et DVD d'une médiathèque .
* Elle prend en charge le Titre, Réalisateur, Année de sortie,  nombre de page, Durée (min).
* @class Media
 * @brief La médiathèque met à disposition de ses utilisateurs des livres et des DVD.
 *
 */
class Media
{
protected:
    int identifiant; // identifiant du DVD ou livre
    string titre;   // titre du film ou livre
    string auteur;  // l'auteur du film ou dvd
    int annee;  // Année de sortir

public:
    Media(const int _identifiant, const string &_titre, const string &_auteur, const int _annee); // constructeur

    virtual ~Media(); // destructeur virtuel
    virtual void Afficher() = 0; // fonction virtuel pure

};

#endif // MEDIA_H
