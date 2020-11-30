/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 강의
    11월 30일(월), "변수와 상수 - 오버플로우"
*/

#include <stdio.h>
#include <limits.h>

int main(void){
    int n = INT_MAX; //정수형 최댓값
    printf("Maximium of int is %d\n", n);
    n++; //최댓값을 넘어서면 오버플로우
    printf("This variable overflowed to %d\n", n); //값이 오버플로우되자, 최댓값에서 최솟값으로 초기화됨

    //이를 통해 우리는 정수형의 범위가 -2147483648~2147483647라는 것을 알 수 있음!

    return 0;
}
