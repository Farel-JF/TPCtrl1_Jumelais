#ifndef CATALOGUE_H
#define CATALOGUE_H
#include "media.h"

#include <iomanip>
#include <map>
#include <iostream>
// Question 14
enum TYPE_MEDIA { TOUS = 1,
                  VIDEO,
                  LIVRE} ; // Constante énumérée
class Catalogue
{
private:
    Media** lesMedias;
    int nbMedia;
    int index;

public:
    Catalogue(const int _nbMedia);
    ~Catalogue();
    bool AjouterMedia(Media* _ptrMedia);
    void Consulter(const int _typeAffiche = 1);


};

#endif // CATALOGUE_H
