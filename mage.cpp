#include <iostream>
#include <string>
#include "mage.h"
#include "guerrier.h"

using namespace std;

mage::mage()
{
    this->nb_de_pt_de_vie = 150;
    this->nom_du_mage = "test";
    this->intelligence = 120;
}

mage::mage(int vie, string nom, int intel)
{
    this->nb_de_pt_de_vie = vie;
    this->nom_du_mage = nom;
    this->intelligence = intel;
}

void mage::meditation(int mana)
{
    this->nb_de_mana += 200;
    cout<< this->nom_du_mage<<" a gagner "<<mana<<" pt de mana"<<" / mana actuelle: "<<nb_de_mana<<endl;
}

void mage::boule_de_feu(mage &cible)
{
    if (nb_de_mana >= 50)
    {
    cible.recevoir_dgts(2.5*intelligence*20);
    this->nb_de_mana -= 50;
    } else {
        cout<< this->nom_du_mage<<" Vous n'avez pas assez de pt de mana"<<endl;
    }
}

void mage::cp_de_pg(mage &cible)
{
    cible.recevoir_dgts(20);
    this->nb_de_mana += 20;
    cout<< this->nom_du_mage<<" a gagner 5 pt de mana"<<" / mana actuelle: "<<nb_de_mana<<endl;
}

void mage::recevoir_dgts(int degats)
{
    this->nb_de_pt_de_vie -= degats;
    cout<< this->nom_du_mage<<" a perdu "<<degats<< "pt de vie"<<endl;
}