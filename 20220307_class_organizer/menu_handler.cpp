#include <iostream>
#include "menu_handler.h"

using namespace std;

const int MIN_MENU = 1;
const int MAX_MENU = 3;

void printMenu(bool checkTable[], int of) {
    int counter = 0;
    for (int i = 0; i < of; i++) {
        if (checkTable[i]) {
            counter++;
        }
    }

    cout << "----- Class Organizer -----" << endl;
    if (counter != 0) {
        cout << "Alunni inseriti: " << counter << " di " << of << endl;
    }
    cout << "1. Inserisci alunno" << endl;
    cout << "2. Modifica alunno" << endl;
    cout << "3. Cancella alunno" << endl;
}

int selectMenu() {
    cout << "Seleziona la voce: ";
    int selection = 0;
    cin >> selection;
    while (selection < 1 || selection > 3) {
        cout << "Selezione non valida, si prega di riprovare: ";
        cin >> selection;
    }
    return selection;
}

void clearScreen() {
    #ifdef WINDOWS
        system("cls");
    #else
        system("clear");
    #endif
}
