#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int occ(int nbr, int t[], int v) {
    for(int i=0; i<nbr; i++) {
        if(v==t[i]) {
            return i;
        }
    }
    return -1;
}

int *occ_ptr (int nbr, int t[], int v) {
    int val = occ(nbr, t, v);
    if (val!= -1) return &t[val];
    return NULL;
}

int main() {
    int tab[] = {1, 2, 3, 4, 5};
    int size = sizeof(tab) / sizeof(tab[0]);
    printf("position: %d\n", occ(size, tab, 9));
    printf("position: %p; valeur dans cette addresse: %d\n", occ_ptr(size, tab, 1), *occ_ptr(size, tab, 1));
    return EXIT_SUCCESS;
}