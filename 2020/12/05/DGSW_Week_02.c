/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 과제
    12월 05일(토), "주간 과제 - 두 수를 거꾸로 한 것들 중 큰수를 고른 뒤 출력"
*/

#include <stdio.h>
#include <math.h>

//숫자 반전시키기(내 알고리즘)
int invert_1(int num){
    int Result = 0;
    int unit = 1; //단위(1, 10, 100, 1000.. 단위)

    int NumArr[100]; //길이가 100자리인 수까지 반전시킬 수 있음
    int iArr = 0;
    int MaxUnit = 0; //최댓값
    for(unit=1; (num / unit) > 0; unit *= 10){ //단위에다 10을 곱해감(입력받은 수를 단위로 나눈 수가 0 미만일 때까지 계속)
        int unitValue = floor(num / unit);
        int flooredNumber = floor(unitValue / 10) * 10; //끝자리만 버리기
        
        int ProcessedNumber = num - (flooredNumber * unit);
        //Result += (int)floor(ProcessedNumber / unit);
        //printf("%d\n", (int)floor(ProcessedNumber / unit));
        //printf("%d - %d = %d\n", num, flooredNumber * unit, num - (flooredNumber * unit));

        NumArr[iArr] = (int)floor(ProcessedNumber / unit); //각 자릿수 숫자들 넣기
        //Result += (num - flooredNumber); //num의 마지막자리만 가지고오기
        iArr++;
        MaxUnit = unit; //최대 단위
    }

    iArr = 0; //재사용을 위해 0으로 초기화
    int Unit = MaxUnit;
    while(NumArr[iArr] != NULL){ //값이 없을때까지 계속 반복
        Result += Unit * NumArr[iArr]; //자릿수와 함께 곱함
        iArr++;Unit/=10; //단위 줄여나가기
    }

    return Result;
}

//숫자 반전시키기(타인의 알고리즘)
int invert_2(int input){
    int num = input, tmp, Result = 0;
    while(num){ //num이 0이 될때까지 반복
        tmp = num % 10; //10으로 나눈 나머지값
        Result = Result * 10 + tmp;

        num /= 10; //10으로 나누기(자릿수 1씩 줄이기)
    }

    return Result;
}

int main(void){
    /*
        조건 :
          * 수를 거꾸로 읽어들인다.
          * 거꾸로 읽어들인 수 중에서 가장 큰 수를 출력하라.
    */
    
    //printf("%d => %d\n", 123, invert_1(123));
    //printf("%d => %d", 123, invert_2(123));

    int a, b; //숫자 2개 입력받음
    scanf("%d %d", &a, &b);
    int ProcessedA = invert_1(a), ProcessedB = invert_1(b); //각각 값을 반전시키기

    int Maximium = (ProcessedA > ProcessedB) ? ProcessedA : ProcessedB; //삼항연산자를 통해 A가 B보다 크면(true) A를 반환하고 아니면 B를 반환함!
    printf("%d", Maximium);
    return 0;
}