/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 강의
    12월 11일(금), "함수 - 거스름돈 적게 주는 계산기"
*/

#include <stdio.h>

//거스름돈 구조체
typedef struct{
    int FiveHundred;
    int OneHundred;
    int Fifty;
    int Ten;
}Change;

//특정한 금액을 받아 가장 적은 거스름돈 개수를 구하는 프로그램
Change getChangedMoneyAmount(int Money){
    int MoneyTmp = Money; //값 변경을 위해 변수 선언

    //효율을 위해 큰 동전부터 나눔
    int Won_500 = MoneyTmp / 500; //500원으로 나눔
    MoneyTmp = MoneyTmp % 500;

    int Won_100 = MoneyTmp / 100; //100원으로 나눔
    MoneyTmp = MoneyTmp % 100;

    int Won_50 = MoneyTmp / 50; //50원으로 나눔
    MoneyTmp = MoneyTmp % 50;

    int Won_10 = MoneyTmp / 10; //10원으로 나눔
    MoneyTmp = MoneyTmp % 10;

    Change Result;
    Result.FiveHundred = Won_500;
    Result.OneHundred = Won_100;
    Result.Fifty = Won_50;
    Result.Ten = Won_10;

    return Result;
}

int main(void){
    int CurrentMoney;
    scanf("%d", &CurrentMoney);
    Change Result = getChangedMoneyAmount(CurrentMoney);
    printf("%d Won ->\n 500 Won : %d\n 100 Won : %d\n 50 Won : %d\n 10 Won : %d\n", CurrentMoney, 
        Result.FiveHundred,
        Result.OneHundred,
        Result.Fifty,
        Result.Ten
    );
    return 0;
}