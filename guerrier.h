#ifndef GUERRIER_H
#define GUERRIER_H

#include <iostream>
#include <string>
#include "perso.h"
#include "mage.h"

using namespace std;

class guerrier : public perso 
{
    private:
        int force = 50;
        int nb_de_rage;
        string nom_du_guer;
        int nb_de_pt_de_vie;
    public:
        guerrier();
        guerrier(int vie, string nom, int rage);
        void enrage(int rage);
        void attaque_eclair(guerrier &cible);
        void cp_de_pg(guerrier &cible);
        void recevoir_dgts(int degats);
};

#endif