/* WRONG ANSWER */
#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

struct node
{
    int mth;
    int day;
    int activity;       // 3 = LIVE; 2 = Practice; 1 = Game
} schedule[1005];

bool cmp(node lhs, node rhs)
{
    if (lhs.mth != rhs.mth)
        return lhs.mth < rhs.mth;
    if (lhs.day != rhs.day)
        return lhs.day < lhs.day;
    return lhs.activity > rhs.activity;
}

int main()
{
    int cnt, kase = 0;
    while (cin >> cnt)
    {
        for (int i = 0; i < cnt; i++)
        {
            int mth, day;
            char activity[10];
            scanf("%d%d%s", &mth, &day, activity);

            schedule[i].mth = mth;
            schedule[i].day = day;
            switch(activity[0])
            {
                case 'L': {
                    schedule[i].activity = 3;
                    break;
                }
                case 'G': {
                    schedule[i].activity = 1;
                    break;
                }
                case 'P': {
                    schedule[i].activity = 2;
                    break;
                }
            }
        }

        sort(&schedule[0], &schedule[cnt], cmp);

        if (kase++) cout << endl;
        for (int i = 0; i < cnt; i++)
        {
            cout << schedule[i].mth << " " << schedule[i].day << " ";
            switch (schedule[i].activity)
            {
                case 1: {
                    cout << "Game" << endl;
                    break;
                }
                case 2: {
                    cout << "Practice" << endl;
                    break;
                }
                case 3: {
                    cout << "LIVE" << endl;
                    break;
                }
            }
        }
    }
}
