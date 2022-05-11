#include <iostream>
using namespace std;

struct StatInfo
{
    int hp = 0xAAAAAAAA;
    int attack = 0xBBBBBBBB;
    int defence = 0xDDDDDDDD;
};


int main()
{
    // 배열의 크기는 상수여야 함 (VC 컴파일러 기준)
    // gcc는 아닌듯?
    const int monsterCount = 10;
    StatInfo monsters[monsterCount];

    // 배열의 이름은 곧 배열의 시작 주소
    // 정확히는 시작 위치를 가리키는 TYPE* 포인터

    StatInfo* monster_0 = monsters;
    monster_0->hp = 100;
    monster_0->attack = 10;
    monster_0->defence = 1;

    StatInfo* monster_1 = monsters + 1;
    monster_1->hp = 200;
    monster_1->attack = 20;
    monster_1->defence = 2;

    //reference
    StatInfo& monster_2 = *(monsters + 2);
    monster_2.hp = 300;
    monster_2.attack = 30;
    monster_2.defence = 3;

    for (int i = 0; i < 10; i++)
    {
        StatInfo& monster = *(monsters + i);
        monster.hp = 100 * (i + 1);
        monster.attack = 10 * (i + 1);
        monster.defence = (i + 1);

        monsters[i].hp = 100;
    }

    // *(monsters + i) = monsters[i]

    // 배열 초기화 문법
    int numbers[5] = {};
    int numbers1[10] = { 1,2,3,4,5, };
    int numbers2[] = { 1,2,3,4,1,1,44,5,5 };
    

    const char* test1 = "Hello World";

    char test2[] = "Hello World";

    return 0;
}