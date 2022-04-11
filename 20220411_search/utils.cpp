#include <iostream>

std::string arrayToString(int data[], int dim) {
    std::string text = std::to_string(data[0]);
    for (int i = 1; i < dim; i++) {
        text = text + ", " + std::to_string(data[i]);
    }
    return text;
}

void scambia(int &a, int &b) {
    int tmpInt = a;
    a = b;
    b = tmpInt;
}
