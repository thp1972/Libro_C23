#include <stdio.h>
#include <stdlib.h>

#include "stack.h"

#define MSG "Errore in "

#define public
#define private static

// dichiarazione della struttura di tipo struct stack
struct stack
{
    int size;
    int top;
    int *elems;
};

// definizione delle funzionalità "private" dello stack
private void message(const char *f, const char *m)
{
    printf("%s [%s] :: %s ::\n", MSG, f, m);
    exit(EXIT_FAILURE);
}

private bool isEmpty(Stack s)
{
    return s->top == 0;
}

private bool isFull(Stack s)
{
    return s->top == s->size;
}

// definizione delle funzionalità "pubbliche" dello stack
public Stack newStack(int sz)
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

public void deleteStack(Stack s)
{
    free(s->elems);
    free(s);
}

public void push(Stack s, int value)
{
    if (isFull(s))
    {
        deleteStack(s);
        message(__func__, "... lo stack e' pieno ...");
    }
    s->elems[s->top++] = value;
}

public int pop(Stack s)
{
    if (isEmpty(s))
    {
        deleteStack(s);
        message(__func__, "... lo stack e' vuoto ...");
    }
    return s->elems[--s->top];
}

public int size(Stack s)
{
    return s->size;
}
