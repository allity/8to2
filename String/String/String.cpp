﻿#include <iostream>
using namespace std;

// 오늘의 주제 : 문자와 문자열
// char도 그냥 정수지만 '문자' 의미를 나타내기 위해 사용

// char : 알파벳 / 숫자 문자를 나타낸다.
// wchar_t : 유니코드 문자를 나타낸다.

// ASCII (American Standard Code for Information Interchange)

// '문자'의 의미로 작은 따옴표 ''사용
char ch = 'a';
char ch2 = '1';
char ch3 = 'a' + 1;

// 국제화 시대에는 영어만으로 서비스 할 수 없음
// 전 세계 모든 문자에 대해 유일 코드를 부여한 것이 유니코드 (unicode)
// 참고) 유니코드에서 가장 많은 번호를 차지하는게 한국어/중국어~ (뚥쿩웱 ...)

// 유니코드는 표기 방식이 여러가지가 있는데 대표적으로 UTF-8, UTF-16
// UTF-8
// - 알파벳, 숫자 1바이트 (ASCII 동일한 번호)
// - 유럽 지역의 문자는 2바이트
// - 한글, 한자 등 3바이트
// UTF-16
// - 알파벳, 숫자, 한글, 한자 등 거의 대부분 문자 2바이트
// - 매~~우 예외적인 고대 문자만 4바이트 (사실상 무시해도 됨)

// 유니코드 저장 타입 2바이트 (UTF-16)
wchar_t wch = 0xc548; //L'안';

// Escape Sequence
// 표기하기 애매한 애들은 표현
// \0 = 아스키코드 0
// \t = 아스키코드 9 = Tab
// \n = 아스키코드 10 = LinFeed
// \r = 아스키코드 13 = CarriageReturn

// 문자열
// 문자들이 열을 지어서 모여 있는 것 (문자 배열?)
// 정수 (1~8 바이트) 고정 길이로
// 끝은 NULL(0)

char str[] = { 'h', 'e',' l', 'l', 'o', '\0' };
char str2[] = "Hello World";
wchar_t str3[] = L"Hello World";

int main()
{
    cout << str2 << endl;
}

