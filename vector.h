#ifndef VECTOR
#define VECTOR

struct vector {
    int *arr;
    int cur;
    int cap;
};

void init(struct vector *v);
void push_back(struct vector *v, int val);
void pop_back(struct vector *v);
int *at(struct vector *v, int pos);
int empty(struct vector *v);

#endif
