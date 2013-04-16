#ifndef CRYPT_H_INCLUDED
#define CRYPT_H_INCLUDED

#include "include.h"

std::string crypt(int key,std::string message);

std::string decrypt(int key,std::string message);

#endif // CRYPT_H_INCLUDED
