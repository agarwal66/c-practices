#include <stdio.h>
#include <stdlib.h>
int * functionDangling(){
    int a,b, sum;
    a = 120;
    b = 320;
    sum = a + b;
    return &sum;
}
int main(){
    //case 1: de allocation of a memory block
    int *ptr= (int *)malloc(7* sizeof(int));
    ptr[0] = 33;
    ptr[1] = 88;
    ptr[3] = 87;
    free(ptr);
    int *dangptr = functionDangling();
    int * danglingPtr3;{
        int a = 11;
        danglingPtr3 = &a;
    }
    return 0;
}