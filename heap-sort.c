#include <stdio.h>

// Functiion to swap two last elements

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Heapify function to maintain heap property
