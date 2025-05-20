#include <stdio.h>

struct Student {
    char name[50];
    char regno[20];
    int cat;
    int exam;
    int total;
    int grade;
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
        scanf(" %[^\n]", students[i].name); // Read full name
        //registration number
        printf("Reg No: ");
        scanf(" %s", students[i].regno);
        //cat marks
        printf("CAT Marks: ");
        scanf("%d", &students[i].cat);
        //exam marks
        printf("EXAM Marks: ");
        scanf("%d", &students[i].exam);

        //calculate total marks
        students[i].total = students[i].cat + students[i].exam;
        //Grade the student
        students[i].grade = calculateGrade(students[i].total);
    }
        
        //Display results
        printf("\nS.NO | STUDENT NAME       | REGNO       | CAT | EXAM | TOTAL | GRADE\n");
        printf("-----------------------------------------------------------------------\n");

        for (i=0; i<5; i++) {
            printf("%-5d %-20s %-12s %-4d %-5d %-6d %-5c\n",
            i+1,
        students[i].name,
        students[i].regno,
        students[i].cat,
        students[i].exam,
        students[i].total,
        students[i].grade);
    }
    return 0;
}