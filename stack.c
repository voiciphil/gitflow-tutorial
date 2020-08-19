#include <stdlib.h>
#include "stack.h"

void init(struct stack *s) {
    s->arr = malloc(sizeof(int));
    s->cur = 0;
    s->cap = 1;
}

void push(struct stack *s, int val) {
    if (s->cur == s->cap) {
        s->arr = realloc(s->arr, sizeof(int) * s->cap * 2);
        s->cap *= 2;
    }

    s->arr[s->cur++] = val;
}

void pop(struct stack *s) {
    s->cur--;
}

int top(struct stack *s) {
    return s->arr[s->cur - 1];
}

int empty(struct stack *s) {
    return s->cur == 0;
}
