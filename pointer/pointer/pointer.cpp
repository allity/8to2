#include <iostream>
using namespace std;


// 포인터
// TYPE* 변수이름;
// [주소를 저장하는 바구니]
// 변수 선언할 때 * 등장했다 -> 포인터 = 주소
// ex) 포인터라는 바구니는 8바이트 고정 크기


void SetHp(int* hp)
{
    *hp = 100;
}

struct Player {
    int hp;
    int damage;
};



int main()
{
    int hp = 1;
    SetHp(&hp);

    int number = 1;
    int* ptr = &number;

    // 추가 문법 : [주소를 저장하는 바구니]가 가리키는 주소로 가서 무엇인가를 해라!
    // *변수이름 = 값;


    // *이 여러번 등장하니 헷갈리지만, 사용 시점에 따라서 구분해서 기억
    // - 변수 선언 (주소를 저장하는 바구니)
    // - 사용할 때 (포탈 타고 순간이동)
    // - 사용할 때 (포탈 타고 순간이동)
    int value1 = *ptr;

    // TYPE은 왜 붙여줄까?
    // * = 포인터의 의미 = 주소를 저장하는 바구니

    // 주소에 가면 뭐가 있는가!!! -> TYPE

    // 타입의 불일치
    __int64* ptr2 = (__int64*)&number;

    *ptr2 = 0xAABBCCDDEEFF;
    // 다른 주소 침범해서 메모리를 덮어씀

    //------------------------------------------------------------------------

    // 1) 주소 연산자 (&)
    // - 해당 변수의 주소를 알려주세요
    // - 더 정확히 말하면 해당 변수 타입에 따라서 TYPE* 반환
    
    int* pointer = &number;
    
    // 2) 산술 연산자 (+ -)
    
    number += 1;

    pointer += 1; // 4증가 -> 다음 바구니로 이동 -> 자료형 크기만큼 이동

    // 3) 간접 연산자 (*)
    
    *pointer = 3; // = number = 3;

    // 4) 간접 멤버 연산자 (->)
    // . 구조체의 특정 멤버를 다룰 때 사용 (어셈블리 언어로 까보면 . 은 사실상 + 연산)
    // * . 두개의 역할을 한번에
    

    Player player;
    player.hp = 100;
    player.damage = 10;

    Player* playerPtr = &player;

    (*playerPtr).hp = 200;
    (*playerPtr).damage = 200;

    playerPtr->hp = 100;
    playerPtr->damage = 10;

    // 위의 두 내용 어셈블리 언어 완전 일치

    return 0;
}