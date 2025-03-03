#include <stdio.h>

float  rectArea(float len, float width){
    float area = len * width;
    printf("Area of rectangle: %f", area);
}

int main(){

    float len, width;
    //find the area of a rectangle
    printf("Enter the length and width respectively: ");
    scanf("%f %f", &len, &width);

    result = rectArea(len, width);

    printf("Area is: %f", result);


}