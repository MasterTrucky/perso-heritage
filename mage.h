#ifndef MAGE_H
#define MAGE_H

#include <iostream>
#include <string>
#include "perso.h"
#include "guerrier.h"

using namespace std;

class mage : public perso
{
    private:
        string nom_du_mage;
        int nb_de_pt_de_vie;
        int nb_de_mana = 0;
        int intelligence;
    public:
        mage();
        mage(int vie, string nom, int intel);
        void meditation(int mana);
        void boule_de_feu(mage &cible);
        void cp_de_pg(mage &cible);
        void recevoir_dgts(int degats);
};



#endif