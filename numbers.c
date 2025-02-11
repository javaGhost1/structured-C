//print numbers from 1 to 10 using both for loop and while loop
#include <stdio.h>

int main(){
    int i;
    for (i=1; i<=10; i++){
        printf("%d ", i);
    }
    printf("\n");

    //while loop
    printf("while loop below \n");
    i = 1;
    while(i <= 10){
        printf("%d ", i);

        i++;
    }
    printf("\n");

    return 0;

}