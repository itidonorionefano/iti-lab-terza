#include <iostream>

using namespace std;

/**
* Questa è la funzione che ci permette di trovare i valori da un array. Di fatto gira tutti i valori del mio array fino
* a che non trova quello che sta cercando. Perché faccio uscire la funzione direttamente una volta trovato il valore?
* Così evito di scorrere altri valori, non mi interessano, dato che ho già trovato quello che stavo cercando.
* Ricordate che: values[] è l'array dove cercare i valori, valuesSize è la dimensione dell'array e valueToFind è il
* valore da trovare.
*/
bool findValue(int values[], int valuesSize, int valueToFind) {
    for (int i = 0; i < valuesSize; i++) {
        if (values[i] == valueToFind) {
            return true;
        }
    }
    return false;
}

/**
* Scrivere una funzione che trova un valore da un array.
*/
int main()
{
    // naturalmente tutti i valori possono anche essere inseriti dall'utente, qui sono scritti (hardcoded) per velocità.
    int valuesSize = 10;
    int values[] = {34, 5, 123, 456341, 4, 56, 3, 1434, 534, 5413};
    int valueToFind = 5;
    // chiamo la funzione
    bool risultato = findValue(values, valuesSize, valueToFind);
    if (risultato) {
        cout << "Ho trovato il valore!" << endl;
    } else {
        cout << "Non ho trovato il valore" << endl;
    }

    return 0;
}
