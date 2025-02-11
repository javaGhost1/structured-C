//pointers store memory addresses
#include <stdio.h>

int main(){
    int num = 10;
    int *ptr = &num; //pointer storing the address of a number

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);
    printf("Value using pointer %d\n", *ptr); //Dereferencing

    return 0;
}