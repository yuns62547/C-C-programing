#include <stdio.h>
#include <string.h>

struct Info {
    char name[101];
    char tel[101];
    char addr[101];
};

int main(void) {
    struct Info people[3];
    int min_idx = 0;

    for (int i = 0; i < 3; i++) {
        scanf("%100s %100s %100s", people[i].name, people[i].tel, people[i].addr);
        if (strcmp(people[i].name, people[min_idx].name) < 0) {
            min_idx = i;
        }
    }

    printf("name : %s\n", people[min_idx].name);
    printf("tel : %s\n", people[min_idx].tel);
    printf("addr : %s\n", people[min_idx].addr);

    return 0;
}