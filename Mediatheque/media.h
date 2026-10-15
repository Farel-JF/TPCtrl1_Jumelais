#ifndef MEDIA_H
#define MEDIA_H

#include <iostream>
using namespace std;

class Media
{
protected:
    int identifiant;
    string titre;
    string auteur;
    int annee;

public:
    Media(const int _identifiant, const string &_titre, const string &_auteur, const int _annee);

    virtual ~Media();
    virtual void Afficher() = 0;

};

#endif // MEDIA_H
