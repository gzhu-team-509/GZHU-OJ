#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    while (cin >> s)
    {
        int top = 2;
        int dwn = 5;
        int wst = 3;
        int est = 4;
        int sth = 1;
        int nth = 6;

        for (int i = 0; i < s.size(); i++)
        {
            switch (s[i])
            {
                case 'E':
                {
                    int tmp = est;
                    est = top;
                    top = wst;
                    wst = dwn;
                    dwn = tmp;
                    break;
                }
                case 'W':
                {
                    int tmp = wst;
                    wst = top;
                    top = est;
                    est = dwn;
                    dwn = tmp;
                    break;
                }
                case 'N':
                {
                    int tmp = nth;
                    nth = top;
                    top = sth;
                    sth = dwn;
                    dwn = tmp;
                    break;
                }   
                case 'S':
                {
                    int tmp = sth;
                    sth = top;
                    top = nth;
                    nth = dwn;
                    dwn = tmp;
                    break;
                }
            }
        }

        cout << top << endl;
    }
}
