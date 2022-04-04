#include <iostream>

using namespace std;

const int SIZE = 10;

bool greaterThan(string a, string b) {
    if (a.size() == 0) {
        return true;
    }
    for (int i = 0; i < min(a.size(), b.size()); i++) {
        if (a[i] > b[i]) {
            return true;
        } else if(a[i] < b[i]) {
            return false;
        }
    }
    if (a.size() > b.size()) {
        return true;
    } else {
        return false;
    }
}

int main()
{
    /*int data[SIZE] = {6, 4, 3, 8, 10, 200, 554, 122, -5, -100};

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (data[i] < data[j]) {
                int tmp = data[i];
                data[i] = data[j];
                data[j] = tmp;
            }
        }
    }

    for (int i = 0; i < SIZE; i++) {
        cout << data[i] << endl;
    }
    */

    struct user {
        string name;
        string surname;
    };

    user users[10] = {};
    users[0].name = "Tommaso";
    users[0].surname = "Bailetti";
    users[1].surname = "Baldini";
    users[2].name = "Giovanni";
    users[2].surname = "Artibani";

    //string names[] = {"Baldini", "Baldelli", "Cernatu", "Artibani"};
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (!greaterThan(users[i].surname, users[j].surname)) {
                user tmpUser = users[i];
                users[i] = users[j];
                users[j] = tmpUser;
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        cout << users[i].surname << " " << users[i].name << endl;
    }

    string one = "aaaab";
    string two = "aaa";
    cout << "La stringa " << one << " è maggiore di " << two << "?: ";
    cout << greaterThan(one, two) << endl;
    one = "aaa";
    two = "aaa";
    cout << "La stringa " << one << " è maggiore di " << two << "?: ";
    cout << greaterThan(one, two) << endl;
    one = "Bailetti";
    two = "bailetti";
    cout << "La stringa " << one << " è maggiore di " << two << "?: ";
    cout << greaterThan(one, two) << endl;

    return 0;
}
