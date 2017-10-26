#include <iostream>
#include <cstdio>
using namespace std;

unsigned long long n;

int main()
{
    while (scanf("%llu", &n) != EOF)
    {
        if (n <= 32767) {
            cout << "short" << endl;
            continue;
        }
        if (n <= 2147483647) {
            cout << "int" << endl;
            continue;
        }
        if (n <= 9223372036854775807) {
            cout << "long long" << endl;
            continue; 
        }
        cout << "It is too big!" << endl;
    }
}
