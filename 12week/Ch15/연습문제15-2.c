#include <stdio.h>

struct Person {
    char name[50];
    int age;
};

int main(void) {
    struct Person me = {"Yejun", 12};
    struct Person pal;

    scanf("%49s %d", pal.name, &pal.age);

    printf("Your name: %s, age: %d\n", me.name, me.age);
    printf("Friend's name: %s, age: %d\n", pal.name, pal.age);

    return 0;
}