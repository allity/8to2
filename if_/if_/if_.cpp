#include <iostream>
using namespace std;

// const int 사용하면 메모리 잡을 가능성 있음
// enum 사용하면 메모리를 잡지 않음 1로 치환

enum ENUM_SRP
{
    ENUM_SCISSORS = 1,
    ENUM_ROCK,
    ENUM_PAPER
};

// #이 붙은거 -> 전처리 지시문
// 디버깅 포인트 잡히지도 않음,  전처리 하면 걍 사라짐,  안쓰는것을 권장
// 1) 전처리 2) 컴파일 3) 링크
#define DEFINE_SCISSORS 1
#define DEFINE_TEST cout << "Hello World" << endl;

int main()
{/*

#pragma region if
    int hp = 100;
    int damage = 90;

    hp -= damage;
    bool isDead = (hp <= 0);

    // if - else if - else
    if (isDead)
        cout << "몬스터를 처치했습니다" << endl;
    else if (hp <= 20)
        cout << "몬스터가 도망갔습니다" << endl;
    else
        cout << "몬스터가 반격했습니다" << endl;

    const int ROCK = 0;
    const int PAPER = 1;
    const int SCISSORS = 2;

    int input = ROCK;

    if (input == ROCK)
        cout << "바위를 냈습니다" << endl;
    else if (input == PAPER)
        cout << "보를 냈습니다" << endl;
    else if (input == SCISSORS)
        cout << "가위를 냈습니다" << endl;
    else
        cout << "뭘 낸겁니까?" << endl;

    // switc-case-break
    // 정수 계열만 넣을 수 있다.

    switch (input)
    {
    case ROCK:
        cout << "바위를 냈습니다" << endl;
        break;
    case PAPER:
        cout << "보를 냈습니다" << endl;
        break;
    case SCISSORS:
        cout << "가위를 냈습니다" << endl;
        break;
    default:
        cout << "뭘 낸겁니까?" << endl;
    }

#pragma endregion
*/

/*
#pragma region for

    int count = 0;

    
    while (count < 5)
    {
        cout << "Hello World" << endl;
        count++;
    }
    

    
    do
    {
        cout << "Hello World" << endl;
        count++;
    } while (count < 5);
    

    
    for (int i = 0; i < 5; i++)
    {
        cout << "Hello World" << endl;
    }
    
#pragma endregion
*/
    /*
    int input;
    cin >> input;

    for (int i = 0; i < input; i++)
    {
        for (int j = 0; j < input - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    */

    /*
    for (int i = 1; i < 10; i++)
    {
        for (int j = 2; j < 10; j++)
        {
            cout << j << "*" << i << "=" << j * i << "\t";
        }
        cout << endl;
    }
    */

    /*
    srand(time(0)); //시드 설정

    cout << rand() << endl;
    cout << rand() << endl;
    cout << rand() << endl;
    cout << rand() << endl;
    cout << rand() << endl;
    */

    // 1 2 3
    int value = rand() % 3 + 1;

    int user;
    int com;
    int win = 0;
    int lose = 0;
    float win_rate = 0;

    while (true)
    {
        cout << "가위(1) 바위(2) 보(3) 골라주세요!" << endl;
        cout << "> 현재 승률 : " << (int)(win_rate * 100) << endl;
        cin >> user;
        com = rand() % 3 + 1;

        if (user == 1)
        {
            if (com == 1)
            {
                cout << "가위(USER) vs 가위(COM) 비겼습니다!" << endl;
            }
            else if (com == 2)
            {
                cout << "가위(USER) vs 바위(COM) 졌습니다!" << endl;
                lose++;
            }
            else
            {
                cout << "가위(USER) vs 보(COM) 이겼습니다!" << endl;
                win++;
            }
        }
        else if (user == 2)
        {
            if (com == 1)
            {
                cout << "바위(USER) vs 가위(COM) 이겼습니다!" << endl;
                win++;
            }
            else if (com == 2)
            {
                cout << "바위(USER) vs 바위(COM) 비겼습니다!" << endl;
            }
            else
            {
                cout << "바위(USER) vs 보(COM) 졌습니다!" << endl;
                lose++;
            }
        }
        else if (user == 3)
        {
            if (com == 1)
            {
                cout << "보(USER) vs 가위(COM) 졌습니다!" << endl;
                lose++;
            }
            else if (com == 2)
            {
                cout << "보(USER) vs 바위(COM) 이겼습니다!" << endl;
                win++;
            }
            else
            {
                cout << "보(USER) vs 보(COM) 비겼습니다!" << endl;
            }
        }
        else
        {
            break;
        }
        cout << endl;
        win_rate = (float)win / (win + lose);
    }
    
}
