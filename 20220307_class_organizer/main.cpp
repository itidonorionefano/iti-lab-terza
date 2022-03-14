#include <iostream>
#include "menu_handler.h"
#include "data_manager.h"

using namespace std;

// come inserire diversi tipi di informazione
// tenere conto di quali elementi sono cancellati
// modificare gli elementi
const int ARRAY_SIZE = 100;

int getPosition(dataSet checkTable[]) {
    for (int i = 0; i < ARRAY_SIZE; i++) {
        if (!checkTable[i].check) {
            return i;
        }
    }
}

int main()
{
    dataSet users[ARRAY_SIZE] = {};

    users[0] = {{"Bailetti", "Tommaso", {2004, 12, 2}}, 1};
    users[1] = {{"Artibani", "Giovanni", {2005, 04, 25}}, 1};

    clearScreen();
    bool loop = true;
    while(loop) {
        int position = getPosition(users);
        printMenu(users, ARRAY_SIZE);
        int selection = selectMenu();
        switch (selection) {
        default:
            loop = false;
            break;
        case 1:
            if (position <= ARRAY_SIZE) {
                cout << "Inserisci il cognome: ";
                cin >> users[position].utente.surname;
                cout << "Inserisci il nome: ";
                cin >> users[position].utente.name;
                insertDate(users[position].utente.birthDay);
                users[position].check = true;
            }
            break;
        case 2:
            // TODO
            break;
        case 3:
            cout << "ID\t\tCognome\t\tNome\t\tData di Nascita" << endl;
            for (int i = 0; i < ARRAY_SIZE; i++) {
                if (users[i].check) {
                    cout << i + 1 << "\t\t";
                    cout << users[i].utente.surname << string(16 - users[i].utente.surname.size(), ' ');
                    cout << users[i].utente.name << string(16 - users[i].utente.name.size(), ' ');
                }
            }
            cout << "Inserisci l'utente da eliminare: ";
            int toDelete = 0;
            cin >> toDelete;
            while (toDelete < 1 || toDelete > ARRAY_SIZE + 1 || !users[toDelete].check) {
                cout << "Reinserisci l'elemento da cancellare: ";
                cin >> toDelete;
            }
            toDelete--;
            users[toDelete].utente.birthDay.year = 0;
            users[toDelete].utente.birthDay.month = 0;
            users[toDelete].utente.birthDay.day = 0;
            users[toDelete].utente.surname = "";
            users[toDelete].utente.name = "";
            users[toDelete].check = false;
            break;
        }
        clearScreen();
    }
    return 0;
}
