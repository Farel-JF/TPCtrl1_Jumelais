#include "livre.h"
#include <iostream>
#include "media.h"

Livre::Livre(const int _identifiant, const string &_titre, const string &_auteur, int _annee, int _nombreDePages) :
    Media(_identifiant, _titre, _auteur, _annee),
    nombreDePages(_nombreDePages)
{}

void Livre::Afficher()
{
    cout << "| " << identifiant << " | "
         << titre << " | " << auteur << " | "
         << annee << " | "
         << nombreDePages << " Pages | "
         << endl;
}


