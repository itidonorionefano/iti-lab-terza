#include <iostream>
#include "utils.h"
#include "sorting.h"

using namespace std;

int trovaInArray(int data[], int dim, int toFind, int &opCounter) {
    int i = dim / 2;
    if (data[i] > toFind) {
        for (int j = i; j > 0; j--) {
            opCounter++;
            if (data[j] < toFind) {
                return -1;
            }
            opCounter++;
            if (data[j] == toFind) {
                return j;
            }
        }
    } else {
        for (int j = i; j < dim; j++) {
            opCounter++;
            if (data[j] > toFind) {
                return -1;
            }
            opCounter++;
            if (data[j] == toFind) {
                return j;
            }
        }
    }
    return -1;
}

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
    int dataQuickSort[DATA_SIZE];
    for (int i = 0; i < DATA_SIZE; i++) {
        dataQuickSort[i] = data[i];
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
    int quickSortCost = 0;
    quickSort(quickSortCost, dataQuickSort, 0, DATA_SIZE - 1);
    cout << "Ordino con quickSort: " << arrayToString(dataQuickSort, DATA_SIZE) << endl;
    cout << "L'algoritmo è costato: " << quickSortCost << endl;

    // TODO: implementare un algoritmo di ricerca.
    cout << "Cerco il valore -30: ";
    int counter = 0;
    cout << trovaInArray(dataBubbleSort, DATA_SIZE, -30, counter) << endl;
    cout << "Costo operazione: " << counter << endl;

    return 0;
}
