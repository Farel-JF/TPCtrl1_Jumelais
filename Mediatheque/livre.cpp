/**
 * @file livre.cpp
* @author Farrell jumelais bakoufarel@gmail.com
* @date 2026-10-16
* @brief Implémentation de la classe LIvre
 * */
#include "livre.h"
#include <iostream>
#include "media.h"
/**
 * @brief construit un objet LIvre avec plusieur valeur.
 * @param _identifiant
 * @param _titre
 * @param _auteur
 * @param _annee
 * @param _nombreDePages
 */
Livre::Livre(const int _identifiant, const string &_titre, const string &_auteur, int _annee, int _nombreDePages) :
    Media(_identifiant, _titre, _auteur, _annee),
    nombreDePages(_nombreDePages)
{
}

Livre::~Livre()
{
}

void Livre::Afficher()
{
    cout << "| " << identifiant << " | "
         << titre << " | " << auteur << " | "
         << annee << " | "
         << nombreDePages << " Pages | "
         << endl;
}


