#include <iostream>

using namespace std;

// posti che la biblioteca ha
const int MAX_POSTI = 5;

// elemento del nostro array
struct slot {
    // il nome del mio posto
    string slotName;
    // l'utente che usa il posto
    string name;
    string surname;
};

// scrivere una funzione che inizializzi tutti i posti della mia bilioteca
void initData(slot slots[]) {
    slots[0].slotName = "A";
    slots[1].slotName = "B";
    slots[2].slotName = "C";
    slots[3].slotName = "D";
    slots[4].slotName = "E";
}

// Stampo tutti i valori in una tabella
void printTable(slot slots[]) {
    cout << "|Posto\t|Nome\t\t|Cognome\t|" << endl;
    for (int i = 0; i < MAX_POSTI; i++) {
        cout << "|" << slots[i].slotName << "\t";
        cout << "|" << slots[i].name << string(15 - slots[i].name.size(), ' ');
        cout << "|" << slots[i].surname << string(15 - slots[i].surname.size(), ' ');
        cout << "|" << endl;
    }
}

int main()
{
    // inizializzo il mio array di struttura slot
    slot slots[MAX_POSTI] = {};
    initData(slots);
    /*
    Questo è il codice per far inserire all'utente tutti gli identificativi
    della nostra biblioteca, dato che li mettiamo HARD-CODED, l'ho commentato.
    */
    /*
    cout << "Inserisci i nomi dei posti: " << endl;
    for (int i = 0; i < MAX_POSTI; i++) {
            cout << "Inserisci il posto n° " << i + 1 << ": ";
            cin >> slots[i].slotName;
    }
    for (int i = 0; i < MAX_POSTI; i++) {
        cout << slots[i].slotName << endl;
    }
    */

    int selection = 0;
    // Il codice deve girare sempre, fino a quando l'utente non decide il contrario, per quello è un while(true)
    while(true) {
        /*
         Esempio di un menù, finché la selezione non è conforme agli input del menù, costringo l'utente a inserire
         nuovamente la scelta
        */
        do {
            cout << "Benvenuto al software di gestione della biblioteca." << endl;
            cout << "1. Assegna il posto a un utente" << endl;
            cout << "2. Rimuovi tutti gli utenti" << endl;
            cout << "3. Stampa i posti" << endl;
            cout << "4. Esci dal programma" << endl;
            cout << "Inserisci la tua scelta: ";
            cin >> selection;
        } while(selection < 1 || selection > 4);
        // Se la selezione è 1, faccio inserire l'utente al primo posto disponibile
        if (selection == 1) {
            // inizializzo place a -1, così se non trovo il posto libero, ne sono al corrente
            int place = -1;
            // per ogni valore, all'interno di slots, cerco se ci sono posti vuoti
            for (int i = 0; i < MAX_POSTI; i++) {
                // controllo sia vuoto
                if (slots[i].name == "" && slots[i].surname == "") {
                    place = i;
                    break;
                }
            }
            // controllo appunto se place è un valore non possibile, annullando l'inserimento nel caso
            if (place == -1) {
                cout << "Non ci sono posti." << endl;
            } else {
                cout << "Inserisci il nome dell'utente: ";
                cin >> slots[place].name;
                cout << "Inserisci il cognome dell'utente: ";
                cin >> slots[place].surname;
                cout << "L'utente ha assegnato il posto " << slots[place].slotName << endl;
            }
        } else if (selection == 2) {
            // pulisco tutti i nomi, così che i posti sono tutti liberi nuovamente
            for (int i = 0; i < MAX_POSTI; i++) {
                slots[i].name = "";
                slots[i].surname = "";
            }
            cout << "Ho pulito con successo tutti i posti!" << endl;
        } else if (selection == 3) {
            // uso la funzione printTable()
            printTable(slots);
        // non è necessario che inserisca un "if (selection == 3)", dato che sono sicuro che selection è 3
        } else {
            // esco dal ciclo infinito, terminando il programma
            break;
        }
    }
    return 0;
}
