/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 강의
    12월 01일(화), "자료형 2 - 다른 자료형"
*/

#include <stdio.h>

int main(void){

    //char
    char x = 65; //65 == A -> ASCII 코드라서 동일함!
    printf("x = %c\n", x);
    char y = *&x; //포인터를 이용해 x의 주소값을 가져온 다음, 주소값이 가리키는 값을 읽어들여 y로 대입
    printf("y = %c\n", y);
    char z = 'B';
    printf("z = %c\n", z);
    printf("z in integer = %d = ASCII code of \"%c\"\n", z, z);

    //

    return 0;
}