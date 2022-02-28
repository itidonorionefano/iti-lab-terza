#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int N_ALUNNI = 20;
string names[N_ALUNNI] = {};

int main()
{
    // Inizializzo tutti i valori del mio array, potrei farlo usando "{}", ma la riga che ne uscirebbe sarebbe immensa.
    names[0] = "Artibani";
    names[1] = "Baldelli";
    names[2] = "Baldini";
    names[3] = "Cernatu";
    names[4] = "Ciavaglia";
    names[5] = "Corinaldesi";
    names[6] = "Gallo";
    names[7] = "Gasparella";
    names[8] = "Glori";
    names[9] = "Guiducci";
    names[10] = "Lupo";
    names[11] = "Maggiori";
    names[12] = "Muratori";
    names[13] = "Piedimonte";
    names[14] = "Prifti";
    names[15] = "Rinaldi";
    names[16] = "Rondino";
    names[17] = "Serafini";
    names[18] = "Slimani";
    names[19] = "Stefanelli";

    // inizializzo un vettore che contenga tutti i valori estratti
    int extraction[N_ALUNNI] = {};
    srand(time(NULL));
    for (int i = 0; i < N_ALUNNI; i++) {
        // estraggo il numero
        int temp = rand() % 20 + 1;
        // controllo, che il numero non sia già stato estratto
        bool exists = false;
        for (int j = 0; j < N_ALUNNI; j++) {
            if(extraction[j] == temp) {
                exists = true;
            }
        }
        // se exists == true
        if (exists) {
            //prossimo ciclo
            i--;
            continue;
        } else {
            extraction[i] = temp;
        }
    }

    // stampo a video tutti i nomi dei valori estratti
    for (int i = 0; i < N_ALUNNI; i++) {
        cout << names[extraction[i] - 1] << endl;
    }


    return 0;
}
