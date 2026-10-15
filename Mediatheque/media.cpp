/**
 * @file media.cpp
* @author Farrell jumelais bakoufarel@gmail.com
* @date 2026-10-16
* @brief Implémentation de la classe Media
 * */
#include "media.h"
#include <iostream>
/**
 * @brief construit un objet media avec plusieur valeur.
 * @param _identifiant
 * @param _titre
 * @param _auteur
 * @param _annee
 */
Media::Media(const int _identifiant, const string &_titre, const string &_auteur, const int _annee) : identifiant(_identifiant),
    titre(_titre),
    auteur(_auteur),
    annee(_annee)
{
}

Media::~Media()
{
    cout << "destructeur de media"<< endl;
}
