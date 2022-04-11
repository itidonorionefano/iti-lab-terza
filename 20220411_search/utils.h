#include <string>

#ifndef UTILS_H_INCLUDED
#define UTILS_H_INCLUDED

/**
 * Dall'array passato per parametro, genera una stringa.
 *
 * @param data l'array da "stringare"
 * @param dim la dimensione dell'array
 */
std::string arrayToString(int data[], int dim);

/**
 * Non è necessario un commento.
 */
void scambia(int &a, int &b);

#endif // UTILS_H_INCLUDED
