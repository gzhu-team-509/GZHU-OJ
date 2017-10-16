/**
 * 链接：
 * https://www.gzhuacm.cn/problem?pid=1214
 *
 */

#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    while(cin>>a>>b>>c)
    {
        if(a>=b){
            if(a>=c){
                cout << a << endl;
            }else{
                cout << c << endl;
            }
        }
        else{
            if(b>=c){
                cout << b << endl;
            }else{
                cout << c << endl;
            }
        }
    }

    return 0;
}
