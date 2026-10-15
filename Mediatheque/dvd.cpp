/**
 * @file dvd.cpp
* @author Farrell jumelais bakoufarel@gmail.com
* @date 2026-10-16
* @brief Implémentation de la classe DVD
 * */
#include "dvd.h"
#include <iostream>
#include "media.h"
/**
 * @brief construit un objet DVD avec plusieur valeur.
 * @param _identifiant id du dvd
 * @param _titre titre du film
 * @param _auteur auteur du flim
 * @param _annee année de sortie
 * @param _duree duree du film
 *
 */
DVD::DVD(const int _identifiant, const string &_titre, const string &_auteur, const int _annee, const int _duree) :
    Media(_identifiant, _titre, _auteur, _annee),
    duree(_duree)
{
}
/**
 * @brief desctructeur de la class DVD
 */
DVD::~DVD()
{
}
/**
 * @brief
 */
void DVD::Afficher()
{

        cout << "| " << identifiant << " | "
             << titre << " | "
            << auteur << " | "
            << annee << " | "
            << duree << " minites | "
            << endl;

}
