#include <stdio.h>
#include <stdlib.h>

int* kubur(int value){
    int *p;

    p = malloc(sizeof(int));
    *p = value;
    return p;
}

int gali(int* lokasi){
    
}