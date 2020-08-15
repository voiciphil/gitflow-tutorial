#include <stdlib.h>
#include "vector.h"

void init(struct vector *v) {
    v->arr = malloc(sizeof(int));
    v->cur = 0;
    v->cap = 1;
}

void push_back(struct vector *v, int val) {
    if (v->cur == v->cap) {
        v->arr = realloc(v->arr, sizeof(int) * v->cap * 2);
    }

    v->cap *= 2;
    v->arr[v->cur++] = val;
}
