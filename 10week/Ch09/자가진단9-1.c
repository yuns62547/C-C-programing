#include <stdio.h>

int main() {
    int count[26] = {0};
    char val;

    while (1) {
        scanf(" %c", &val);
        if (val < 'A' || val > 'Z') {
            break;
        }
        count[val - 'A']++;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] > 0) {
            printf("%c : %d\n", i + 'A', count[i]);
        }
    }

    return 0;
}