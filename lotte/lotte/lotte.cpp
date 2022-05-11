#include <iostream>
using namespace std;

void Swap(int& a, int& b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

void Sort(int numbers[], int n)
{
    
    for (int i = 0; i < n; i++)
    {
        int min = i;
        for (int j = i+1; j < n; j++)
        {
            if (numbers[j] < numbers[min])
            {
                min = j;
            }
        }
        if (i != min)
            Swap(numbers[min], numbers[i]);
    }
}

void ChooseLotto(int numbers[])
{
    srand((unsigned)time(0));

    for (int i = 0; i < 6; i++)
    {
        int n = (rand() % 45) + 1;
        int j = 0;
        while (true)
        {
            if (j == i)
                break;
            if (numbers[j] == n)
            {
                n = rand() % 45;
                j = 0;
            }
            else
                j++;
        }
        numbers[i] = n;
    }
}

int main()
{
    // 1) Swap 함수 만들기
    int a = 1;
    int b = 2;
    Swap(a, b);

    cout << a << " " << b << endl;

    // 2) 정렬 함수 만들기 ( 오름차순 )
    int numbers[6] = { 0, };
    
    // 3) 로또 번호 생성기
    ChooseLotto(numbers);

    Sort(numbers, 6);

    for (int i = 0; i < 6; i++)
    {
        cout << numbers[i] << " " << endl;
    }

    return 0;
}
