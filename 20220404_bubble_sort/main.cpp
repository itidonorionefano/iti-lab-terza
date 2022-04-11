#include <iostream>

using namespace std;

const int ARRAY_DIM = 10;

int main()
{
    int vals[ARRAY_DIM] = {};
    for (int i = 0; i < ARRAY_DIM; i++) {
        cin >> vals[i];
    }

    bool change;
    do {
        change = false;
        for (int i = 0; i < ARRAY_DIM; i++) {
            if (vals[i] < vals[i + 1]) {
                int tmpInt = vals[i];
                vals[i] = vals[i + 1];
                vals[i + 1] = tmpInt;
                change = true;
            }
        }
    } while (change);

    for (int i = 0; i < ARRAY_DIM; i++) {
        cout << vals[i] << endl;
    }

    return 0;
}
