#include <iostream>
using namespace std;

// 문자열 길이 구하기
int StrLen(const char* str)
{
    int count = 0;

    while (str[count] != '\0')
    {
        count++;
    }

    return count;
}


// 문자열 복사
char* StrCpy(char* dest, char* src)
{
    int i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';

    return dest;
}

// 문자열 이어붙이기
char* StrCat(char* dest, char* src)
{
    /*int len = StrLen(dest);
    int i = 0;
    while (src[i])
    {
        dest[len] = src[i];
        len++; i++;
    }
    dest[len] = '\0';

    return dest;*/

    int len = StrLen(dest);
    dest += len;

    char* ret = dest;
    
    while (*src)
    {
        *dest++ = *src++;
    }
    *dest = '\0';

    return ret;
}

// 문자열 비교
int StrCmp(char* a, char* b)
{
    int i = 0;
    while (a[i] != 0 || b[i] != 0)
    {
        if (a[i] < b[i])
        {
            return -1;
        }
        else if (a[i] > b[i])
        {
            return 1;
        }
        i++;
    }
    return 0;
}

// 문자열 뒤집기
void ReversStr(char* str)
{
    int len = StrLen(str) - 1;
    int i = 0;
    while (i <= len)
    {
        char tmp = str[len];
        str[len] = str[i];
        str[i] = tmp;
        i++;
        len--;
    }
}

// strcpy 사용할 때 버퍼 오버플로우 때문에 컴파일 에러 발생
#pragma warning(disable: 4996)

int main()
{
    const int BUF_SIZE = 100;

    char a[BUF_SIZE] = "Hello";
    char b[BUF_SIZE] = "Hell";

    //int len = StrLen(a);
    //cout << len;

    //StrCpy(b, a);

    //StrCat(a, b);

    //int value = StrCmp(a, b);
    //cout << value << endl;

    ReversStr(a);

    cout << a << endl;

    return 0;
}