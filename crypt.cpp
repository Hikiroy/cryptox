#include "include.h"

std::string alphabet= "abcdefghijklmnopqrstuvwxyz";

std::string crypt(int key,std::string message)
{
    for(size_t i(0); i<message.size(); i++)
    {
        for(size_t ialpha(0); ialpha<25; ialpha++)
        {
            if (alphabet[ialpha]==message[i])
            {
                message[i]=alphabet[(ialpha+key)%25];
                break;
            }
        }
    }
    return message;
}

std::string decrypt(int key,std::string message)
{
    if(key != 0)
    {
        message = crypt(26-key,message);
    }

    else
    {
        std::ofstream result("result.txt");

        if(result)
        {
            for(size_t i(0); i<25; i++)
            {
                result << crypt(i,message) << std::endl ;
            }
            message = "Voir resultats du decryptage dans le fichier result.txt" ;
        }
        else
        {
            message = "Erreur lors de l'ouverture du fichier result.txt";
        }
    }
    return message;
}

