#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

#define NULL ((void *)0)

int main(int argc, char *argv[]) {
    int a;
    int *pi;

    a = 5;
    pi = &a; // pi points to a

    printf("Dato inicial:\n");
    printf("NULL Pointer Value: %p\n", pi);
    printf("Pointer Value: %x\n", *pi);

    *pi = 0;

    printf("\nDato sobreescrito:\n");
    printf("NULL Pointer Value: %p\n", pi);
    printf("Pointer Value: %x\n", *pi);
    
    exit(0);
}