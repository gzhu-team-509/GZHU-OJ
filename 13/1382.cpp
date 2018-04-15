/* 仿写自 http://paste.ubuntu.com/25758134/ */

#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

map<string, int> ranks;
map<string, int> levels;

struct node
{
    string rank, name, strength, stamina, agile, magic, fortune, trea;
    int value[7];
};

void init()
{
    ranks["Saber"] = 7;
    ranks["Archer"] = 6;
    ranks["Lancer"] = 5;
    ranks["Rider"] = 4;
    ranks["Assassin"] = 3;
    ranks["Caster"] = 2;
    ranks["Berserker"] = 1;

    levels["EX"] = 17;
    levels["A+++"] = 16;
    levels["A++"] = 15;
    levels["A+"] = 14;
    levels["A"] = 13;
    levels["A-"] = 12;
    levels["B+"] = 11;
    levels["B"] = 10;
    levels["B-"] = 9;
    levels["C+"] = 8;
    levels["C"] = 7;
    levels["C-"] = 6;
    levels["D+"] = 5;
    levels["D"] = 4;
    levels["D-"] = 3;
    levels["E+"] = 2;
    levels["E"] = 1;
}

bool cmp(node a, node b)
{
   for (int i = 0; i < 7; i++)
   {
       if (a.value[i] != b.value[i])
       return a.value[i] > b.value[i];
   }
}

int main()
{
    init();
    node serv[7];
    for (int i = 0; i < 7; i++)
    {
        cin >> serv[i].rank >> serv[i].name >> serv[i].strength >> serv[i].stamina >> serv[i].agile >> serv[i].magic >> serv[i].fortune >> serv[i].trea;
        serv[i].value[0] = levels[serv[i].fortune];
        serv[i].value[1] = levels[serv[i].trea];
        serv[i].value[2] = levels[serv[i].agile];
        serv[i].value[3] = levels[serv[i].magic];
        serv[i].value[4] = levels[serv[i].strength];
        serv[i].value[5] = levels[serv[i].stamina];
        serv[i].value[6] = ranks[serv[i].rank];
    }
    sort(&serv[0], &serv[7], cmp);
    for (int i = 0; i < 7; i++)
    {
        cout << serv[i].rank  << " " << serv[i].name << " " << serv[i].strength << " " << serv[i].stamina  << " " << serv[i].agile << " " << serv[i].magic << " " << serv[i].fortune << " " <<serv[i].trea << endl;
    }
}
