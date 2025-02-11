#include <stdio.h>

//perform arithmetic operations
float calculate( float num1, float num2, char op){
    switch(op){
        case '+': return num1 + num2;
        case '-': return num1 - num2;
        case '*': return num1 * num2;
        case '/': return (num2 != 0) ? num1  / num2 : 0;
        default:
            printf("Invalid input");
            return 0;
    }
}

int main(){
    //initialisation
    float num1, num2, result;
    char op;

    //get user input
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Choose the operation ( * , + , - , /): ");
    scanf(" %c", &op);
    printf("Enter second number: ");
    scanf("%f", &num2);

    //perform arithmetics
    result = calculate( num1, num2, op);

    //display results
    printf("Answer: %.2f\n", result);

    return 0;

}