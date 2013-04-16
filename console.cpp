#include "include.h"

size_t stringToInt(std::string a) // conversion d'une chaine en size_t
{
    std::istringstream iss(a);
    size_t tmp;
    iss>>tmp;
    return tmp;
}

std::vector<std::string> splitCommande(std::string commande)
{
    std::vector<std::string> commandes;
    std::istringstream stringStream(commande);
    while(!stringStream.eof())
    {
        std::string subString;
        getline(stringStream,subString,' ');
        if(subString != "")
        {
            commandes.push_back(subString);
        }
    }

    return commandes;
}

void processCommande(std::vector<std::string> commandes)
{
    std::string subString;
    if (commandes[0]=="help")
    {
        std::cout << std::endl << "liste des commandes : " << std::endl << std::endl
                  << "help : affiche ce menu" << std::endl
                  << "crypt cle ""message"" : crypte message selon le code Cesar avec la cle precisee" << std::endl
                  << "decrypt cle ""message"" : decrypte message selon le code Cesar avec la cle precisee" << std::endl
                  <<"si vous ne connaissez pas la cle, inserez 0 a la place" << std::endl;
    }

    else if (commandes[0]=="crypt")
    {

        size_t cle = stringToInt(commandes[1]);
        for(size_t i(2); i<commandes.size(); i++)
        {
            subString+= commandes[i] + " " ;
        }
        subString=crypt(cle,subString);

    }

    else if (commandes[0]=="decrypt")
    {
        size_t cle = stringToInt(commandes[1]);
        for(size_t i(2); i<commandes.size(); i++)
        {
            subString+= commandes[i] + " " ;
        }
        subString=decrypt(cle,subString);
    }

    std::cout << subString << std::endl;
}
