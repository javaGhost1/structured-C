#include <stdio.h>

#define MAX_CLASSES 8

struct Class
{
    /* class title, code, time, venue, lecture */
    char title[50];
    char code[8];
    char time[6];
    char venue[20];
    char lecturerName[50];
};

void main()
{
    // Get class details
    struct Class class[MAX_CLASSES];

    //Get class details
    for (int i=0; i<=MAX_CLASSES; i++){
        printf("Unit Title: ");
        scanf("%[^\n]", class[i].title);
        // unit code
        printf("Unit Code: ");
        scanf("%s", class[i].code);
        // time
        printf("Time: ");
        scanf("%s", class[i].time);
        // venue
        printf("Venue: ");
        scanf("%s", class[i].venue);
        // lecturer
        printf("Lecturer Name: ");
        scanf("%s", class[i].lecturerName);
    }
}