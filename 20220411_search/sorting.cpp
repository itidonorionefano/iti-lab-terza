#include "utils.h"

void compareOperation(int &counter) {
    counter++;
}

void swapOperation(int &counter) {
    compareOperation(counter);
    compareOperation(counter);
}

int exchangeSort(int data[], int dim) {
    int opCounter = 0;

    for(int i = 0; i < dim - 1; i++) {
        for (int j = i + 1; j < dim; j++) {
            compareOperation(opCounter);
            if (data[i] > data[j]) {
                swapOperation(opCounter);
                scambia(data[i], data[j]);
            }
        }
    }

    return opCounter;
}

int bubbleSort(int data[], int dim) {
    int opCounter = 0;

    bool exchange;
    do {
        exchange = false;
        for (int i = 0; i < dim - 1; i++) {
            compareOperation(opCounter);
            if (data[i] > data[i + 1]) {
                swapOperation(opCounter);
                scambia(data[i], data[i + 1]);
                exchange = true;
            }
        }
    } while(exchange);

    return opCounter;
}
