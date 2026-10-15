#include "dvd.h"
#include <iostream>
#include "media.h"

DVD::DVD(const int _identifiant, const string &_titre, const string &_auteur, const int _annee, const int _duree) :
    Media(_identifiant, _titre, _auteur, _annee),
    duree(_duree)
{
}

DVD::~DVD()
{
}

void DVD::Afficher()
{

        cout << "| " << identifiant << " | "
             << titre << " | "
            << auteur << " | "
            << annee << " | "
            << duree << " minites | "
            << endl;

}
