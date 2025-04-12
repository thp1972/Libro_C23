#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char b = 2;
    int i;
    short s = 111;

    // CORRETTO: b e s sono stati convertiti in int e il risultato dell’operazione
    // di moltiplicazione può essere assegnato ad i che è di tipo int 
    i = b * s;

    // ATTENZIONE: anche se b è di tipo char e il valore è nel suo range,  
    // gli operandi b e s sono stati convertiti direttamente in int  
    // il compilatore infatti ci avvisa di una possibile perdita di valore
    // nell’assegnamento del risultato dell'operazione di addizione
    // alla variabile b di tipo char
    b = b + s; // warning: conversion to 'char' from 'int' may alter its value [-Wconversion]

    _BitInt(10) nBit10 = 123;
    unsigned _BitInt(4) nBit04 = 12;

    // le variabili nBit10 e nBit04 non saranno promosse automaticamente a int
    // in questo caso nBit10 è di tipo _BitInt(10) (con segno)
    // mentre nBit04 è di tipo unsigned _BitInt(4) (senza segno)
    // poiché il tipo con segno ha un ranking maggiore rispetto al tipo senza segno
    // nBit04 sarà convertito nel tipo _BitInt(10) come tipo comune
    // CORRETTO: nBit04 è stato convertito in _BitInt(10) e il risultato
    // dell’operazione di somma con nBit10 può essere assegnato a _nBitResult
    // che è di tipo _BitInt(10)
    _BitInt(10) _nBitResult = nBit10 + nBit04;
	
    char c = 11;
    _BitInt(2) nBit02 = 1;
    _BitInt(33) nBit33 = 1001;

    // CORRETTO: c è promossa in int quindi nBit02 verrà convertita in int
    // perché di ranking inferiore
    // il risultato della moltiplicazione sarà di tipo int e dunque
    // assegnabile alla variabile iRes di tipo int
    int iRes = nBit02 * c;

    // CORRETTO: c è promossa in int, posto però un tipo int che ha al massimo
    // una dimensione di 32 bit ed ha quindi un ranking inferiore rispetto a nBit33
    // che è di tipo _BitInt(33), avremo che c sarà infine convertita in _BitInt(33)
    // il risultato della moltiplicazione sarà quindi di tipo BitInt(33)
    // e dunque assegnabile alla variabile oRes di tipo _BitInt(33)
    _BitInt(33) oRes = nBit33 * c;

    return (EXIT_SUCCESS);
}
