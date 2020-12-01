/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 강의
    12월 01일(화), "상수 - define과 const"
*/

#include <stdio.h>

#define Age 15

int main(void){
    /*
        #define으로 생성된 상수와 const의 차이점 :
          * #define으로 선언한 상수는 컴파일 과정에서 상수의 이름이 아닌, 선언했던 값으로 변하게 됨
            * 예를 들어 #define Price 10으로 선언하고 printf("값은 %d", Price);를 적은 코드를 컴파일하게 되면, printf("값은 %d", 10);로 바뀌게 됨!
          * const로 선언한 상수는 코드 범위 안에서만 사용할 수 있음
            * 또한 #define과 다르게 컴파일 과정에서 처리되지 않음
    */

    printf("My age is %d\n", Age); //컴파일 지시문을 이용한 상수

    const int Age2 = 15;
    printf("My age is %d\n", Age2); //const를 이용한 상수
    
    return 0;
}
