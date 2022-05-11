#include <iostream>
using namespace std;

// 값 전달 방식
// 주소 전달 방식
// 참조 전달 방식

// 매개변수의 크기가 겁나게 크다면~! 주소 전달방식이 유리하다!

// 참조 전달@@
// 값 전달 처럼 편리하게 사용하고
// 주소 전달처럼 주소값을 이용해 값을 건드리는
// 값 전달과 주소 전달의 사이 정도

struct StatInfo
{
    int hp;
    int damage;
};

void SetInfo(StatInfo& info)
{
    info.hp = 100;
    info.damage = 10;
}


void PrintInfoByCopy(StatInfo info)
{
    cout << info.hp << endl;
    cout << info.damage << endl;
}

void PrintInfoByPtr(StatInfo* info)
{
    if (info == nullptr)
        return;

    cout << info->hp << endl;
    cout << info->damage << endl;

    // const StatInfo* info
    // 값을 바꾸지 못함
    // info->hp = 100; X

    // StatInfo* const info
    // 주소를 바꾸지 못함
    // info = &globalInfo; X

    // 둘다 못하게 하고싶으면 앞뒤에 const 다붙이기
}

// 참조 전달
void PrintInfoByReference(StatInfo& info)
{
    cout << info.hp << endl;
    cout << info.damage << endl;

    // 참조 전달 방식은 값 전달 방식과 헷갈리기 쉬움
    // 따라서 참조 전달 방식을 사용할 때 
    // 값을 바꾸지 못하게 하기 위해
    // const StatInfo& info 매개변수 사용
}

int main()
{
    
    int number = 1;
    int* pointer = &number;
    *pointer = 2;

    // 로우레벨(어셈블리) 관점에서 실제 작동 방식은 int*와 똑같음
    int& reference = number;
    reference = 3;

    // C++ 관점에서는 number라는 바구니에 또다른 이름을 부여한 것.
    // number라는 바구니에 reference라는 다른 이름을 지어줄게!
    // 앞으로 reference 바구니에다가 뭘 꺼내거나 넣으면
    // 실제 number 바구니에 그 값을 꺼내거나 넣으면 됨

    

    // 실제로 실행해보면 포인터랑 100% 똑같다.

    // 그런데 귀찮게 또 다른 이름을 짓는 이유는?
    // 참조 전달 때문!

    StatInfo info;

    SetInfo(info);

    PrintInfoByCopy(info);
    PrintInfoByPtr(&info);
    PrintInfoByReference(info);

    // 참조 vs 포인터

    // 1) 편의성 관련
    // 참조가 포인터에 비해 편의성이 좋음
    // 포인터는 주소를 넘기니 확실하게 원본을 넘긴다는 힌트를 줄 수 있는 반면
    // 참조는 자연스럽게 모르고 지나칠 수 있음

    // 2) 초기화 여부
    // 포인터 -> 초기화 안해도 선언 가능
    // 참조 -> 선언 시에 초기화 필수

    // 포인터에서 아무것도 가르키지 않고 싶을 때 nullptr
    StatInfo* pointer2 = &info;

    // 참조는 nullptr의 개념이 없음
    StatInfo& reference2 = info;

    // 참조 사용할 때 OUT을 붙이면 수정가능 함을 알 수 있음
    // ChangeInfo(OUT info);
    // #define OUT << 뜻은 없음 의미만 부여

    // 포인터로 사용하던걸 참조로 넘겨주려면?

    PrintInfoByReference(*pointer2);

    // 참조로 사용하던걸 포인터로 넘겨주려면?

    PrintInfoByPtr(&reference2);
}