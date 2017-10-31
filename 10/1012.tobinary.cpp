#include <iostream>
#include <cstdio>
using namespace std;

int decimal[4];
char binary[4][9];

bool to_binary();

int main()
{
    while (scanf("%d.%d.%d.%d", &decimal[0], &decimal[1], &decimal[2], &decimal[3]) == 4)
    {
        scanf("%8s.%8s.%8s.%8s", binary[0], binary[1], binary[2], binary[3]);
        if (to_binary()) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}

bool to_binary()
{
    for (int i = 0; i < 4; i++)
    {
        if (decimal[i] == 0) {
            for (int j = 7; j >= 0; j--) {
                if (binary[i][j] != '0') return false;
            }
            continue;
        }
        for (int j = 7; j >= 0; j--)
        {
            if (decimal[i] % 2 != (binary[i][j] - '0')) break;
            decimal[i] /= 2;
        }
    }
    if (!decimal[0] && !decimal[1] && !decimal[2] && !decimal[3]) return true;
    else return false;
}
