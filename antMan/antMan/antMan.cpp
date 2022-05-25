#include <iostream>
using namespace std;

int main()
{
    int box[10][10] = { 0 };

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cin >> box[i][j];
        }
    }

    int i = 1, j = 0;

    while (true)
    {
        if (box[i][j + 1] == 2)
        {
            box[i][j + 1] = 9;
            break;
        }
        else if (box[i][j + 1] == 0)
        {
            box[i][j + 1] = 9;
            j++;
        }
        else
        {
            if (box[i + 1][j] == 2)
            {
                box[i + 1][j] = 9;
                break;
            }
            else if (box[i + 1][j] == 0)
            {
                box[i + 1][j] = 9;
                i++;
            }
            else
            {
                break;
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << box[i][j] << " ";
        }
        cout << endl;
    }
}