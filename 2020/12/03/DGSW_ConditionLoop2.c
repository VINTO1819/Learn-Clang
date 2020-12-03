/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 강의
    12월 03일(목), "반복문과 조건문 - 반복문과 ++증감연산"
*/

#include <stdio.h>

int main(void){

    /*
        반복문의 종류
          * for : condition이 false가 될 때까지 지정한 변수를 ++ 또는 --시킴
          * while : condition이 false가 될 때까지 무한반복(condition을 검사하고 내부 코드 실행, 즉 조건에 따라 내부 코드가 아예 실행되지 않을 수도 있음)
          * do while : condition이 false가 될 때까지 무한 반복(내부 코드를 실행하고 condition 실행, 즉 내부 코드가 무조건 1번씩은 실행됨)
    */

    //Hello World 4번찍기
    int i_printf;
    for(i_printf = 0;i_printf < 4;i_printf++){ //++이 for문에서 바로 사용됨
        printf("Hello, World! with for\n");
    }

    printf("\n");

    //Hello, World 5번 출력
    int i_printf_while = 0;
    while(i_printf_while < 5){ //++을 while문 내부에서 직접 호출해야 함!
        printf("Hello, World! with while (%dth)\n", i_printf_while + 1); //i + 1을 해서 출력하는 이유는 while에서는 0부터 시작하는데 사람은 1부터 읽기 때문이다.
        i_printf_while++;
    }

    do {
        printf("Executed!");
    } while(0); //while(false)지만, do while은 코드를 먼저 실행하고 condition을 체크하므로 do 안에 있는 코드가 1번은 실행됨!

    return 0;
}