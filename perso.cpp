#include <iostream>
#include <string>
#include "perso.h"

using namespace std;


perso::perso()
{
    this->nb_de_pt_de_vie = 150;
    this->nom_du_perso = "test";
}

perso::perso(int vie, string nom)
{
    this->nb_de_pt_de_vie = vie;
    this->nom_du_perso = nom;   
}

void perso::recevoir_dgts(int degats)
{
    this->nb_de_pt_de_vie -= degats;
    cout<< this->nom_du_perso<<" a perdu "<<degats<< "pt de vie"<<endl;
}

void perso::cp_de_pg(perso &cible)
{
    cible.recevoir_dgts(20);
}