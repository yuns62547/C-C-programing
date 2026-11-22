#include <stdio.h>

struct Person {
    char name[50];
    int height;
    double weight;
};

int main(void) {
    struct Person people[5];

    for (int i = 0; i < 5; i++) {
        scanf("%49s %d %lf", people[i].name, &people[i].height, &people[i].weight);
    }

    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (people[i].height > people[j].height) {
                struct Person temp = people[i];
                people[i] = people[j];
                people[j] = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        printf("%s %d %.1lf\n", people[i].name, people[i].height, people[i].weight);
    }

    return 0;
}