#ifndef DVD_H
#define DVD_H

#include <iostream>
#include "media.h"

using namespace std;

class DVD : public Media
{
private:
    int duree;
public:
    DVD(const int _identifiant, const string &_titre, const string &_auteur, const int _annee,  const int _duree);
    ~DVD();
    void Afficher();

};

#endif // DVD_H
