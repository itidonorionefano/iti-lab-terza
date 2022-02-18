#include <iostream>
#include "personal_math.h"

using namespace std;

int main() {
    float a = 0;
    float b = 0;
    float c = 0;
    cout << "Benvenuto, inserisci a: ";
    cin >> a;
    cout << "Inserici b: ";
    cin >> b;
    cout << "Inserisci c: ";
    cin >> c;
    float delta = calculateDelta(a, b, c);
    if (delta < 0) {
        cout << "Delta = 0, impossibile.";
        return 1;
    } else {
        if (delta == 0) {
            cout << "Soluzione unica: " << endl;
        } else {
            cout << "Ci sono due soluzioni: " << endl;
        }
        float x1 = 0;
        float x2 = 0;
        calculateEquation(a, b, c, x1, x2);
        cout << "x_1 = " << x1 << endl;
        cout << "x_2 = " << x2 << endl;
    }
    return 0;
}
