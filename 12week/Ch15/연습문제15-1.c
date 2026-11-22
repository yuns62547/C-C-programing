#include <stdio.h>

int main(void) {
    char name[100];
    int age;

    scanf("%99s %d", name, &age);
    printf("Your name is %s and you are %d years old.\n", name, age);

    return 0;
}