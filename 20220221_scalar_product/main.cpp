#include <iostream>

using namespace std;

/**
* Il prodotto per scalare non è altro che, avendo due vettori di uguale dimensione, moltiplico tutti i valori nella
* stessa posizione. In questo caso inseriamo il risultato all'interno di un terzo array.
*/
int main()
{
    cout << "Inserisci il numero dei valori dei tuoi array: ";
    int arraySize = 0;
    cin >> arraySize;
    // una volta ottenuta la dimensione dei nostri array, inizializzo tutti gli array della stessa dimensione
    int vett1[arraySize] = {};
    int vett2[arraySize] = {};
    int risultante[arraySize] = {};

    // i due cicli sono fatti per inserire all'interno dei primi due array tutti i valori in input dall'utente
    for (int i = 0; i < arraySize; i++) {
        cout << "Inserisci il valore " << i + 1 << " del primo array: ";
        cin >> vett1[i];
    }
    for (int i = 0; i < arraySize; i++) {
        cout << "Inserisci il valore " << i + 1 << " del secondo array: ";
        cin >> vett2[i];
    }

    // effettuo la moltiplicazione valore per valore dei valori inseriti prima, inserendo il risultato nel terzo
    // vettore
    for (int i = 0; i < arraySize; i++) {
        risultante[i] = vett1[i] * vett2[i];
    }

    // stampo il vettore risultante
    for (int i = 0; i < arraySize; i++) {
        cout << "Il valore risultante nel posto " << i + 1 << " è: ";
        cout << risultante[i] << endl;
    }
    return 0;
}

