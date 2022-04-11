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

#endif // SORTING_H_INCLUDED
