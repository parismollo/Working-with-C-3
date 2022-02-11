#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

void print_tab(int t[], int start, int end) {
    for(int i=start; i<=end; i++) {
        printf("%p: %d\n", &t[i], t[i]);
    }
    printf("\n");
}

void print_tab_2(int *pstart, int *pend) {
    int *a = pstart;
    while(a!=pend) {
        printf("%p: %d\n", a, *a);
        a++;
    } 

}

int main() {
    int tab[] = {1, 2, 3, 1, 2, 3, 4, 3};
    print_tab(tab, 2, 4);
    print_tab_2(&tab[0], &tab[3]);
    return EXIT_SUCCESS;
}