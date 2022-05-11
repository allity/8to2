#include <iostream>
using namespace std;

// 오늘의 주제 : 데이터 연산
// 데이터를 가공하는 방법에 대해서 알아봅시다.

// a[1]
// a라는 이름의 바구니를 할당하고 안에 1을 넣는다.
int a = 1;

// b[2]
// b라는 이름의 바구니를 할당하고 안에 2를 넣는다.
int b = 2;

bool isSame;
bool isDifferent;
bool isGreater;
bool isSmaller;

bool test;

int hp = 100;
bool isInvincible = true;

unsigned char flag; // 부호를 없애야 >> 를 하더라도 부호비트가 딸려오지 않음.

// 한번 정해지면 절대 바뀌지 않을 값들
// constant 의 약자인 const를 붙임 (변수를 상수화)
// const를 붙였으면 초기값을 반드시 지정


// 컴파일러 (VS) 마음
const int AIR = 0;
const int STUN = 1;
const int POLYMORPH = 2;
const int INVINCLBLE = 3;

// [데이터 영역]
// .data (초기값 있는 경우)
int a = 2;

// .bss (초기값 없는 경우)
int b;

// .rodata (읽기 전용 데이터)
const char* msg = "Hello World";

int main()
{
    // [스택 영역] (esp, ebp 영역에 스택 정보 저장)
    int c = 3;

    // const 상수 선언 하면 스택영역에 들어감

#pragma region 산술연산
    // 산술 연산자
    // 대입연산
    a = b;
    
    
    // 사칙연산
    a = b + 3; // add
    a = b - 3; // sub
    a = b * 3; // mul
    a = b / 3; // div(몫)
    a = b % 3; // div(나머지)

    a += 3;
    a -= 3;
    a *= 3;
    a /= 3;
    a %= 3;

    // 증감 연산자
    a = a + 1; // add eax, 1-> inc eax
    a++;
    ++a;
    a--;
    --a;

    b = a++; // b = a -> a + 1
    b = --a; // a - 1 -> b = a



#pragma endregion 

#pragma region 비교연산
    
    isSame = (a == b);

    isDifferent = (a != b);

    isGreater = (a > b);

    isSmaller = (a < b);

#pragma endregion 

#pragma region 논리연산

    test = !isSame;

    // && and

    test = (hp <= 0 && isInvincible == false); // 죽음

    // || or

    test = (hp > 0 || isInvincible == true); // 생존

#pragma endregion

#pragma region 비트연산

    // ~bitwise not
    
    // & bitwise and

    // | bitwise or

    // ^ bitwise xor

    // << bit lefr shift
    // 왼쪽의 n개의 비트는 버림, 오른쪽의 n개의 비트는 0
    // *2

    // >> bit right shift
    // 오른쪽의 넘치는 n개는 버림, 왼쪽 생성되는 n개의 비트는 최상위비트

    // 실습
    // 0b0000 [무적][변이][스턴][공중부양]

    // 무적 상태로 만든다.
    flag = (1 << 3);

    // 변이 상태를 추가한다.
    flag = (1 << 2);

    // 무적인지 확인하고 싶다.
    // bitmask
    bool inv = ((flag & (1 << 3)) != 0);

    // 무적이거나 스턴 상태인지
    bool mask = (1 << 3) | (1 << 2);
    bool stunOrInv = ((flag | 0b1010) != 0);

#pragma endregion


}
