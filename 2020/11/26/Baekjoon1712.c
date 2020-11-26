/*
    Baekjoon 풀이 with Clang
    1712번 문제, "손익분기점"
*/

#include <stdio.h>

int main(){
    int A, B, C = 0;
    scanf("%d %d %d", &A, &B, &C);

    printf("%d", (B >= C) ? -1 : (A/(C - B) + 1));
}