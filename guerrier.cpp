#include <iostream>
#include <string>
#include "guerrier.h"
#include "mage.h"

using namespace std;

guerrier::guerrier()
{
    this->nb_de_pt_de_vie = 150;
    this->nom_du_guer = "test";
    this->nb_de_rage = 0;
}

guerrier::guerrier(int vie, string nom, int rage)
{
    this->nb_de_pt_de_vie = vie*1.5;
    this->nom_du_guer = nom;
    this->nb_de_rage = rage;
}

void guerrier::enrage(int rage)
{
    this->nb_de_rage += 50;
    cout<< this->nom_du_guer<<" a gagner "<<rage<<" pt de rage"<<" / rage actuelle: "<<nb_de_rage<<endl;
}

void guerrier::attaque_eclair(guerrier &cible)
{
    if (nb_de_rage >= 25)
    {
    cible.recevoir_dgts(1.8*force*20);
    this->nb_de_rage -= 25;
    } else {
        cout<< this->nom_du_guer<<" Vous n'avez pas assez de pt de rage"<<endl;
    }
}

void guerrier::cp_de_pg(guerrier &cible)
{
    cible.recevoir_dgts(20);
    this->nb_de_rage += 5;
    cout<< this->nom_du_guer<<" a gagner 5 pt de rage"<<" / rage actuelle: "<<nb_de_rage<<endl;
}

void guerrier::recevoir_dgts(int degats)
{
    this->nb_de_pt_de_vie -= degats;
    cout<< this->nom_du_guer<<" a perdu "<<degats<< "pt de vie"<<endl;
}