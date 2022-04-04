#include <iostream>

using namespace std;

const int DIM_ARRAY = 10;

void scambia(int &x, int &y) {
    int tmpInt = x;
    x = y;
    y = tmpInt;
}

int main()
{
    int myArray[DIM_ARRAY] = {};
    for (int i = 0; i < DIM_ARRAY; i++) {
        cout << "Inserisci il valore in posizione " << i + 1 << " : ";
        cin >> myArray[i];
    }

    for (int i = 0; i < DIM_ARRAY - 1; i++) {
        for (int j = i + 1; j < DIM_ARRAY; j++) {
            if (myArray[i] > myArray[j]) {

            }
        }
    }

    for (int i = 0; i < DIM_ARRAY; i++) {
        cout << myArray[i] << " ";
    }

    return 0;
}
