#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>
using namespace std;

int x1, y1, x2, y2, dis_x, dis_y;
int n, s, w, e;
bool x, y;
char str[1001];

int main()
{
    while (cin >> x1 >> y1 >> x2 >> y2)
    {
        scanf("%s", str);
        n = s = w = e = 0;
        x = y = false;
        for (int i = 0; i < strlen(str); i++)
        {
            switch(str[i])
            {
                case 'W': w++; break;
                case 'E': e++; break;
                case 'N': n++; break;
                case 'S': s++; break;
            }
        }
        dis_y = y2 - y1;
        dis_x = x2 - x1;
        if (!dis_x) x = true;
        if (!dis_y) y = true;
        if (dis_x > 0){
            if (dis_x <= e) x = true;
        } 
        else {
            if (-dis_x <= w) x = true;
        }
        if (dis_y > 0){
            if (dis_y <= n) y = true;
        } 
        else {
            if (-dis_y <= s) y = true;
        }
        if (x && y) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
