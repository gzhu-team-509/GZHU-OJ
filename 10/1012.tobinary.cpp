/* UNCOMPLETE */
#include <iostream>
#include <cstdio>
using namespace std;

int dec[4];
char bin[4][8];

bool to_binary();

int main()
{
    while (scanf("%d.%d.%d.%d", &dec[0], &dec[1], &dec[2], &dec[3]) == 4)
    {
        scanf("%8s.%8s.%8s.%8s", bin[0], bin[1], bin[2], bin[3]);
        if (to_binary()) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}

bool to_binary()
{
    for (int i = 0; i <= 4; i++)
    {
        for (int j = 7; j >=0; j++)
        {
            
        }
    }
}
