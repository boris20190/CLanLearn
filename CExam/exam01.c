#include<stdio.h>
#include<string.h>
// d

int main() {
    char S[9];
    int len, i;
    int m, n;
    char a;
    char crt;
    char b;

    printf("S =");
    gets(S);
    len = strlen(S);

    m = 0;
    n = 0;
    for (i = 0; i < len; i++) {
        if ((S[i] >= 'a') && (S[i] <= 'z'))m++;
        if ((S[i] >= '0') && (S[i] <= '9'))n++;
    }
    if (m > n)printf("\nm>n");
    if (m < n)printf("\nm<n");
    if (m == n)printf("\nm=n");
    FILE *p;
    p = fopen("res.txt", "w");
    for (i = 0; i < len; i++) {
        if ((S[i] >= '0') && (S[i] <= '9')) {
            fprintf(p, "%c", S[i]);
        }
    }
    fclose(p);
    printf("\n c =");
    scanf("%c", &a);
    p = fopen("res.txt", "r");
    while (!feof(p)) {
        fscanf(p, "%c", &crt);
        if (a == b) {
            printf("yes");
            break;
            return 0;
        }
        if (feof(p))printf("no");
    }
    fclose(p);
    return 0;
}