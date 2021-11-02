#include "stdio.h"

int main() {
    char str[] = "Hello World!";
//    printf("%s\n",str);
    char c = 'l';
    for (int i = 0; str[i+1]; ++i) {
        if(str[i]==c) {
            int j;
            for (j = i; str[j+1]; ++j) {
                str[j] = str[j+1];
            }
            str[j] = '\0';
            i--;
        }
    }
    printf("%s",str);
    return 0;
}