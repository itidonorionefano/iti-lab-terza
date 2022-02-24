#include <iostream>
#include "output_handler.h"

using namespace std;

int guiToggle = 0;

/**
* guiToggle sopra viene usato per ciclare quale lato mostrare dell'animazione
*/
void printOverlay(int number) {
    clearScreen();

    if (guiToggle == 1) {
        cout << " " << string(4, '_') << " " << endl;
    } else {
        cout << endl;
    }

    if (guiToggle == 0) {
        cout << "|";
    } else {
        cout << " ";
    }

    if (number < 10) {
        cout << " " << number << "  ";
    } else {
        cout << " " << number << " ";
    }

    if (guiToggle == 2) {
        cout << "|" << endl;
    } else {
        cout << endl;
    }

    if (guiToggle == 3) {
        cout << " " << string(4, '-') << " " << endl;
    } else {
        cout << endl;
    }

    if (guiToggle >= 3) {
        guiToggle = 0;
    } else {
        guiToggle++;
    }
}

void clearScreen() {
    cout << string(100, '\n');
}
