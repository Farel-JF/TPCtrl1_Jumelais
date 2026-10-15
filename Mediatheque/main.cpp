#include <iostream>
#include <iostream>
#include "media.h"
#include "livre.h"
#include "dvd.h"
enum CHOIX_MENU
{
    OPTION_1 = 1,
    OPTION_2,
    OPTION_3,
    OPTION_4,
    OPTION_5,
    QUITTER
};

int main()
{
    /*4. Destructeur :
    Est-il nécessaire de prévoir un destructeur pour cette classe ? Justifiez votre
    réponse. Déclarez, le cas échéant, le destructeur inline dans le fichier media.h
                            non il faut declarée un destructeur*/
    /*
     *
    //Question 7
    Livre monlivre(1000, "Le Petit Prince", "Antoine de Saint-Exupery", 1943, 96);
    monlivre.Afficher();
    //Question 14
    Livre monlivre2(1001, "A la recherche du temple perdu", "Marcel Proust", 1913, 4300);
    monlivre2.Afficher();
    //Question 9
    DVD monDvd(2000, "Le Parrain", "Francis Ford Coppola", 1972, 175);
    monDvd.Afficher();
*/
    int choix;
    Menu leMenu("menu.txt");
    do
    {
        choix = leMenu.Afficher();
        switch (choix)
        {
        case OPTION_1:
        {
            cout << "Ajouter un DVD" << endl;
            Menu::AttendreAppuiTouche();
            break;
        }
        case OPTION_2:
            {
            cout << "Ajouter un livre" << endl;
            Menu::AttendreAppuiTouche();
            break;
    }
        case OPTION_3:
    {
            cout << "Afficher l'ensemble" << endl;
            Menu::AttendreAppuiTouche();
            break;
        }
        case OPTION_4:
        {
            cout << "Afficher Les dvd" << endl;
            Menu::AttendreAppuiTouche();
            break;
        }
        case OPTION_5:
        {
            cout << "Afficher Les livres" << endl;
            Menu::AttendreAppuiTouche();
            break;
        }
        }
    } while(choix != QUITTER);
    return 0;
}
