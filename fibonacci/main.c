#include <stdio.h>



int Fibonacci(int n)
{
    if (n == 0){
        return 0; //base value
    }
    else if (n == 1){
        return 1; // base value
    }
    else{
        return Fibonacci(n-1) + Fibonacci(n-2); // recursive function calls
    }
}

int main()
{
    int number;
    printf("\n=====Fibonnacci Sequencer=====\n");
    printf("\nEnter a number to determine it's fibonacci value\n");
    scanf("%d", &number);
    printf("Fibonacci : %d\n",Fibonacci(number));

    return 0;
}

