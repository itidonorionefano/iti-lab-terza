#include "iostream"
#include "data_manager.h"

using namespace std;

void insertDate(date birthDay) {
    cout << "Inserisci l'anno: ";
    cin >> birthDay.year;
    while (birthDay.year < 1922 || birthDay.year > 2022) {
        cout << "Ma dove vivi? Nel AC?" << endl;
        cout << "Insersci l'anno: ";
        cin >> birthDay.year;
    }
    bool isBisestile = birthDay.year % 4 == 0;
    cout << "Inserisci il mese: ";
    cin >> birthDay.month;
    while (birthDay.month < 1 || birthDay.month > 12) {
        cout << "Minchia sei scemo" << endl;
        cout << "Inserisci il mese: ";
        cin >> birthDay.month;
    }
    bool dayVerified = false;
    do {
        cout << "Inserisci il giorno: ";
        cin >> birthDay.day;
        switch (birthDay.month) {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                if (birthDay.day >= 1 && birthDay.day <= 31) {
                    dayVerified = true;
                }
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                if (birthDay.day >= 1 && birthDay.day <= 30) {
                    dayVerified = true;
                }
                break;
            case 2:
                if (isBisestile) {
                    if (birthDay.day >= 1 && birthDay.day <= 29) {
                        dayVerified = true;
                    }
                } else {
                    if (birthDay.day >= 1 && birthDay.day <= 28) {
                        dayVerified = true;
                    }
                }
                break;
        }
        if (!dayVerified) {
            cout << "Hai inserito una data errata." << endl;
        }
    } while (!dayVerified);
}