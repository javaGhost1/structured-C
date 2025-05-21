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
struct Class classes[MAX_CLASSES];
int classCount = 0;

void saveClassesToFile()
{
    FILE *fp = fopen("classes.txt", "w");
    if (fp == NULL){
        printf("Error opening file for writing.\n");
        return;
    }
    for (int i=0; i < classCount; i++){
        fprintf(fp, "%s,%s,%s,%s,%s,%s\n",
            classes[i].title,
            classes[i].code,
            classes[i].day,
            classes[i].time,
            classes[i].venue,
            classes[i].lecturerName);
    }
    fclose(fp);
    printf("Classes saved to file.\n");
}

void loadClassesFromFile() 
{
    FILE *fp = fopen("classes.txt", "r");
    if (fp == NULL) {
        printf("No existing file to load (this is okay if it is your first time)");
        return;
    }

    while (fscanf(fp, " %[^,],%[^,],%[^,],%[^,],%[^,],%[^\n]\n",
                classes[classCount].title,
                classes[classCount].code,
                classes[classCount].day,
                classes[classCount].time,
                classes[classCount].venue,
                classes[classCount].lecturerName) == 6){
            classCount++;
            if (classCount >= MAX_CLASSES) break;
        }
        fclose(fp);
        printf("Loaded %d classes from file.\n", classCount);
}


void addUnit()
{
    // Check for added units
    if (classCount >= MAX_CLASSES){
        printf("you have reached maximum number of classes,\n");
        return;
    }

    //Get class details
    printf("Unit Title: ");
    scanf(" %[^\n]", classes[classCount].title);
    // unit code
    printf("Unit Code: ");
    scanf("%s", classes[classCount].code);
    // day
    printf("Day: ");
    scanf("%s", classes[classCount].day);
    // time
    printf("Time: ");
    scanf("%s", classes[classCount].time);
    // venue
    printf("Venue: ");
    scanf("%s", classes[classCount].venue);
    // lecturer
    printf("Lecturer Name: ");
    scanf(" %[^\n]", classes[classCount].lecturerName);

    printf("Unit added successfully");
    classCount ++;

    //auto save
    saveClassesToFile();
}

void viewUnits()
{
    // check if there are classes
    if (classCount == 0){
        printf("\nNo classes have been added yet\n");
        return;
    }

    // loop and display all units
    printf("\n======= Class List =======\n");
    for (int i=0; i<classCount; i++){
        printf("\nClass %d\n", i+1);
        printf("Title       :   %s\n", classes[i].title);
        printf("Code        :   %s\n", classes[i].code);
        printf("Schedule    :   %s at %s\n", classes[i].day, classes[i].time);
        printf("Venue       :   %s\n", classes[i].venue);
        printf("Lecturer    :   %s\n", classes[i].lecturerName);

    }


}

void editUnit()
{
    if (classCount == 0){
        printf("No classes to edit");
        return;
    }

    int index;
    printf("Enter class number to edit (1-%d)", classCount);
    scanf("%d", &index);

    if (index < 1 || index > classCount){
        printf("Invalid class number\n");
        return;
    }

    index--; // conver to zero based

    printf("\nEditing class: %s (%s)\n", classes[index].title, classes[index].code);

    printf("New Unit Title: ");
    scanf(" %[^\n]", classes[index].title);

    printf("New Unit code: ");
    scanf(" %s", classes[index].code);

    printf("New Day: ");
    scanf("%s", classes[index].day);

    printf("New Time: ");
    scanf("%s", classes[index].time);

    printf("New Venue: ");
    scanf("%s", classes[index].venue);

    printf("New lecturer");
    scanf(" %[^\n]", classes[index].lecturerName);

    printf("Class updated successfully");

    // autosave
    saveClassesToFile();
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
    loadClassesFromFile();
    manageClasses();
    saveClassesToFile();
    return 0;
}