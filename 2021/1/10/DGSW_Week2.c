/*
    DGSW 2021학년도 입학생 비포스쿨 C언어 과제
    01월 10일(일), "주간 과제 - 구조체 2"
*/

#include <stdio.h>
#include <math.h>

struct point{
    int x; int y;
};

int abs(int a){
    return (a > 0) ? a : -a;
}

int main(void){
    /*
        조건 :
          * 두 점의 x, y좌표를 입력받는다.
          * 두 점 사이의 거리와 기울기를 출력하라
    */

    struct point p1, p2;
    scanf("%d %d", &p1.x, &p1.y);
    scanf("%d %d", &p2.x, &p2.y);
   
    int Xlen = abs(p1.x - p2.x); //x 길이
    int Ylen = abs(p1.y - p2.y); //y 길이

    //피타고라스 정리로 거리 구하기
    float distance = sqrt(Xlen * Xlen + Ylen * Ylen);

    //기울기 구하기
    float gradient = (float)Ylen / (float)Xlen;

    printf("두 점 (%d, %d)와 (%d, %d)\n * 거리 : %lf\n * 기울기 : %lf" , p1.x, p1.y, p2.x, p2.y, distance, gradient);

    return 0;
}