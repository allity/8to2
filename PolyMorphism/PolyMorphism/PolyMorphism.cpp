#include <iostream>
using namespace std;

class Player
{
public:
    void Move() { cout << "Move Player !" << endl; }
    // void Move(int a) { cout << "Move Player (int) !" << endl; }
    // 오버로딩
    virtual void VMove() { cout << "Move Player !" << endl; }
    virtual void VDie() { cout << "Die Player !" << endl; }
    // 가상함수 -> 동적 바인딩 -> 실행 시점에 결정

    // 순수 가상 함수 -> 구현은 없고 '인터페이스'만 전달하는 용도로 사용
    // 추상 클래스 : 순수 가상 함수가 한 개 이상 포함될 경우 추상클래스 취급
    // 상속하여 사용할 때 구현 필수
    //virtual void VAttack() = 0;

public:
    int _hp;
};

// 상속 , public -> 자식이 모두 사용 가능, protected -> public을 protected로, private -> 자식도 사용 X
// 오버라이딩

class Knight : public Player
{
public:
    void VMove() { cout << "Move Knight !" << endl; }
    void VDie() { cout << "Die Knight !" << endl; }
    void VAttack() { cout << "Attack Knight !" << endl; }

public:
    int _stamina;
};

class Mage : public Player
{
public:
    void Move() { cout << "Move Mage !" << endl; }

public:
    int _mp;
};

// 실제 객체가 어떤타입인지 어떻게 알고 알아서 가상함수를 호출하는가?
// - 가상 함수 테이블 (vftable)
// 생성자가 vftable 만들어줌

// vftable [] 8바이트(64)
// [VMove] [VDie]

void MovePlayer(Player* player)
{
    player->VMove();
    player->VDie();
}

void MoveKnight(Knight* Knight)
{
    Knight->Move();
}

int main()
{
    Player p;
    // MovePlayer(&p);
    // MoveKnight(&k); -> 빌드 오류 

    Knight k;
    // MoveKnight(&k);
    MovePlayer(&k);
    // -> 정상 작동 but player의 Move 호출됨 -> 정적바인딩 때문 -> 컴파일 시점에 결정


}