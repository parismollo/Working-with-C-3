#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int nbr_occ(int nbr, int t[], int v) {
    int counter = 0;
    for(int i=0; i<nbr; i++) {
        if(v==t[i]) counter++;
    }
    return counter;
}
void nbr_occ_op(int nbr, int t[], int v, int *pvn) {
    *pvn = nbr_occ(nbr, t, v);
}

void min_max_op(int nbr, int t[], int *pmin, int *pmax) {
    int min = t[0];
    int max = t[0];
    for(int i=0; i<nbr; i++) {
        if(t[i]>max) {
            max = t[i];
        }else if(t[i]<min) {
            min = t[i];
        }
    }
    *pmin = min;
    *pmax = max;

    printf("Min: %d - ", min);
    printf("Min add valeur: %d\n", *pmin);

    printf("Max: %d - ", max);
    printf("Max add valeur: %d\n", *pmax);
    
}

int main() {
    
    int tab[] = {1, 2, 3, 1, 2, 3, 4, 3};
    int size_tab = sizeof(tab) / sizeof(tab[0]);
    int val = 1;
    printf("nombre occurences de %d: %d\n", val, nbr_occ(size_tab, tab, val));
    
    int min = 0;
    int max = 0;
    min_max_op(size_tab, tab, &min, &max);
    
    return EXIT_SUCCESS;
}