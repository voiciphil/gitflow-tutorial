#include <stdio.h>
#include "vector.h"

int main(void) {
    struct vector v;
    init(&v);
    printf("%d\n", empty(&v));
    for (int i = 0; i < 10; i++) push_back(&v, i);
    for (int i = 0; i < 10; i++) printf("%d ", *at(&v, i));
    printf("\n%d\n", empty(&v));

    return 0;
}