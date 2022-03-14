#include <iostream>
#include "input_manager.h"

using namespace std;

int getDay() {
    int day = 0;
    cin >> day;
    while (day > 31 || day < 1) {
        cout << "Input errato, i giorni possono solo essere min 1, max 31." << endl;
        cout << "Riprova: ";
        cin >> day;
    }
    return day;
}

int getMonth() {
    int month = 0;
    cin >> month;
    while (month > 12 || month < 1) {
        cout << "Input errato, i mesi possono solo essere min 1, max 12." << endl;
        cout << "Riprova: ";
        cin >> month;
    }
    return month;
}

int getYear() {
    int year = 0;
    cin >> year;
    while ((2022 - year) <= 14 || (2022 - year) >= 20) {
        cout << "Input errato, non puoi essere così piccolo/grande." << endl;
        cout << "Riprova: ";
        cin >> year;
    }
    return year;
}
