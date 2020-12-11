/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 강의
    12월 11일(금), "함수 - 1월 1일부터 오늘 날짜까지의 차이 구하기"
*/

#include <stdio.h>
#include <time.h>

/*
    규칙 :
      31일(1월, 3월, 5월, 7월, 8월, 10월, 12월)
      30일(4월, 6월, 9월, 11월)
      29일(2월)
*/

//달별 날짜 구하기
int getMonthDay(int Month){
    if(Month > 0 && Month < 13){ //유효 범위면
        if(Month == 2){ //가장 적은 수의 달부터 if문으로 처리해야 편함
            return 28;
        }else if(Month % 2 == 0){ //30일이라면(2의 배수)
            return 30;
        }else{ //나머지 달(31일)이라면 -> 홀수 달
            return 31;
        }
    }else{return 0;}
}

//1월 1일부터 오늘까지 날짜
int getDays(int TodayMonth, int TodayDay){
    int Days = 0;
    for(int i=1;i < TodayMonth + 1;i++){
        Days += getMonthDay(i);
    }
    Days += TodayDay; //날 더하기
    return Days;
}

int main(void){
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    printf("%d days passed from Jan 1", getDays(tm.tm_mon, tm.tm_mday));
    return 0;
}