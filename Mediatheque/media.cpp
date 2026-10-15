#include "media.h"

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
