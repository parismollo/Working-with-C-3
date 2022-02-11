#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

void swap(int *p, int *q) {
    int tmp = *p;
    *p = *q;
    *q = tmp;
}

int main() {
    int x, y;
    x = 5;
    y = 6;

    printf("(avant) x: %d, y: %d\n", x, y);
    swap(&x, &y);
    printf("(apres) x: %d, y: %d\n", x, y);

    int tab[] = {1, 1, 2, 3, 5, 8, 13};
    int *a = &tab[0];
    int size = sizeof(tab) / sizeof(tab[0]);
    int *b = &tab[size-1];

    printf("(avant) a: %d, b: %d\n", *a, *b);
    swap(a, b);
    printf("(apres) a: %d, b: %d\n", *a, *b);

}