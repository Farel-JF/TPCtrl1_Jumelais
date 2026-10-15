#include <iostream>
#include <iostream>
#include "media.h"
#include "livre.h"

using namespace std;

int main()
{
    Livre monlivre(1000, "Le Petit Prince", "Antoine de Saint-Exupery", 1943, 96);
    monlivre.Afficher();
    return 0;
}
