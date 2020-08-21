#include<stdio.h>

int main(){
    int radius;

    printf("Please enter a raidus: ");
    scanf("%i", &radius);

    double area = 3.14159 * (radius * radius);

    printf("Your radius is: %i\n", radius);
    printf("Your area is : %f\n", area);
    return 0;
}
