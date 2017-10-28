#include <iostream>
using namespace std;

int main()
{
    int t;
    while (cin >> t)
    {
        if (t > 100) {
            cout << "Score is error!" << endl;
            continue;
        }
        if (t >= 90) {
            cout << "A" << endl;
            continue;
        }
        if (t >= 80) {
            cout << "B" << endl;
            continue;
        }
        if (t >= 70) {
            cout << "C" << endl;
            continue;
        }
        if (t >= 60) {
            cout << "D" << endl;
            continue;
        }
        if (t >= 0) 
        {
            cout << "E" << endl;
            continue;
        }
        cout << "Score is error!" << endl;
    }
}
