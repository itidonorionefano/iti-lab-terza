#include <iostream>

using namespace std;

/**
* Devo effettuare la media dei valori inseriti dall'utente. Non posso far inserire all'utente un numero infinito di
* valori, quindi devo chiedere in anticipo il numero dei valori da inserire all'interno dell'array. Una volta fatto
* devo far inserire tutti i valori dell'array.
*/
int main()
{
    cout << "Benvenuto, inserisci quanti sono i valori: ";
    // definisco e inizializzo arraySize a 0 e con il "cin" faccio inserire il valore all'utente.
    int arraySize = 0;
    cin >> arraySize;
    // definisco e inizializzo l'array vet di dimensione arraySize, "= {}" ci permette di inizializzare tutto il
    // nostro array a 0
    int vet[arraySize] = {};
    // ciclo per tutti i valori di arraySize e faccio inserire all'utente i valori dell'array
    for (int i = 0; i < arraySize; i++) {
        cout << "Inserisci il valore " << i + 1 << ": ";
        // Questo è come inserisco il valore con "cin" all'interno di uno dei blocchi dell'array
        cin >> vet[i];
    }
    int somma = 0;
    // facendo un altro ciclo, sommo tutti i valori dell'array insieme nella variabile somma
    for (int i = 0; i < arraySize; i++) {
        somma = somma + vet[i];
    }
    // divido la somma per la dimensione dell'array e stampo il risultato
    float risultato = somma / arraySize;
    cout << "Il risultato è: " << risultato << endl;
    return 0;
}
