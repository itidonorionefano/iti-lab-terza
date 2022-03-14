#include <iostream>
#include "menu_handler.h"
#include "input_manager.h"

using namespace std;

// come inserire diversi tipi di informazione
// tenere conto di quali elementi sono cancellati
// modificare gli elementi
const int ARRAY_SIZE = 100;

int getPosition(bool checkTable[]) {
    for (int i = 0; i < ARRAY_SIZE; i++) {
        if (checkTable[i] == false) {
            return i;
        }
    }
}

int main()
{
    string arrayName[ARRAY_SIZE] = {};
    string arraySurname[ARRAY_SIZE] = {};
    int arrayDay[ARRAY_SIZE] = {};
    int arrayMonth[ARRAY_SIZE] = {};
    int arrayYear[ARRAY_SIZE] = {};
    bool checkTable[ARRAY_SIZE] = {};

    clearScreen();
    while(true) {
        int selection = 0;
        int position = getPosition(checkTable);
        printMenu(checkTable, ARRAY_SIZE);
        selection = selectMenu();
        switch (selection) {
        case 1:
            if (position <= ARRAY_SIZE) {
                cout << "Inserisci il cognome: ";
                cin >> arraySurname[position];
                cout << "Inserisci il nome: ";
                cin >> arrayName[position];
                cout << "Inserisci il giorno di nascita: ";
                arrayDay[position] = getDay();
                cout << "Inserisci il mese di nascita: ";
                arrayMonth[position] = getMonth();
                cout << "Inserisci l'anno di nascita: ";
                arrayYear[position] = getYear();
                checkTable[position] = true;
            }
            break;
        case 2:
            // TODO
            break;
        case 3:
            cout << "ID\t\tCognome\t\tNome\t\tData di Nascita" << endl;
            for (int i = 0; i < ARRAY_SIZE; i++) {
                if (checkTable[i] == true) {
                    cout << i + 1 << "\t\t";
                    cout << arraySurname[i] << string(16 - arraySurname[i].size(), ' ');
                    cout << arrayName[i] << string(16 - arrayName[i].size(), ' ');
                    cout << arrayDay[i] << "/" << arrayMonth[i] << "/" << arrayYear[i] << endl;
                }
            }
            cout << "Inserisci l'utente da eliminare: ";
            int toDelete = 0;
            cin >> toDelete;
            while (toDelete < 1 || toDelete > ARRAY_SIZE + 1 || checkTable[toDelete] == false) {
                cout << "Reinserisci l'elemento da cancellare: ";
                cin >> toDelete;
            }
            toDelete--;
            arrayDay[toDelete] = 0;
            arrayMonth[toDelete] = 0;
            arrayYear[toDelete] = 0;
            arraySurname[toDelete] = "";
            arrayName[toDelete] = "";
            checkTable[toDelete] = 0;
            break;
        }
        clearScreen();
    }
    return 0;
}
