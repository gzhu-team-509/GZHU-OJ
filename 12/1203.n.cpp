#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{  
    int length;
    while (cin >> length)
    {
        string s;
        getline(cin, s);
        getline(cin, s);
        s += ' ';
        
        int count = 0;
        for (int i = 0; i <= length; i++)
        if (isalpha(s[i]) && !isalpha(s[i + 1])) count++;

        cout << count << endl;
    }
}
