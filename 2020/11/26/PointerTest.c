#include <stdio.h>

int main(){
    int *HerAddress = NULL; //변수명 앞에 *을 붙이면 이것은 포인터 변수(= 즉 일종의 주소 저장소)를 선언하는 것임
    int HerValue = 9503; //정수형 변수 선언(즉, 값 자체를 의미)
    
    //HerValue의 메모리 주소를 HerAddress에 할당, & 연산자는 변수의 메모리 주소를 가져옴
    HerAddress = &HerValue;

    printf("Her address is '%p'\n", HerAddress);
    printf("Her value is '%d'\n", HerValue);

    //HerAddress가 가르키는 변수는 HerValue이니, HerAddress를 통해 HerValue 값을 변경할 수 있음
    //또한 포인터 변수 앞에 *를 붙이면 포인터 변수가 가르키는 변수값에 접근(읽기/수정)할 수 있음
    *HerAddress = *HerAddress + 1;
    printf("Her value changed to '%d'\n", HerValue); //포인터로 인해 변경된 HerValue 값을 출력함

    //결론, 포인터를 "일종의 집주소"로 이해하면 매우 편함

    return 0;
}