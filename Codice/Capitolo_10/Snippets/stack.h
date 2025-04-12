#ifndef STACK_H
#define STACK_H

// Stack è un alias per un puntatore a una struttura di tipo struct stack 
typedef struct stack *Stack;

// costruttore di uno stack
Stack newStack(int);

// distruttore di uno stack
void deleteStack(Stack);

// funzionalità dello stack
void push(Stack, int);
int pop(Stack);
int size(Stack);

#endif /* STACK_H */
