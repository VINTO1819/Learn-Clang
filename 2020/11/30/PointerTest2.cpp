/*
    개인 공부 with C++
    포인터 공부 2(난이도 중하) - 문자열 응용
*/

#include <iostream>
using namespace std;

int main(void){
    char* String1 = "Hello"; //포인터를 이용한 문자열 -> "Hello\0"의 주소를 가리킴(이 중에서 첫번째 char인 "H"의 주소만을 가리키며, 출력 함수에서 읽어들일 때에는 "\0"까지 만 읽어들이는 방식)
    char String2[] = "Hello"; //배열을 이용한 문자열 -> ["H", "e", "l", "l", "o", "\0"]

    //둘다 printf나 stream으로 출력 가능
    cout << "String1 is '" << String1 << "'" << endl;
    cout << "String2 is '" << String2 << "'" << endl;


    //주소를 얻는 방법이 다름
    cout << "Address of String1 is '" << String1 << "'" << endl; //String1 자체가 첫번째 char("H")을 가리킴(나머지는 \n이 나올 때까지 계속 읽어들임)
    //printf("%p", String1);을 실행하면 "Hello" 중에서 맨 앞글자의 주소만 가져오게 됨
    cout << "Address of String2 is '" << &String2 << "'" << endl; //String2(= 배열)의 주소를 가리킴


    //값을 변경하는 방법도 다름
    String1 = "Beautiful Day";
    //String2 = "Beautiful Day"; -> 배열로 만든 문자열은 이런 형식으로 변경할 수 없음!
    cout << "Changed String1 is '" << String1 << "'" << endl;
    cout << "Changed String2 is '" << String2 << "'" << endl;

    cout << (String1 == "Beautiful Day"); // -> true(1)이 나오게 됨

    /*
        포인터 문자열 : 내용 변경(ex. String[0] = "N")이 X, 가리키는 위치 변경(즉, 값을 새롭게 대입) O
          * char* String1 = "I love you"를 선언하면 String1은 "I love you"라는 문자열을 가리키게 됨
          * 이후 String1 = "I hate you"를 사용하게 되면 "I love you"가 바뀌는 것이 아니라, String1의 값이 "I hate you"라는 문자열의 주소가 됨
          * 첫번째 char의 주소만을 가리키며, 출력 함수에서 읽어들일 때에는 "\0"이 나올 때까지 계속 읽어들이는 방식임(즉 char* 변수명 = "He\0llo"으로 선언하고 출력하면 "He"가 나옴!)
          * 아무튼 char* 타입의 변수를 2개 선언하고 둘 다 가르키는 문자열을 "I love you"로 설정한 다음, 두 변수의 주소값을 확인해 보면 "둘다 가리키는 주소가 동일하게" 됨!
        배열 문자열 : 내용 변경(ex. String[0] = "N")이 O, 가리키는 위치 변경(즉, 값을 새롭게 대입) X
    */

    return 0;
}