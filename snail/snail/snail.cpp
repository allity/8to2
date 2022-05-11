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

void SetBoard()
{
    int M = N;
    int count = 1;
    int x = 0;
    int y = 0;
    while (M > 0)
    {
        for (int i = 0; i < M; i++)
        {
            board[y][x] = count;
            count++;
            x++;
        }
        x--;
        y++;
        for (int i = 0; i < M - 1; i++)
        {
            board[y][x] = count;
            count++;
            y++;
        }
        y--;
        x--;
        for (int i = 0; i < M - 1; i++)
        {
            board[y][x] = count;
            count++;
            x--;
        }
        x++;
        y--;
        for (int i = 0; i < M - 2; i++)
        {
            board[y][x] = count;
            count++;
            y--;
        }
        y++;
        x++;
        M -= 2;
    }
    

}

int main()
{
    cin >> N;

    SetBoard();

    PrintBoard();

    return 0;
}