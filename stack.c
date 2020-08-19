#include <stdlib.h>
#include "stack.h"

void init(struct stack *s) {
    s->arr = malloc(sizeof(int));
    s->cur = 0;
    s->cap = 1;
}
