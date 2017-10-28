/* 打水仙草数表 */
#include <iostream>
#include <cstring>
using namespace std;

unsigned int schema[1000];

int main()
{
    memset(schema, -1, sizeof(schema));
    
    // 打表
    for (int i = 1, head = 0; i <= 999; i++)
    {
        int num = i, sum = 0;
        do {
            sum += num % 2;
        } while (num /= 2);
        if (sum % 2) continue;
        else schema[head++] = i;
    }

    int a, b;
    while (cin >> a >> b)
    {
        int num = 0;
        for (int i = 0; i <= 999; i++) {
            if (a <= schema[i] && b >= schema[i]) num++;
        }
        cout << num << endl;
    }
}
