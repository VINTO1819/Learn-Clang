/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 강의
    12월 01일(화), "입출력 - scanf"
*/

#include <stdio.h>

int main(void){
    int input;
    printf("Input Integer >");
    scanf("%d", &input);
    printf("Value is %d\n", input);

    int a, b, c;
    printf("Input 3 Integer >");
    scanf("%d %d %d", &a, &b, &c);
    printf("%d * %d * %d = %d\n", a, b, c, a * b * c);

    //문자와 문자열
    char ch = 'A';
    char* String = "Hello, world!";
    char String2[256];
    
    return 0;
}
