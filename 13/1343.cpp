#include <iostream>
#include <vector>
using namespace std;

struct zombies
{
    int type, quantity;
};

int main()
{
    int tot;
    while (cin >> tot)
    {
        vector<zombies> grp;

        int type; cin >> type;
        zombies cur = {type, 1};
        for (int i = 2; i <= tot; i++)
        {
            cin >> type;
            if (cur.type == type) cur.quantity++;
            if (cur.type != type)
            {
                grp.push_back(cur);
                cur = {type, 1};
            }
        }
        grp.push_back(cur);

        int weapon = 1, dealing = 0, cost = tot;
        while (dealing < grp.size() - 1)
        {
            if (weapon == grp[dealing].type)
            {
                dealing++;
                continue;
            }
            if (grp[dealing].quantity == 1)
            {
                cost++; dealing++;
                continue;
            }
            else
            {
                weapon = grp[dealing].type;
                cost++; dealing++;
            }
        }
        if (weapon != grp[dealing].type) cost++;

        cout << cost << endl;
    }
}
