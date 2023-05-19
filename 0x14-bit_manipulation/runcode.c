#include <stdio.h>

void main()
{
    int i = 98;
    int j = 99;
    int k = 0;

    k = i ^ j; //0001100100010

    printf("k = %d\n", i); //98
    printf("k = %d\n", j); //98
    printf("k = %d\n", k); //98
}
