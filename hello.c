#include <stdio.h>

int main () {
	char name[50];
	int number;
	
	printf("Hello player \n");
	printf("what's your name? ");
	scanf("%s", name); // get string input

	printf("let's play a Game\n");
	printf("Pick a number between 1 and 9 ? ");
	scanf(" %d", &number); // get integer input
	printf("%s have entered the number Nine: %d\n", name, number);
	
	while (number > 0 || number < 9){
		if (number <= 0) {
			printf("Too low\n");
		} else if (number < 9) {
			printf("Too high\n");
		}else{
			int square;
			square = number*number; //find the square of input
			printf("It's square is %d\n", square);
		}
	}
	return 0;
}
