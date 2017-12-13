#include <iostream>
#include <cctype>
using namespace std;

char ch;

int main()
{
    while (cin >> ch)
    {
        if (isdigit(ch))
        {
            cout << "This is a number!" << endl;
            continue;
        }
        if (isalpha(ch))
        {
            cout << "This is a letter!" << endl;
            continue;
        }
        cout << "I don't know!" << endl;
    }
}
