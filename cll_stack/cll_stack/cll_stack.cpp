#include <iostream>
using namespace std;

void Func1();
void Func2(int, int);
void Func3(float);

// 오버로딩 (중복 정의 : 함수 이름의 재사용)
// - 매개변수 갯수가 다르거나
// - 매개변수 타입이 다르거나 (순서가 다른걸 포함)

int Add(int a, int b)
{
    return a + b;
}

float Add(float a, float b)
{
    return a + b;
}

// 기본 인자값 (무조건 변수 끝에 몰아줘야 한다.)
void SetPlayerInfo(int hp, int mp, int attack, int guildId = 0, int a = 0)
{

}

void Func1()
{
    cout << "Func1()" << endl;

    Func2(1, 2);
}

void Func2(int a, int b)
{
    cout << "Func2()" << endl;
    Func3(1.23);
}

void Func3(float c)
{
    cout << "Func3()" << endl;
}

// 스택 오버플로우

int Factorial(int n)
{
    if (n == 1)
        return 1;
    return n * Factorial(n - 1);
}

int main()
{
    std::cout << "Hello World!\n";
    Func1();

    cout << Add(2.1f, 1.5f) << endl;

    SetPlayerInfo(100, 40, 10);

    cout << Factorial(1000000000) << endl;

    return 0;
}
