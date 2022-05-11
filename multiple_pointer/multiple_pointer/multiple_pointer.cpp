#include <iostream>
using namespace std;

void SetMessage(const char* a)
{
    a = "Bye";
}

void SetMessage(const char** a)
{
    *a = "Bye";
}

int main()
{
    const char* msg = "Hello";
    SetMessage(msg);

    const char** msg2 = &msg;
    //SetMessage(msg2);
    SetMessage(&msg);

    cout << msg << endl;
}
