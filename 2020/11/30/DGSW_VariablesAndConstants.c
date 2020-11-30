/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 강의
    11월 30일(월), "변수와 상수"
*/

#include <stdio.h>

int main(void){
    //변수 선언 -> 수정 가능
    //{type} {변수명} = {값}
    int MyAge = 15;
    printf("I'm %d years old!\n");
    MyAge++;
    printf("Oh, I'm %d years old now.. :(\n");

    //상수 선언 -> 수정 가능
    //{type} {상수명} = {값}
    const float pi = 3.1415926; //We can't change this..
    printf("pi is %f...\n", pi);

    double d = 0;

    //size of memory
    printf("size of int is %d bytes\n", sizeof(MyAge));
    printf("size of float is %d bytes\n", sizeof(pi));
    printf("size of double is %d bytes\n", sizeof(d));

    return 0;
}