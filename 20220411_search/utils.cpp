#include <iostream>

void printArray(int data[], int dim) {
    for (int i = 0; i < dim; i++) {
        std::cout << data[i];
        if (i < dim - 1) {
            std::cout << ", ";
        }
    }
}

void scambia(int &a, int &b) {
    int tmpInt = a;
    a = b;
    b = tmpInt;
}
