#include "stdio.h"

int main() {
    char arr[26] = {0};
    char ch;
    while ((ch = getchar()) != '.') {
        arr[(int) ch - 'a']++;
    }

    int i, min;
    for (i = 0; i < 26; ++i) {
        if (arr[i] != 0) {
            min = i;
            break;
        }
    }

    for (int j = i; j < 26; ++j) {
        if (arr[j] != 0 && arr[j] < arr[min]) {
            min = j;
        }
    }

    printf("%c %d", min + 'a', arr[min]);
    return 0;
}