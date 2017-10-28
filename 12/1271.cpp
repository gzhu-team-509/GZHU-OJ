#include <iostream>
#include <cstdio>
using namespace std;

int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int days_sp[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool is_leap(int);

int main()
{
    int yyyy, mm, dd;
    while (scanf("%d/%d/%d", &yyyy, &mm, &dd) == 3)
    {
        int * active, total = 0;
        is_leap(yyyy) ? (active = days_sp) : (active = days);
        for (int i = 0; i < mm; i++) total += active[i];
        total += dd;
        cout << total << endl;
    }
}

bool is_leap(int year)
{
    if (!(year % 100))
    {
        if (year % 400) return false;
        else return true;
    }
    else 
    {
        if (year % 4) return false;
        else return true;
    }
}
