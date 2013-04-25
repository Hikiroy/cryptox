#include "include.h"

int main()
{
    bool  done=0;
    std::string commande;
    std::vector<std::string> commandes;

    std::cout << "    ---Bienvenue dans cryptox---" << std::endl
    << "Attention, les resultats risquent d'etre " << std::endl
    <<"fausses avec des cles negatives" << std::endl
    << "Tapez help pour la liste des commandes"<<std::endl;

    while(!done)
    {
        std::getline(std::cin,commande);
        commandes = splitCommande(commande);
        done=processCommande(commandes);
    }

    return 0;
}
