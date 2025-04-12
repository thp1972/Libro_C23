#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

#define MSG "Errore in "

// dichiarazione della struttura di tipo struct stack
struct stack
{
    int size;
    int top;
    int *elems;
};

// definizione delle funzionalità "private" dello stack
static void message(const char *f, const char *m)
{
    printf("%s [%s] :: %s ::\n", MSG, f, m);
    exit(EXIT_FAILURE);
}

static bool isEmpty(Stack s)
{
    return s->top == 0;
}

static bool isFull(Stack s)
{
    return s->top == s->size;
}

// definizione delle funzionalità "pubbliche" dello stack
Stack newStack(int sz)
{
    Stack s = malloc(sizeof (struct stack));
    if (s == nullptr)
        message(__func__, "... creazione fallita ...");

    s->elems = malloc(sizeof (int) * (size_t) sz);
    if (s->elems == nullptr)
    {
        message(__func__, "... creazione fallita ...");
        free(s);
    }

    s->size = sz;
    s->top = 0;
    return s;
}

void deleteStack(Stack s)
{
    free(s->elems);
    free(s);
}

void push(Stack s, int value)
{
    if (isFull(s))
    {
        deleteStack(s);
        message(__func__, "... lo stack e' pieno ...");
    }
    s->elems[s->top++] = value;
}

int pop(Stack s)
{
    if (isEmpty(s))
    {
        deleteStack(s);
        message(__func__, "... lo stack e' vuoto ...");
    }
    return s->elems[--s->top];
}

int size(Stack s)
{
    return s->size;
}
