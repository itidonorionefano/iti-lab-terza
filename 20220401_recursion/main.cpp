#include <iostream>

using namespace std;

int fattoriale(int a) {
    if (a > 0) {
        return a * fattoriale(a - 1);
    } else {
        return 1;
    }
}

int fibonacci(int n) {
    if (n == 1 || n == 0) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int pow(int base, int exp) {
    if (exp > 1) {
        return base * pow(base, exp - 1);
    } else {
        return base;
    }
}

int main()
{
    cout << "5! = " << fattoriale(5) << endl;
    cout << "Inserisci il numero di fibonacci per la serie: " << endl;
    int n = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cout << " " << fibonacci(i);
        cout << endl;
    }
    cout << "2^8 = " << pow(2, 8) << endl;

    return 0;
}
