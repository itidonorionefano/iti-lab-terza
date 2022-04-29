#include <iostream>
#include <fstream>

using namespace std;

const int ROWS = 5;
const int COLUMNS = 5;
const string FILENAME = "test.txt";

void writeData(int theatre[][COLUMNS]) {
    fstream file;
    file.open(FILENAME, ios::out);
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            file << theatre[i][j] << ' ';
        }
        file << endl;
    }
    file.close();
}

void loadData(int theatre[][COLUMNS]) {
    fstream file;
    file.open(FILENAME, ios::in);
    int i = 0;
    int j = 0;
    file >> theatre[i][j];
    while(!file.eof()) {
        j++;
        if (j >= COLUMNS) {
            j = 0;
            i++;
            if (i >= ROWS) {
                break;
            }
        }
        file >> theatre[i][j];
    }
    file.close();
}

void printTheatre(int theatre[][COLUMNS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            cout << theatre[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int theatre[ROWS][COLUMNS] = {};
    loadData(theatre);
    cout << "Benvenuto nel software per gestire il teatro." << endl;
    while(true) {
        cout << "-----" << endl;
        printTheatre(theatre);
        cout << "Avvio la procedura di inserimento di una nuova prenotazione..." << endl;
        cout << "Inserisci la riga di prenotazione: ";
        // inserisco la riga
        int row = 0;
        cin >> row;
        while (row < 1 || row > ROWS) {
            cout << "La riga inserita non esiste, riprova: ";
            cin >> row;
        }
        // inserisco la colonna
        cout << "Inserisci la colonna di prenotazione: ";
        int column = 0;
        cin >> column;
        while (column < 1 || column > COLUMNS) {
            cout << "La colonna inserita non esiste, riprova: ";
            cin >> column;
        }
        // normalizzo l'input dell'utente
        row--;
        column--;
        // logica della prenotazione
        switch(theatre[row][column]) {
        case 0:
            theatre[row][column] = 1;
            cout << "Prenotazione effettuata." << endl;
            writeData(theatre);
            break;
        case 1:
            cout << "Posto già prenotato." << endl;
            break;
        case 2:
            cout << "Posto riservato." << endl;
            break;
        }
    }
    return 0;
}
