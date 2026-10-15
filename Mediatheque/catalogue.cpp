#include "catalogue.h"
#include "media.h"

using namespace std;

Catalogue::Catalogue(int _nbMedia) :
    nbMedia(_nbMedia)
{
    lesMedias = new Media*[_nbMedia];
    index = 0;
}
Catalogue::~Catalogue(){
    delete[] lesMedias;
}

bool Catalogue::AjouterMedia(Media *_ptrMedia)
{
    bool retour = true;
    if (index < nbMedia){
        lesMedias[index++] = _ptrMedia ;
    }
    else{
        retour = false;
    }
    return retour;
}

void Catalogue::Consulter(const int _typeAffiche)
{
    cout << "+" << setfill('-') << setw(7) << "+" << setw(  3) << "+"  << endl;
    cout << "| " << " id " << "|" << " Titre" << "|" << " Auteur " << "|" << "Annee" << "|"<< "Caracteristique";
    cout << "+" << setfill('-') << setw(7) << "+" << setw( 3) << "+"  << endl;

    /*for (int indice = 0; indice < index; ++indice)
    {
        if(dynamic_cast<const class DVD*>(lesMedias[indice]))
        {
            lesMedias[indice]->Afficher();
        }
    }*/
}