/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 강의
    12월 02일(수), "연산자 1 - 심화"
*/

#include <stdio.h>
#include <math.h>


//절댓값 얻어오는 함수
int getAbsolute(int Value){
    return (Value > 0) ? Value : -Value;
}

//최댓값
int getMaximium(int x, int y){
    return (x > y) ? x : y;
}

//최솟값
int getMinimum(int x, int y){
    return (x > y) ? y : x;
}

int main(void){
    int x = 6, y = 5;
    printf("%d%s equals %d\n", x, (x == y) ? "" : " not", y); //x가 y랑 같은가?
    printf("%d is%s larger than %d\n", x, (x > y) ? "" : " not", y); //x가 y보다 큰가?
    printf("%d is%s smaller than %d\n", x, (x < y) ? "" : " not", y); //x가 y보다 작은가?

    int Bool = (x > y) && (x < 40);
    printf("Is x(%d) larger than y(%d) but smaller then 40? : %s\n", x, y, Bool ? "true" : "false");

    int a = -30, b = 10;
    printf("When a = %d, b = %d :\n  |a| = %d And |b| = %d\n  Maximium : %d\n  Minimum : %d\n",
    a, b, getAbsolute(a), getAbsolute(b), getMaximium(a, b), getMinimum(a, b));

    printf("2^2 = %.0f", pow(2.0, 2.0));

    return 0;
}