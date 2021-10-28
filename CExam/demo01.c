#include "stdio.h"

#define N 9

int find_little_letters(char arr[]);

int find_num(char arr[]);

int main() {
    char arr[N];
    FILE *fpRead = fopen("C:/Users/Administrator/OneDrive - boris2019/桌面/res.txt", "r"); //换成你的文件路径
    if (fpRead == NULL) {
        return 0;
    }
    for (int i = 0; i < N; i++) {
        fscanf(fpRead, "%c", &arr[i]);
    }
    fclose(fpRead);
    int res1, res2;
    res1 = find_little_letters(arr);
    res2 = find_num(arr);
    if (res1 > res2) {
        printf("m>n\n");
    } else if (res1 < res2) {
        printf("m<n\n");
    } else {
        printf("m=n");
    }
    printf("Put in 1 chart:\n");
    char ch;
    scanf("%c", &ch);
    for (int i = 0; i < N; ++i) {
        if (arr[i] == ch) {
            printf("YES");
            return 0;
        }
    }
    printf("No");
    return 0;
}

int find_little_letters(char arr[]) {
    int res = 0;
    for (int i = 0; i < N; ++i) {
        if (arr[i] >= 'a' && arr[i] <= 'z') {
            res++;
        }
    }
    return res;
}

int find_num(char arr[]) {
    int res = 0;
    for (int i = 0; i < N; ++i) {
        if (arr[i] >= '0' && arr[i] <= '9') {
            res++;
        }
    }
    return res;
}