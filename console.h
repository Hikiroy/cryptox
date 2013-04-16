#ifndef CONSOLE_H_INCLUDED
#define CONSOLE_H_INCLUDED

#include "include.h"

std::vector <std::string> splitCommande(std::string commande);

void processCommande(std::vector<std::string> commande);

size_t stringToInt(std::string a);

#endif // CONSOLE_H_INCLUDED
