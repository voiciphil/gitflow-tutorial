#ifndef STACK
#define STACK

struct stack {
    int *arr;
    int cur;
    int cap;
};

void init(struct stack *s);
void push(struct stack *s, int val);
void pop(struct stack *s);
int top(struct stack *s);
int empty(struct stack *s);

#endif
