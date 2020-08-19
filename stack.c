#include <stdlib.h>
#include "stack.h"

void init(struct stack *s) {
    s->arr = malloc(sizeof(int));
    s->cur = 0;
    s->cap = 1;
}

void push(struct stack *s, int val) {
    if (s->cur == s->cap) {
        s->arr = realloc(sizeof(int) * s->cap * 2);
        s->cap *= 2;
    }

    s->arr[s->cur++] = val;
}
