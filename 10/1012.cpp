#include <iostream>
#include <cstdio>
using namespace std;

int a, b, c, d;
int e, f, g, h;
char c1[9], c2[9], c3[9], c4[9];

int to_decimal(char *);

int main()
{
    while (scanf("%d.%d.%d.%d", &a, &b, &c, &d) != EOF)
    {
        scanf("%8s.%8s.%8s.%8s", c1, c2, c3, c4);   // 注意指定宽度
        e = to_decimal(c1);
        f = to_decimal(c2);
        g = to_decimal(c3);
        h = to_decimal(c4);
        if (a == e && b == f && c == g && d == h) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
}

int to_decimal(char * c)
{
    int n = 0;
    for (int i = 0; i < 9; i++)
    {   
        n += (c[i] - '0') << (7 - i); 
    }
    return n;
}
