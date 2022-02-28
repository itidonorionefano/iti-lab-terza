#include <iostream>

using namespace std;

/**
* Funzione per contare il numero dei caratteri della stringa.
* @param text[] l'array di char che deve essere contato
*/
int countString(char text[]) {
    int counter = 0;
    // "finchè non trovo una interruzione di stringa, ciclo..."
    while (text[counter] != '\0') {
        counter++;
    }
    return counter;
}

/**
* Funzione che permette di sostituire alcuni caratteri con altri.
* @param text[] l'array di char da iterare
* @param charToFind il char da trovare per essere sostituto
* @param charToSub il char da sostituire al char trovato
*/
void replaceChar(char text[], char charToFind, char charToSub) {
    for (int i = 0; i < countString(text); i++) {
        if (text[i] == charToFind) {
            text[i] = charToSub;
        }
    }
    /*
    È possibile sostituire il codice sopra con il seguente snippet. Il codice risulterà più veloce dato che non
    posso per la conta di tutti i caratteri, posso tranquillamente scorrerli tutti, alla fine incontrerò per forza
    una terminazione di stringa (\0)

    int counter = 0;
    while (text[counter] != '\0') {
        if (text[counter] == charToFind) {
            text[counter] = charToSub;
        }
        counter++;
    }
    */
}

int main()
{
    /*
    Inizializzo il mio array di caratteri, ricordate di inserire la dimensione rapportata a quello che dovete far
    inserire all'utente, non è importante far inserire tutti i caratteri sempre, potete anche definirlo più grande
    del necessario.
    */
    char testo[50] = {};
    // Faccio inserire tutta la stringa all'utente, gli spazi e gli invio interrompono l'inserimento
    cin >> testo;
    // Sostituisco gli 'underscore' con gli spazi, aggirando il problema del cin
    replaceChar(testo, '_', ' ');
    // Stampo il testo originale
    cout << "Testo originale: " << testo << endl;
    // Calcolo la dimensione dell'input inserito
    int dimTesto = countString(testo);
    cout << "Numero char: " << dimTesto << endl;
    // Chiedo all'utente il carattere da trovare e quello da sostituire
    char charToFind = '\0';
    char charToSub = '\0';
    cout << "Char da sostituire: ";
    cin >> charToFind;
    cout << "Char da mettere al posto di quello da sostituire: ";
    cin >> charToSub;
    // Una volta presi i caratteri, posso chiamare la funzione che scambia i caratteri scelti
    replaceChar(testo, charToFind, charToSub);
    cout << "Stringa risultante: " << testo << endl;
    return 0;
}
