#include <stdio.h>
#include <string.h>

void reverseName(char name[]){
    int len = strlen(name);
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", name[i]);

    }
    printf("\n");

}

int main(){
    char name[] = "Kabarak";
    reverseName(name);
    return 0;
}