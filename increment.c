#include <stdio.h>

void increment(void){
    static unsigned int counter=0; //has to have constant value, can only hold positive numbers
    counter++;
    printf("%d\t", counter);
}

int main(void){
    for (int i=0; i<5; i++){
        increment();
    }
    return 0;
}
