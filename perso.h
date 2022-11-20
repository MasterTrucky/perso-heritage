#ifndef PERSO_H
#define PERSO_H

#include <iostream>
#include <string>

using namespace std;

class perso
{
    private:
        string nom_du_perso;
        int nb_de_pt_de_vie;
    public:
        perso();
        perso(int vie, string nom);
        void recevoir_dgts(int degats);
        void cp_de_pg(perso &cible);
};

#endif