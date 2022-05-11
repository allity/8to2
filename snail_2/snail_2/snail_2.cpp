#include <iostream>
#include <iomanip>
using namespace std;

const int MAX = 100;
int board[MAX][MAX] = {};
int N;

void PrintBoard()
{
    for (int y = 0; y < N; y++)
    {
        for (int x = 0; x < N; x++)
        {
            cout << setfill('0') << setw(2) << board[y][x] << " ";
        }
        cout << endl;
    }
}

enum Dir
{
    RIGHT = 0,
    DOWN = 1,
    LEFT = 2,
    UP = 3,
};

bool CanGo(int y, int x)
{
    if (x >= N || x < 0)
        return false;
    if (y >= N || y < 0)
        return false;
    if (board[y][x] != 0)
        return false;
    return true;
}

void SetBoard()
{
    int count = 1;
    int x = 0;
    int y = 0;

    int dir = RIGHT;
    int dy[] = { 0, 1, 0, -1 };
    int dx[] = { 1, 0, -1, 0 };
    
    while (true)
    {
        board[y][x] = count;

        if (count == N * N)
            break;

        int nextY = y + dy[dir];
        int nextX = x + dx[dir];

        if (CanGo(nextY, nextX))
        {
            x = nextX;
            y = nextY;
            count++;
        }
        else
            dir = (dir + 1) % 4;
    }
}

int main()
{
    cin >> N;

    SetBoard();

    PrintBoard();

    return 0;
}