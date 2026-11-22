#include <stdio.h>

struct Person {
    char name[21];
    int height;
};

int main(void) {
    struct Person people[5];
    int min_idx = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%20s %d", people[i].name, &people[i].height);
        if (people[i].height < people[min_idx].height) {
            min_idx = i;
        }
    }

    printf("%s %d\n", people[min_idx].name, people[min_idx].height);

    return 0;
}