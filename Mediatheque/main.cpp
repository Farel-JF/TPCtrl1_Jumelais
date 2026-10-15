#include <iostream>
#include <iostream>
#include "media.h"
#include "livre.h"
#include "dvd.h"

using namespace std;

int main()
{
    Livre monlivre(1000, "Le Petit Prince", "Antoine de Saint-Exupery", 1943, 96);
    monlivre.Afficher();
    DVD monDvd(2000, "Le Parrain", "Francis Ford Coppola", 1972, 175);
    monDvd.Afficher();
    return 0;
}
