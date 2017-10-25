#include <iostream>
#include <cstring>
using namespace std;

class Pokemon 
{
public: 
    string name, ex;
    int h, a, d, s, p;
    
    Pokemon()
    {
        string temp;
        cin >> name >> h >> a >> d >> s >> p >> ex;
    }

    int getAttack(int def)
    {
        int injury;
        // （攻击方攻击力×42×技能威力÷防御方防御力÷50+2）×属性相克       
        if (!ex.compare(string("x1"))) {
            injury = (a * 42 * p / def / 50 + 2) * 1;
        }
        if (!ex.compare(string("x2"))) {
            injury = (a * 42 * p / def / 50 + 2) * 2;
        }
        if (!ex.compare(string("x4"))) {
            injury = (a * 42 * p / def / 50 + 2) * 4;
        }
        if (!ex.compare(string("x0"))) {
            injury = 0;
        }
        if (!ex.compare(string("x1/2"))) {
            injury = (a * 42 * p / def / 50 + 2) / 2;
        }
        if (!ex.compare(string("x1/4"))) {
            injury = (a * 42 * p / def / 50 + 2) / 4;
        }
        if (injury <= 0) {
            injury = 1;
        }
        return injury;
    }

    void victory(int kase)
    {
        cout << "Round #" << kase << " : " << name << " win!" << endl;
    }
};

int n;

int main()
{
    cin >> n;
    int kase = 0;
    while (n--)
    {
        Pokemon one, two;
        int at1 = one.getAttack(two.d);
        int at2 = two.getAttack(one.d);
        while (true)
        {
            if (one.s >= two.s)
            {
                two.h -= at1;
                if (two.h <= 0) 
                {
                    one.victory(++kase);    
                    break;
                }
                else
                {
                    one.h -= at2;
                    if (one.h <= 0)
                    {
                        two.victory(++kase);
                        break;
                    }
                }
            }
            else
            {
                one.h -= at2;
                if (one.h <= 0)
                {
                    two.victory(++kase);    
                    break;
                }
                else 
                {
                    two.h -= at1;
                    if (two.h <= 0)
                    {
                        one.victory(++kase);
                        break;
                    }
                }
            }
        }
    }
}
