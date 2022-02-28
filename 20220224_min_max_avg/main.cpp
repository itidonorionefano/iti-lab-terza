#include <iostream>

using namespace std;

/**
* Calcolare i valori, da un vettore inserito interamente dall'utente
* (dimensione e i valori stessi), del massimo, il minimo e la media.
*/
int main()
{
    cout << "Inserisci la quantità dei valori: ";
    // definiamo n e la inizializziamo
    int n = 0;
    // inseriamo da tastiera il valore n
    cin >> n;
    // definiamo il vettore
    int vettore[n] = {};
    // facciamo inserire i valori all'utente
    for (int i = 0; i < n; i++) {
        cout << "Inserisci il valore " << i << ": ";
        cin >> vettore[i];
    }
    // faccio il minimo
    int minimo = vettore[0];
    for (int i = 1; i < n; i++) {
        if (minimo > vettore[i]) {
            minimo = vettore[i];
        }
    }
    cout << "Il minimo è: " << minimo << endl;

    // faccio il massimo
    int massimo = vettore[0];
    for (int i = 1; i < n; i++) {
        if (massimo < vettore[i]) {
            massimo = vettore[i];
        }
    }
    cout << "Il massimo è: " << massimo << endl;

    // media
    int somma = 0;
    for (int i = 0; i < n; i++) {
        somma = somma + vettore[i];
    }
    // il cast a (float) è necessario per evitare che C possa intendere la divisione SENZA virgola.
    float media = (float) somma / (float) n;
    cout << "La media è: " << media << endl;
    return 0;
}
