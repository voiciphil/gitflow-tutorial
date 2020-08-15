#include <stdio.h>
#include "vector.h"

int main(void) {
    printf("hello, world!\n");

    struct vector v;
    init(&v);
    for (int i = 0; i < 10; i++) push_back(&v, i);
    for (int i = 0; i < 10; i++) printf("%d ", *at(&v, i));
    printf("\n");
    
    return 0;
}