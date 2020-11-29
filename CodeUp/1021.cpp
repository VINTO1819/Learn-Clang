/*
    CodeUp 기초 100제 with C++
    1021번 문제, "단어 1개 입력받아 그대로 출력하기"
*/

#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    char word[2000 + 1];
    fgets(word, 2000, stdin);
    cout << word;
}