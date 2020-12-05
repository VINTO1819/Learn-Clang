/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 과제
    12월 05일(토), "주간 과제 - 조건문 심화"
*/

#include <stdio.h>

int main(void){
    /*
        조건 :
          * 체온(float temp)를 입력받는다.
          * 유효한 온도는 36°C 이상 40°C 이하이며, 이외의 온도가 입력되면 "retry"를 출력시킨다.
          * temp가 37.5°C 이상이면 의심환자로 구별하며, "danger"를 출력시킨다.
          * temp가 38°C 이상이면 "emergency"를 출력시킨다.
          * 이외의 체온은 정상체온으로, "OK"를 출력시킨다.
    */
    
    float temp;
    scanf("%f", &temp);

    if(temp >= 36 && temp <= 40){ //유효범위
        if(temp >= 37.5){ //비정상체온(고온)
            printf("%s", (temp >= 38) ? "emergency" : "danger"); //38도 이상이라면 "emergency", 아니면 "danger" 출력
        }else{
            printf("OK"); //정상체온
        }
    }else{ //비유효범위
        printf("retry");
    }

    return 0;
}