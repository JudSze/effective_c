#include <stdio.h>

void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
    printf("swap: a = %d, b = %d\n", *a, *b);
}

int main(void){
    int a = 20;
    int b = 10;

    printf("main: a = %d, b = %d\n",a,b);
    swap(&a,&b);
    
    return 0;
}