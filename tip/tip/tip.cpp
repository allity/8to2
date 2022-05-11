#include <iostream>
using namespace std;

// 오늘의 주제 : 유의 사항

// 1) 변수의 유효 범위

// 전역 변수
// int hp = 10;

// 스택
// { } 중괄호의 범위가 생존 범위
// 같은 이름 두번 사용할 때 문제


// 2) 연산 우선순위
// 그냥 괄호 치면된다;

// 3) 타입 변환

// 4) 사칙 연산 관련

int main()
{
    int hp = 77777;


    short hp2 = (short)hp; // 윗쪽 비트 데이터 짤린 상태로 저장
    float hp3 = (float)hp; // 실수로 변환할 때 정밀도 차이가 있기 때문에 데이터 손실
    unsigned int hp4 = (unsigned int)hp; // 비트 단위로 보면 똑같은데, 분석하는 방법이 달라져 다르게 해석함


    // 곱셈
    // - 오버플로우
    // int * int = int
    // 큰 바구니 사용

    // 나눗셈
    // - 0 나누기 조심
    // 실수 관련
    int maxhp = 123;
    float p = hp / (float)maxhp;

}
