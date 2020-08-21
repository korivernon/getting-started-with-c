#include<stdio.h>

int main(){
    // strings need one more character than you need because of the terminating line character
    char name[31];
    printf("What is your name? ");
    scanf("%s", name);

    printf("Hello %s!\n", name);
    return 0;
}
