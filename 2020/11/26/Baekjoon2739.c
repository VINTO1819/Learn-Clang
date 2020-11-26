/*
    Baekjoon 풀이 with Clang
    2739번 문제, "구구단"
*/

#include <stdio.h>

int main(){
    int Number = 0;
    scanf("%d", &Number);
    
    int Index;
    for(Index = 1; Index < 10; Index++){
        printf("%d * %d = %d\n", Number, Index, Number * Index);
    }
}