#include<stdio.h>

int main(){
    float radius;
    printf("Radius of the circle:");
    scanf("%f", &radius);
    printf("Area of the circle:");
    printf("%f", 3.14 * radius * radius);
    return 0;
}