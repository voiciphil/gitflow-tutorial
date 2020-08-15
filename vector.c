#include <stdlib.h>
#include "vector.h"

void init(struct vector *v) {
    v->arr = malloc(sizeof(int));
    v->cur = 0;
    v->cap = 1;
}
