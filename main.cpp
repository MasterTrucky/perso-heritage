#include <iostream>
#include "perso.h"
#include "guerrier.h"
#include "mage.h"

using namespace std;

int main()
{
    perso B(100, "toto");
    perso C(150, "jul");
    C.cp_de_pg(B);
    B.cp_de_pg(C);
cout<<"-------------------------------------------"<<endl;
    guerrier D(300, "lol", 0);
    guerrier E(350, "rrt", 0);
    E.enrage(50);
    D.attaque_eclair(E);
    E.cp_de_pg(D);
    D.cp_de_pg(E);
    E.attaque_eclair(D);
cout<<"-------------------------------------------"<<endl;
    mage F(150, "MAGE NOIR", 180);
    mage G(100, "MAGE", 130);
    F.meditation(200);
    G.cp_de_pg(F);
    F.cp_de_pg(G);
    G.boule_de_feu(F);
    F.boule_de_feu(G);
cout<<"-------------------------------------------"<<endl;


    
    return 0;
}