/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 강의
    12월 15일(화), "재귀함수 - 조합"
*/

#include <stdio.h>

int nCr(int n, int r){
    if(r == 0 || r == n){ //r == 0이거나 r == n이면 1
        return 1;
    }
    return nCr(n - 1, r - 1) + nCr(n - 1, r);
}

//메인함수
int main(void){
    int n, r;
    scanf("%d %d", &n, &r);
    printf("%dC%d = %d", n, r, nCr(n, r)); //첫번째 호출

    return 0;
}