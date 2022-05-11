#include <iostream>
using namespace std;

// 오늘의 주제 : 함수

/*
반환타입 함수이름([인자타입 매개변수])
{
    함수내용

    return ~~~;
}
*/

// 높은 주소 - 매개변수 - 반환 주소 - 지역 변수 - - - - - 스택


void PrintHelloWorld()
{
    cout << "Hello World" << endl;
}

void PrintNumber(int a)
{
    cout << a << endl;
}

int MultiplyBy2(int a)
{
    return a * 2;
}

int MultiplyBy(int a, int b)
{
    return a * b;
}



int main()
{
    PrintHelloWorld();
    PrintNumber(MultiplyBy(4, 3));
}
