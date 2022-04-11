#include <iostream>
#include "utils.h"
#include "sorting.h"

using namespace std;

int main()
{
    // creo diversi array che partono da data, così da avere più casi disponibili
    const int DATA_SIZE = 20;
    int data[] = {48, 95, -4, 13, -62, -98, 3, -40, 71, 12, -65, -31, -28, 49, -13, 36, 31, -29, -3, -37};
    //int data[] = {-98, -65, -62, -40, -37, -31, -29, -28, -13, -4, -3, 3, 12, 13, 31, 36, 48, 49, 71, 95};
    int dataExchange[DATA_SIZE];
    for (int i = 0; i < DATA_SIZE; i++) {
        dataExchange[i] = data[i];
    }
    int dataBubbleSort[DATA_SIZE];
    for (int i = 0; i < DATA_SIZE; i++) {
        dataBubbleSort[i] = data[i];
    }

    // incomincio stampando tutti i valori, così posso rendermi conto di che elementi ordino
    cout << "Ordino data: " << arrayToString(data, DATA_SIZE) << endl;
    // effettuo l'ordinamento con l'exchangesort
    int exchangeSortCost = exchangeSort(dataExchange, DATA_SIZE);
    cout << "Ordino con exchangeSort: " << arrayToString(dataExchange, DATA_SIZE) << endl;
    cout << "L'algoritmo è costato: " << exchangeSortCost << endl;
    // effettuo l'ordinamento con il bubblesort
    int bubbleSortCost = bubbleSort(dataBubbleSort, DATA_SIZE);
    cout << "Ordino con bubbleSort: " << arrayToString(dataBubbleSort, DATA_SIZE) << endl;
    cout << "L'algoritmo è costato: " << bubbleSortCost << endl;
    // TODO: implementare un algoritmo di ricerca.

    return 0;
}
