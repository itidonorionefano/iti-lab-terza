#ifndef SORTING_H_INCLUDED
#define SORTING_H_INCLUDED

/**
 * Effettuo l'ordinamento utilizzando l'exchange sort.
 *
 * @param data l'array da ordinare
 * @param dim la dimensione dell'array
 * @return quanto mi è costato l'algoritmo
 */
int exchangeSort(int data[], int dim);

/**
 * Effettuo l'ordinamento utilizzando il bubble sort.
 *
 * @param data l'array da ordinare
 * @param dim la dimensione dell'array
 * @return quanto mi è costato l'algoritmo
 */
int bubbleSort(int data[], int dim);

/**
* Effettuo l'ordinamento utilizzando il quick sort.
*
* @param opCounter il counter di quante operazioni svolge l'algoritmo
* @param data l'array da ordinare
* @param extremeInferior l'estremo inferiore da dove deve partire l'algoritmo
* @param extremeSuperior l'estremo superiore da dove deve partire l'algoritmo
*/
void quickSort(int &opCounter, int data[], int extremeInferior, int extremeSuperior);

#endif // SORTING_H_INCLUDED
