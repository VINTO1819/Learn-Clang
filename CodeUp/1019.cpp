/*
    CodeUp 기초 100제 with C++
    1019번 문제, "연월일 입력받아 그대로 출력하기"
*/

#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int year, month, day;
    scanf("%d.%d.%d", &year, &month, &day);
    printf("%04d.%02d.%02d", year, month, day);
}