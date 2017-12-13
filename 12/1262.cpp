#include <cstdio>

int main()
{
    int n, p;
    int m25, m50;
    while (scanf("%d", &n) == 1)
    {
        m25 = m50 = 0;
        bool sucess = true;
        while (n--)
        {
            scanf("%d", &p);
            switch (p)
            {
                case 25: m25++; break;
                case 50: {
                    m50++;
                    if (m25) m25--;
                    else goto fail;
                    break;
                }
                case 100: {
                    if (m50 && m25) {m50--; m25--;}
                    else if (m25 >= 3) {m25 -= 3;}
                    else goto fail;
                }                
            }

            sucess:
            continue;
            
            fail:
            sucess = false;
        }
        sucess ? printf("YES\n") : printf("NO\n");
    }
}