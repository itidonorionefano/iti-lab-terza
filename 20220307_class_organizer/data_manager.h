#ifndef DATA_MANAGER_H_INCLUDED
#define DATA_MANAGER_H_INCLUDED

using namespace std;

struct date {
    int year;
    int month;
    int day;
};

struct user {
    string name;
    string surname;
    date birthDay;
};

struct dataSet {
    user utente;
    bool check = 0;
};

void insertDate(date birthDay);

#endif // DATA_MANAGER_H_INCLUDED
