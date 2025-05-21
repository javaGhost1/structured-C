#include <stdio.h>

#define MAX_CLASSES 8


struct Class
{
    /* class title, code, time, venue, lecture */
    char title[50];
    char code[8];
    char day[10];
    char time[10];
    char venue[20];
    char lecturerName[50];
};
struct Class class[MAX_CLASSES];
int classCount = 0;
void addUnit()
{
    // Check for added units
    if (classCount >= MAX_CLASSES){
        printf("you have reached maximum number of classes,\n");
        return;
    }

    //Get class details
    printf("Unit Title: ");
    scanf(" %[^\n]", class[classCount].title);
    // unit code
    printf("Unit Code: ");
    scanf("%s", class[classCount].code);
    // day
    printf("Day: ");
    scanf("%s", class[classCount].day);
    // time
    printf("Time: ");
    scanf("%s", class[classCount].time);
    // venue
    printf("Venue: ");
    scanf("%s", class[classCount].venue);
    // lecturer
    printf("Lecturer Name: ");
    scanf(" %[^\n]", class[classCount].lecturerName);
    classCount ++;
}

void viewUnits()
{
    // check if there are classes
    if (classCount == 0){
        printf("No classes added");
        return;
    }

    // loop and display all units
    printf("\n======= Class List =======\n");
    for (int i=0; i<classCount; i++){
        printf("\nClass %d\n", i+1);
        printf("Title      : %s\n", class[i].title);
        printf("Code       : %s\n", class[i].code);
        printf("Schedule   : %s at %s\n", class[i].day, class[i].time);
        printf("Venue      : %s\n", class[i].venue);
        printf("Lecturer     : %s\n", class[i].lecturerName);

    }


}

void editUnit()
{
    printf("Edit Unit details");
}

void deleteUnit()
{
    printf("delete unit details logic");
}

void manageClasses()
{
    // manage classes menu
    int choice;
    // Add units
    do {
        printf("\n===== ClassHabibi =====\n");
        printf("1. Add Unit\n2. View Units\n3. Edit Unit\n4. Delete Unit\n5. Back\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        switch(choice){
            case 1: addUnit(); break;
            case 2: viewUnits(); break;
            case 3: editUnit(); break;
            case 4: deleteUnit(); break;
        }
    } while (choice != 5);
   
   

}

int main()
{
    manageClasses();
    return 0;
}