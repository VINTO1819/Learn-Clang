/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 강의
    12월 01일(화), "자료형 1 - 기초"
*/

#include <stdio.h>

#define MONTHS 12 //컴파일러를 이용한 상수

int main(void){
    /*
        자료형의 분류
        Primitive(기본) : 
          * int
          * char
          * float
          * double
          * void
          * ...
        
        Derived(확장) :
          * Array
          * Pointer
          * Function
        
        User Defined(사용자 정의) :
          * enum
          * Structure
          * Union

    */

    //실수형 자료
    double monthSalary = 1000.5;
    printf("%.2f$ per year", monthSalary * MONTHS);
    
    return 0;
}