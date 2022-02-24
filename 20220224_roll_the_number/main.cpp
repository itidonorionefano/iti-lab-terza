#include <iostream>
#include <chrono>
#include <thread>
#include "output_handler.h"

using namespace std;

/**
* extracted è il numero estratto, dobbiamo saperlo in anticipo per fermare l'animazione nel punto giusto
* number è il numero mostrato, va naturalmente da 0 a 36
* cycleCounter è il numero di volte che voglio ripetere l'animazione prima di mostrare il numero estratto
*/
int main()
{
    int extracted = 14;
    int number = 0;
    int cycleCounter = 5;
    while (true) {
        printOverlay(number);
        /*
        * usando le librerie chrono e thread si può utilizzare il metodo
        * this_thread::sleep_for(chrono::milliseconds(X)) per mettere il programma in sleep per X millisecondi.
        * le condizioni sotto servono solamente a rallentare l'animazione in procinto del numero selezionato
        */
        if (cycleCounter - 1 == 0) {
            this_thread::sleep_for(chrono::milliseconds(100));
            if (number == extracted) {
                break;
            }
        } else if (cycleCounter - 1 == 1) {
            this_thread::sleep_for(chrono::milliseconds(50));
        } else {
            this_thread::sleep_for(chrono::milliseconds(25));
        }
        // Sfrutto il while per fare il conteggio, resettando il valore quando serve.
        if (number >= 36) {
            number = 0;
            cycleCounter--;
        } else {
            number++;
        }
    }
    return 0;
}
