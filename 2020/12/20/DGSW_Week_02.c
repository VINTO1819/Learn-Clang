/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 과제
    12월 20일(일), "주간 과제 - 함수 2"
*/

#include <stdio.h>

/*
    조건 :
      * long long int형 정수 한개를 입력받아 숫자를 거꾸로 뒤집은 수를 출력하시오.
      * 단, 1의 자리의 수가 0인 수는 입력되지 않는다.
*/

// ========================= 이 부분에 들어가야 할 코드를 작성하시오. =========================
//자릿수 가져오는 함수
long long int getLength(long long int n){
    int ResultUnit = 0;
    for(int Unit = 1; n / Unit > 0; Unit *= 10){
        ResultUnit = Unit;
    }
    return ResultUnit;
}

//값 반전 함수
long long int f(long long int n){
    long long int Result = 0;
    for(long long int Unit = 1; n / Unit > 0; Unit *= 10){ //n을 Unit으로 나눈 값이 0이 될 때까지 단위를 10씩 곱하며 반복
        long long int CurrentNumber = (n / Unit);
        long long int NumberWithoutLast = (n / (Unit * 10)) * 10; //마지막 자릿수를 제외한 값
        //printf("%d - %d = %d\n", CurrentNumber, NumberWithoutLast, CurrentNumber - NumberWithoutLast);
        
        Result += (CurrentNumber - NumberWithoutLast) * (getLength(n) / Unit); //자릿수 맞춰 추가
    }
    //printf("\n\n");
    return Result;
}
// ============================================================================================


int main(void){
    long long int n;
    scanf("%lld", &n);
    //printf("Size is %d\n", getLength(n));
    printf("%lld", f(n));
    return 0;
}