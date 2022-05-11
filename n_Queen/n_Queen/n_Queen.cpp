#include <iostream>
using namespace std;

int n, chess[15], result = 0;

int abs(int x, int y)
{
    return x > y ? x - y : y - x;
}

void n_Queen(int line)
{
    if (line == n)
        result++;
    for (int i = 0; i < n; i++)
    {
        chess[line] = i;
        bool flag = true;
        for (int j = 0; j < line; j++)
        {
            if (i == chess[j] || abs(i - chess[j]) == abs(line - j))
            {
                flag = false;
                break;
            }
        }
        if (flag)
            n_Queen(line + 1);
    }
}

int main()
{
    cin >> n;

    n_Queen(0);

    cout << result << endl;
}