/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 강의
    12월 11일(금), "함수 - 기초"
*/

#include <stdio.h>

//30분 더하는 함수(초 단위)
int Plus_30Minutes(int Timestamp){
    return Timestamp + (60 * 30);
}


//30분 빼는 함수(초 단위)
int Minus_30Minutes(int Timestamp){
    return Timestamp - (60 * 30);
}

//시간 출력함수(반환값이 없으므로 void)
void PrintTimeStamp(int Timestamp){
    int TimeSecond = Timestamp;
    int Hour = TimeSecond / (60 * 60);
    TimeSecond = TimeSecond % (60 * 60);
    int Minute = TimeSecond / 60;
    TimeSecond =  TimeSecond % (60);
    printf("%02d:%02d:%02d\n", Hour, Minute, TimeSecond);
}

int GlobalTimestamp = 3600; //전역변수 선언

//메인함수
int main(void){
    PrintTimeStamp(GlobalTimestamp); //기존 시간
    PrintTimeStamp(Plus_30Minutes(GlobalTimestamp)); //+ 30m
    PrintTimeStamp(Minus_30Minutes(GlobalTimestamp)); //- 30m
    
    return 0;
}