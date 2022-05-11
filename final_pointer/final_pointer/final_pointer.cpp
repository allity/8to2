#include <iostream>
using namespace std;

int* getPointer()
{
    int a;
    return &a;
}

// 참조 혹은 포인터를 리턴값으로 갖는 것은 굉장히 굉장히 위험하다!!

void worngPointer(int* pointer)
{
    int a[100] = {};

    a[99] = 0xaaaaaaaa;

    *pointer = 0x12341234;

    // crash !! a[99] 이후의 주소를 pointer가 건드림 => 스택 영역을 건드리게 되는 것
}

int main()
{
    int arr2[2][2] = { {1,2},{3,4} };

    int(*p)[2] = arr2;

    cout << p[0][0] << endl;

    int* pointer = getPointer();
    
    worngPointer(pointer);

    return 0;
}