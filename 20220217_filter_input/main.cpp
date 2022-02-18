#include <iostream>

using namespace std;

// è opportuno SEMPRE definire i valori che non cambiano come costanti, preferibilmente fuori dal main, così
// sono recuperabili ovunque noi vogliamo
const int PLAYER_MAX = 8;
const int PLAYER_MIN = 2;

/**
* Questo è un esempio di filtro per l'input, all'interno del while si mette una condizione vera SOLO se l'input NON è
* corretto. Data la natura del do-while, il ciclo richiede l'input la prima volta, ripetendo il ciclo tutte le volte
* necessarie fino a quando il valore non è valido.
*/
int filterDoWhile() {
    int playerNum = 0;
    do {
        cout << "Inserisci il numero dei giocatori." << endl;
        cout << "(min: " << PLAYER_MIN << " max: " << PLAYER_MAX << ")" << endl;
        cin >> playerNum;
        // SE il valore inserito non rispetta i limiti, effettua un nuovo ciclo.
    } while (playerNum > PLAYER_MAX || playerNum < PLAYER_MIN);
    return playerNum;
}

/**
* Questo è un altro esempio di filtro per l'input, viene prima richiesto il valore in input e se il valore non è valido
* allora si entra nel while e si chiede l'input finché questo non è corretto.
*/
int filterWhile() {
    int playerNum = 0;
    cout << "Inserisci il numero dei giocatori." << endl;
    cout << "(min: " << PLAYER_MIN << " max: " << PLAYER_MAX << ")" << endl;
    cin >> playerNum;
    // SE il valore inserito non rispetta i nostri limiti, richiedi il valore.
    while (playerNum > PLAYER_MAX || playerNum < PLAYER_MIN) {
        cout << "Il valore inserito non è valido, riprova: ";
        cin >> playerNum;
    }
    return playerNum;
}


int main()
{
    int returnDoWhile = filterDoWhile();
    cout << "La funzione filterDoWhile ha ritornato " << returnDoWhile << endl << endl;
    int returnWhile = filterWhile();
    cout << "La funzione filterWhile ha ritornato " << returnWhile << endl;
}
