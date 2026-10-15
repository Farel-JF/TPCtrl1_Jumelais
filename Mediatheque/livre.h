#ifndef LIVRE_H
#define LIVRE_H
#include <iostream>
#include "media.h"

class Livre : public Media
{
private:
    int nombreDePages;
public:
    Livre(const int _identifiant, const string &_titre, const string &_auteur, int _annee, int _nombreDePages);
    ~Livre();
    void Afficher();


};

#endif // LIVRE_H
