//Arrays store multiple values of the same type sequentially
#include <stdio.h>

int main(){
    int i;
    int numbers[5] = {10, 20, 30, 40, 50};
    printf("Array element are: ");
    for (i=0; i < 5; i++){
        printf("%d ", numbers[i]);
    }

    // reverse the array
    printf("\n Reversed array: ");
    for (i=4; i>=0; i-- ){
        printf("%d ", numbers[i]);

    }
    
    printf("\n");

    return 0;
}