//print numbers from 1 to 10 using both for loop and while loop
#include <stdio.h>

// function to add two numbers
int add(int a, int b) {
    return a + b;
}

int main(){
    int i, num1, num2;
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

    printf("Enter two numbers to find their sum\n");

    scanf("%d %d", &num1, &num2);
    int sum = add(num1, num2);

    printf("The sum is: %d\n", sum);

    return 0;

}