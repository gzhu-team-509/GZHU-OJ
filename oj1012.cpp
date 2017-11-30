#include <iostream>
#include <cstdio>
using namespace std;

int decimal[4];
int binary[4];
int i, j;

bool to_binary();
int M_math(int);

int main()
{
    while (scanf("%d.%d.%d.%d", &decimal[0], &decimal[1], &decimal[2], &decimal[3]) == 4)
    {
        scanf("%8d.%8d.%8d.%8d", &binary[0], &binary[1], &binary[2], &binary[3]);
        if (to_binary()) cout << "Yes"<<endl; 
        else cout << "No" << endl;
    }
}

bool to_binary()
{
    int rslt;
    bool ok = true;
    for (int i = 0; i < 4; i++)
    {
        
        
        rslt = M_math(binary[i]);
         if (rslt == decimal[i]) continue;
        
         else 
            ok = false;
            break;
    }
    return ok;
}
int M_math(int d)//传参,神来之笔
{
    
    int a=1,b=1,c=0;
    for(int j=0;j<8;j++)
     {
    
        c += (d/a)%10*b;
        a *= 10;
        b *= 2;
     }
     return c;
}
