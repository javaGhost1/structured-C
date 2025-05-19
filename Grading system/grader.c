#include <stdio.h>

struct Student {
    char name[50];
    char regno[20];
    int cat;
    int exam;
};

//function to calculate grade
char calculateGrade(int total) {
    //grade A = above 70
    if (total >= 70)
        return 'A';
    //grade B = above 60
    else if (total >= 60)
        return 'B';
    //grade A = above 50
    else if (total >= 50)
        return 'C';
    //grade D = above 40
    if (total >= 41)
        return 'D';
    //grade F = below 40
    else
        return 'F';        
}

int main(){
    struct Student students[5];
    int i;

    for (i=0; i < 5; i++) {
        printf("\nEnter the details for Student %d:\n", i+1);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name);
    }
}